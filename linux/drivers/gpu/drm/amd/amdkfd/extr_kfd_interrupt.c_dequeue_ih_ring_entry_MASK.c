
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {TYPE_1__* device_info; int ih_fifo; } ;
struct TYPE_2__ {int ih_ring_entry_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,void*,int) ;

__attribute__((used)) static bool FUNC_2(struct kfd_dev *VAR_0, void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->ih_fifo, VAR_1,
    VAR_0->device_info->ih_ring_entry_size);

 FUNC_0(VAR_2 && VAR_2 != VAR_0->device_info->ih_ring_entry_size);

 return VAR_2 == VAR_0->device_info->ih_ring_entry_size;
}
