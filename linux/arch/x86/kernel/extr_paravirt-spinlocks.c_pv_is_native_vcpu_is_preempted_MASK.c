
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func; } ;
struct TYPE_5__ {TYPE_1__ vcpu_is_preempted; } ;
struct TYPE_6__ {TYPE_2__ lock; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

bool FUNC_0(void)
{
 return VAR_1.lock.vcpu_is_preempted.func ==
  VAR_0;
}
