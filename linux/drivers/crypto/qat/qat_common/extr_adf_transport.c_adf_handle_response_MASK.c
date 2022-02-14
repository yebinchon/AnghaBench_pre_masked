
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct adf_etr_ring_data {scalar_t__ head; int ring_number; TYPE_1__* bank; scalar_t__ base_addr; int ring_size; int msg_size; int inflights; int (* callback ) (scalar_t__*) ;} ;
struct TYPE_2__ {int bank_number; int csr_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct adf_etr_ring_data *VAR_1)
{
 uint32_t VAR_2 = 0;
 uint32_t *VAR_3 = (uint32_t *)((uintptr_t)VAR_1->base_addr + VAR_1->head);

 while (*VAR_3 != VAR_0) {
  VAR_1->callback((uint32_t *)VAR_3);
  FUNC_4(VAR_1->inflights);
  *VAR_3 = VAR_0;
  VAR_1->head = FUNC_3(VAR_1->head +
     FUNC_0(VAR_1->msg_size),
     FUNC_1(VAR_1->ring_size));
  VAR_2++;
  VAR_3 = (uint32_t *)((uintptr_t)VAR_1->base_addr + VAR_1->head);
 }
 if (VAR_2 > 0)
  FUNC_2(VAR_1->bank->csr_addr,
        VAR_1->bank->bank_number,
        VAR_1->ring_number, VAR_1->head);
 return 0;
}
