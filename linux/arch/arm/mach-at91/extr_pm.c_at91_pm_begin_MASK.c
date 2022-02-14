
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_3__ {int mode; int suspend_mode; int standby_mode; } ;
struct TYPE_4__ {TYPE_1__ data; } ;




 int FUNC_0 (int,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_1(suspend_state_t VAR_1)
{
 switch (VAR_1) {
 case 129:
  VAR_0.data.mode = VAR_0.data.suspend_mode;
  break;

 case 128:
  VAR_0.data.mode = VAR_0.data.standby_mode;
  break;

 default:
  VAR_0.data.mode = -1;
 }

 return FUNC_0(VAR_0.data.mode, 1);
}
