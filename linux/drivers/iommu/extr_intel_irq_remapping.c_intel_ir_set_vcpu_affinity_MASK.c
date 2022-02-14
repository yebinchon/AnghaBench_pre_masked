
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_data {int pi_desc_addr; int vector; } ;
struct irte {int p_pst; int pda_l; int pda_h; int p_vector; scalar_t__ p_urgent; } ;
struct irq_data {struct intel_ir_data* chip_data; } ;
struct intel_ir_data {int irq_2_iommu; struct irte irte_entry; } ;
typedef int irte_pi ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irte*,struct irte*) ;
 int FUNC_1 (struct irte*,int ,int) ;
 int FUNC_2 (int *,struct irte*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_2, void *VAR_3)
{
 struct intel_ir_data *VAR_4 = VAR_2->chip_data;
 struct vcpu_data *VAR_5 = VAR_3;


 if (!VAR_5) {
  FUNC_2(&VAR_4->irq_2_iommu, &VAR_4->irte_entry);
 } else {
  struct irte VAR_6;
  FUNC_1(&VAR_6, 0, sizeof(VAR_6));
  FUNC_0(&VAR_6, &VAR_4->irte_entry);


  VAR_6.p_pst = 1;
  VAR_6.p_urgent = 0;
  VAR_6.p_vector = VAR_5->vector;
  VAR_6.pda_l = (VAR_5->pi_desc_addr >>
    (32 - VAR_1)) & ~(-1UL << VAR_1);
  VAR_6.pda_h = (VAR_5->pi_desc_addr >> 32) &
    ~(-1UL << VAR_0);

  FUNC_2(&VAR_4->irq_2_iommu, &VAR_6);
 }

 return 0;
}
