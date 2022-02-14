
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int sdma_vm_addr; } ;
struct queue {TYPE_2__ properties; TYPE_1__* process; } ;
struct qcm_process_device {int dummy; } ;
struct device_queue_manager {int dummy; } ;
struct TYPE_3__ {scalar_t__ is_32bit_user_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qcm_process_device*) ;

__attribute__((used)) static void FUNC_3(struct device_queue_manager *VAR_4, struct queue *VAR_5,
    struct qcm_process_device *VAR_6)
{
 uint32_t VAR_7 = (1 << VAR_0);

 if (VAR_5->process->is_32bit_user_mode)
  VAR_7 |= (1 << VAR_1) |
    FUNC_0(FUNC_2(VAR_6));
 else
  VAR_7 |= ((FUNC_1(FUNC_2(VAR_6))) <<
    VAR_3) &
    VAR_2;

 VAR_5->properties.sdma_vm_addr = VAR_7;
}
