
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
typedef TYPE_3__ menucommon_s ;
struct TYPE_6__ {int curvalue; } ;
struct TYPE_5__ {float curvalue; } ;
struct TYPE_8__ {TYPE_2__ screensize; TYPE_1__ brightness; } ;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_4__ VAR_1 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5( void* VAR_2, int VAR_3 ) {
 if( VAR_3 != VAR_0 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_2)->id ) {
 case 131:
  FUNC_2();
  FUNC_0();
  break;

 case 132:
  break;

 case 128:
  FUNC_2();
  FUNC_3();
  break;

 case 130:
  FUNC_2();
  FUNC_1();
  break;

 case 133:
  FUNC_4( "r_gamma", VAR_1.brightness.curvalue / 10.0f );
  break;

 case 129:
  FUNC_4( "cg_viewsize", VAR_1.screensize.curvalue * 10 );
  break;

 case 134:
  FUNC_2();
  break;
 }
}
