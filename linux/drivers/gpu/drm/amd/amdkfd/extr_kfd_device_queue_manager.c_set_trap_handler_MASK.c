
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct qcm_process_device {void* tma_addr; void* tba_addr; scalar_t__ cwsr_kaddr; } ;
struct device_queue_manager {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ cwsr_enabled; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct device_queue_manager *VAR_1,
    struct qcm_process_device *VAR_2,
    uint64_t VAR_3,
    uint64_t VAR_4)
{
 uint64_t *VAR_5;

 if (VAR_1->dev->cwsr_enabled) {

  VAR_5 = (uint64_t *)(VAR_2->cwsr_kaddr + VAR_0);
  VAR_5[0] = VAR_3;
  VAR_5[1] = VAR_4;
 } else {
  VAR_2->tba_addr = VAR_3;
  VAR_2->tma_addr = VAR_4;
 }

 return 0;
}
