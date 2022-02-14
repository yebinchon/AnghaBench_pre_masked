
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct adf_etr_ring_data {int lock; scalar_t__ tail; int ring_number; TYPE_1__* bank; int ring_size; int msg_size; scalar_t__ base_addr; int inflights; } ;
struct TYPE_2__ {int bank_number; int csr_addr; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int *,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct adf_etr_ring_data *VAR_1, uint32_t *VAR_2)
{
 if (FUNC_5(1, VAR_1->inflights) >
     FUNC_0(VAR_1->ring_size, VAR_1->msg_size)) {
  FUNC_6(VAR_1->inflights);
  return -VAR_0;
 }
 FUNC_8(&VAR_1->lock);
 FUNC_7((void *)((uintptr_t)VAR_1->base_addr + VAR_1->tail), VAR_2,
        FUNC_1(VAR_1->msg_size));

 VAR_1->tail = FUNC_4(VAR_1->tail +
    FUNC_1(VAR_1->msg_size),
    FUNC_2(VAR_1->ring_size));
 FUNC_3(VAR_1->bank->csr_addr, VAR_1->bank->bank_number,
       VAR_1->ring_number, VAR_1->tail);
 FUNC_9(&VAR_1->lock);
 return 0;
}
