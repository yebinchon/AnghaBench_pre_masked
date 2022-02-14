
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_etr_ring_data {TYPE_1__* bank; } ;
struct TYPE_2__ {int ring_mask; int bank_number; int csr_addr; } ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct adf_etr_ring_data *VAR_0)
{
 FUNC_0(VAR_0->bank->csr_addr,
       VAR_0->bank->bank_number,
       VAR_0->bank->ring_mask & 0xFF);
}
