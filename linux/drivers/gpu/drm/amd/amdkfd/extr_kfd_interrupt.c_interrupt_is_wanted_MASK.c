
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct kfd_dev {TYPE_2__* device_info; } ;
struct TYPE_4__ {TYPE_1__* event_interrupt_class; } ;
struct TYPE_3__ {unsigned int (* interrupt_isr ) (struct kfd_dev*,int const*,int *,int*) ;} ;


 unsigned int FUNC_0 (struct kfd_dev*,int const*,int *,int*) ;

bool FUNC_1(struct kfd_dev *VAR_0,
   const uint32_t *VAR_1,
   uint32_t *VAR_2, bool *VAR_3)
{

 unsigned int VAR_4 = 0;

 VAR_4 |= VAR_0->device_info->event_interrupt_class->interrupt_isr(VAR_0,
      VAR_1, VAR_2, VAR_3);

 return VAR_4 != 0;
}
