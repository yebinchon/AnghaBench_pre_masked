
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irte {int pst; int high; int low; } ;
struct irq_2_iommu {int irte_index; int sub_handle; int mode; struct intel_iommu* iommu; } ;
struct intel_iommu {TYPE_1__* ir_table; } ;
struct TYPE_2__ {struct irte* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_iommu*,struct irte*,int) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct intel_iommu*,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct irq_2_iommu *VAR_3,
         struct irte *VAR_4)
{
 struct intel_iommu *VAR_5;
 unsigned long VAR_6;
 struct irte *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_3)
  return -1;

 FUNC_4(&VAR_2, VAR_6);

 VAR_5 = VAR_3->iommu;

 VAR_9 = VAR_3->irte_index + VAR_3->sub_handle;
 VAR_7 = &VAR_5->ir_table->base[VAR_9];
 {
  FUNC_6(&VAR_7->low, VAR_4->low);
  FUNC_6(&VAR_7->high, VAR_4->high);
 }
 FUNC_1(VAR_5, VAR_7, sizeof(*VAR_7));

 VAR_8 = FUNC_3(VAR_5, VAR_9, 0);


 VAR_3->mode = VAR_7->pst ? VAR_0 : VAR_1;
 FUNC_5(&VAR_2, VAR_6);

 return VAR_8;
}
