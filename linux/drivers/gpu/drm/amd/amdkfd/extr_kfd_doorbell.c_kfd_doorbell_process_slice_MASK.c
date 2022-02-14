
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_dev {TYPE_1__* device_info; } ;
struct TYPE_2__ {int doorbell_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,int ) ;

size_t FUNC_1(struct kfd_dev *VAR_2)
{
 return FUNC_0(VAR_2->device_info->doorbell_size *
   VAR_0,
   VAR_1);
}
