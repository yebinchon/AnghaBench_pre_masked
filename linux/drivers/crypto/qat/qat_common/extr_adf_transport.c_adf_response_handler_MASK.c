
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_etr_bank_data {int irq_mask; int bank_number; int csr_addr; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct adf_etr_bank_data*) ;

void FUNC_2(uintptr_t VAR_0)
{
 struct adf_etr_bank_data *VAR_1 = (void *)VAR_0;


 FUNC_1(VAR_1);
 FUNC_0(VAR_1->csr_addr, VAR_1->bank_number,
       VAR_1->irq_mask);
}
