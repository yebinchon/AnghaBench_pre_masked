
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_etr_ring_data {int ring_number; struct adf_etr_bank_data* bank; } ;
struct adf_etr_bank_data {int bank_number; int csr_addr; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct adf_etr_ring_data*) ;
 int FUNC_3 (struct adf_etr_bank_data*,int ) ;
 int FUNC_4 (struct adf_etr_ring_data*) ;
 int FUNC_5 (struct adf_etr_bank_data*,int ) ;
 int FUNC_6 (struct adf_etr_ring_data*) ;

void FUNC_7(struct adf_etr_ring_data *VAR_0)
{
 struct adf_etr_bank_data *VAR_1 = VAR_0->bank;


 FUNC_3(VAR_1, VAR_0->ring_number);


 FUNC_1(VAR_1->csr_addr, VAR_1->bank_number,
         VAR_0->ring_number, 0);
 FUNC_0(VAR_1->csr_addr, VAR_1->bank_number,
       VAR_0->ring_number, 0);
 FUNC_4(VAR_0);
 FUNC_5(VAR_1, VAR_0->ring_number);

 FUNC_6(VAR_0);
 FUNC_2(VAR_0);
}
