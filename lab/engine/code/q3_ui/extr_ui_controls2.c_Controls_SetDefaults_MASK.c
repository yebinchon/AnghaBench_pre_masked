
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_21__ {int defaultbind2; int bind2; int defaultbind1; int bind1; int label; } ;
typedef TYPE_9__ bind_t ;
struct TYPE_20__ {scalar_t__ curvalue; } ;
struct TYPE_19__ {scalar_t__ curvalue; } ;
struct TYPE_18__ {scalar_t__ curvalue; } ;
struct TYPE_17__ {scalar_t__ curvalue; } ;
struct TYPE_16__ {scalar_t__ curvalue; } ;
struct TYPE_15__ {scalar_t__ curvalue; } ;
struct TYPE_14__ {scalar_t__ curvalue; } ;
struct TYPE_13__ {int curvalue; } ;
struct TYPE_12__ {TYPE_8__ freelook; TYPE_7__ joythreshold; TYPE_6__ joyenable; TYPE_5__ sensitivity; TYPE_4__ autoswitch; TYPE_3__ alwaysrun; TYPE_2__ smoothmouse; TYPE_1__ invertmouse; } ;


 scalar_t__ FUNC_0 (char*) ;
 TYPE_9__* VAR_0 ;
 TYPE_10__ VAR_1 ;

__attribute__((used)) static void FUNC_1( void )
{
 int VAR_2;
 bind_t* VAR_3;


 VAR_3 = VAR_0;


 for (VAR_2=0; ;VAR_2++,VAR_3++)
 {
  if (!VAR_3->label)
   break;

  VAR_3->bind1 = VAR_3->defaultbind1;
  VAR_3->bind2 = VAR_3->defaultbind2;
 }

 VAR_1.invertmouse.curvalue = FUNC_0( "m_pitch" ) < 0;
 VAR_1.smoothmouse.curvalue = FUNC_0( "m_filter" );
 VAR_1.alwaysrun.curvalue = FUNC_0( "cl_run" );
 VAR_1.autoswitch.curvalue = FUNC_0( "cg_autoswitch" );
 VAR_1.sensitivity.curvalue = FUNC_0( "sensitivity" );
 VAR_1.joyenable.curvalue = FUNC_0( "in_joystick" );
 VAR_1.joythreshold.curvalue = FUNC_0( "joy_threshold" );
 VAR_1.freelook.curvalue = FUNC_0( "cl_freelook" );
}
