
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_etr_bank_data {int resp_handler; int bank_number; int csr_addr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct adf_etr_bank_data *VAR_3 = VAR_2;

 FUNC_0(VAR_3->csr_addr, VAR_3->bank_number, 0);
 FUNC_1(&VAR_3->resp_handler);
 return VAR_0;
}
