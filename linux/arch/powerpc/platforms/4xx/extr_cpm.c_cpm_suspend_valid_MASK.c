
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_2__ {int suspend; int standby; } ;




 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(suspend_state_t VAR_1)
{
 switch (VAR_1) {
 case 128:
  return !!VAR_0.standby;
 case 129:
  return !!VAR_0.suspend;
 default:
  return 0;
 }
}
