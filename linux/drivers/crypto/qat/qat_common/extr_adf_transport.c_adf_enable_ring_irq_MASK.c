
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adf_etr_bank_data {int irq_mask; int irq_coalesc_timer; int bank_number; int csr_addr; int lock; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct adf_etr_bank_data *VAR_0, uint32_t VAR_1)
{
 FUNC_2(&VAR_0->lock);
 VAR_0->irq_mask |= (1 << VAR_1);
 FUNC_3(&VAR_0->lock);
 FUNC_1(VAR_0->csr_addr, VAR_0->bank_number, VAR_0->irq_mask);
 FUNC_0(VAR_0->csr_addr, VAR_0->bank_number,
         VAR_0->irq_coalesc_timer);
}
