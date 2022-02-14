
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {TYPE_1__* device_info; int ih_fifo; } ;
struct TYPE_2__ {int ih_ring_entry_size; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,void const*,int) ;

bool FUNC_3(struct kfd_dev *VAR_0, const void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_0->ih_fifo, VAR_1,
    VAR_0->device_info->ih_ring_entry_size);
 if (VAR_2 != VAR_0->device_info->ih_ring_entry_size) {
  FUNC_0(FUNC_1(),
   "Interrupt ring overflow, dropping interrupt %d\n",
   VAR_2);
  return 0;
 }

 return 1;
}
