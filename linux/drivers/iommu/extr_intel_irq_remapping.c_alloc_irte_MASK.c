
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct irq_2_iommu {int irte_index; unsigned int irte_mask; int mode; scalar_t__ sub_handle; struct intel_iommu* iommu; } ;
struct ir_table {int bitmap; } ;
struct intel_iommu {int seq_id; int ecap; struct ir_table* ir_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (char*,unsigned int,unsigned int) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct intel_iommu *VAR_3,
        struct irq_2_iommu *VAR_4, u16 VAR_5)
{
 struct ir_table *VAR_6 = VAR_3->ir_table;
 unsigned int VAR_7 = 0;
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_5 || !VAR_4)
  return -1;

 if (VAR_5 > 1) {
  VAR_5 = FUNC_0(VAR_5);
  VAR_7 = FUNC_3(VAR_5);
 }

 if (VAR_7 > FUNC_2(VAR_3->ecap)) {
  FUNC_4("Requested mask %x exceeds the max invalidation handle"
         " mask value %Lx\n", VAR_7,
         FUNC_2(VAR_3->ecap));
  return -1;
 }

 FUNC_6(&VAR_2, VAR_8);
 VAR_9 = FUNC_1(VAR_6->bitmap,
     VAR_0, VAR_7);
 if (VAR_9 < 0) {
  FUNC_5("IR%d: can't allocate an IRTE\n", VAR_3->seq_id);
 } else {
  VAR_4->iommu = VAR_3;
  VAR_4->irte_index = VAR_9;
  VAR_4->sub_handle = 0;
  VAR_4->irte_mask = VAR_7;
  VAR_4->mode = VAR_1;
 }
 FUNC_7(&VAR_2, VAR_8);

 return VAR_9;
}
