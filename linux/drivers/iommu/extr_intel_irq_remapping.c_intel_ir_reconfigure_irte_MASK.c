
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irte {int dest_id; int vector; } ;
struct irq_data {struct intel_ir_data* chip_data; } ;
struct irq_cfg {int dest_apicid; int vector; } ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct intel_ir_data {TYPE_1__ irq_2_iommu; struct irte irte_entry; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct irq_cfg* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (TYPE_1__*,struct irte*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1, bool VAR_2)
{
 struct intel_ir_data *VAR_3 = VAR_1->chip_data;
 struct irte *VAR_4 = &VAR_3->irte_entry;
 struct irq_cfg *VAR_5 = FUNC_1(VAR_1);





 VAR_4->vector = VAR_5->vector;
 VAR_4->dest_id = FUNC_0(VAR_5->dest_apicid);


 if (VAR_2 || VAR_3->irq_2_iommu.mode == VAR_0)
  FUNC_2(&VAR_3->irq_2_iommu, VAR_4);
}
