
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct adf_etr_ring_data {int ring_number; TYPE_1__* bank; int ring_size; } ;
struct TYPE_2__ {int bank_number; int csr_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct adf_etr_ring_data *VAR_2)
{
 uint32_t VAR_3 =
   FUNC_0(VAR_2->ring_size,
            VAR_1,
            VAR_0);

 FUNC_1(VAR_2->bank->csr_addr, VAR_2->bank->bank_number,
         VAR_2->ring_number, VAR_3);
}
