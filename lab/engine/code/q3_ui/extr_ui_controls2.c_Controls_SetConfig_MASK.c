
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


struct TYPE_21__ {int bind1; int bind2; int command; int label; } ;
typedef TYPE_9__ bind_t ;
struct TYPE_20__ {int curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_15__ {int curvalue; } ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_13__ {scalar_t__ curvalue; } ;
struct TYPE_12__ {TYPE_8__ freelook; TYPE_7__ joythreshold; TYPE_6__ joyenable; TYPE_5__ sensitivity; TYPE_4__ autoswitch; TYPE_3__ alwaysrun; TYPE_2__ smoothmouse; TYPE_1__ invertmouse; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_9__* VAR_1 ;
 TYPE_10__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5( void )
{
 int VAR_3;
 bind_t* VAR_4;


 VAR_4 = VAR_1;


 for (VAR_3=0; ;VAR_3++,VAR_4++)
 {
  if (!VAR_4->label)
   break;

  if (VAR_4->bind1 != -1)
  {
   FUNC_4( VAR_4->bind1, VAR_4->command );

   if (VAR_4->bind2 != -1)
    FUNC_4( VAR_4->bind2, VAR_4->command );
  }
 }

 if ( VAR_2.invertmouse.curvalue )
  FUNC_2( "m_pitch", -FUNC_0( FUNC_3( "m_pitch" ) ) );
 else
  FUNC_2( "m_pitch", FUNC_0( FUNC_3( "m_pitch" ) ) );

 FUNC_2( "m_filter", VAR_2.smoothmouse.curvalue );
 FUNC_2( "cl_run", VAR_2.alwaysrun.curvalue );
 FUNC_2( "cg_autoswitch", VAR_2.autoswitch.curvalue );
 FUNC_2( "sensitivity", VAR_2.sensitivity.curvalue );
 FUNC_2( "in_joystick", VAR_2.joyenable.curvalue );
 FUNC_2( "joy_threshold", VAR_2.joythreshold.curvalue );
 FUNC_2( "cl_freelook", VAR_2.freelook.curvalue );
 FUNC_1( VAR_0, "in_restart\n" );
}
