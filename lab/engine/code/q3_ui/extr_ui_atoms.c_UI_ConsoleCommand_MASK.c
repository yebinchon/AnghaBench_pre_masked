
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int frametime; int realtime; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

qboolean FUNC_11( int VAR_3 ) {
 char *VAR_4;

 VAR_2.frametime = VAR_3 - VAR_2.realtime;
 VAR_2.realtime = VAR_3;

 VAR_4 = FUNC_2( 0 );


 FUNC_0();

 if ( FUNC_1 (VAR_4, "levelselect") == 0 ) {
  FUNC_6();
  return VAR_1;
 }

 if ( FUNC_1 (VAR_4, "postgame") == 0 ) {
  FUNC_7();
  return VAR_1;
 }

 if ( FUNC_1 (VAR_4, "ui_cache") == 0 ) {
  FUNC_4();
  return VAR_1;
 }

 if ( FUNC_1 (VAR_4, "ui_cinematics") == 0 ) {
  FUNC_5();
  return VAR_1;
 }

 if ( FUNC_1 (VAR_4, "ui_teamOrders") == 0 ) {
  FUNC_10();
  return VAR_1;
 }

 if ( FUNC_1 (VAR_4, "iamacheater") == 0 ) {
  FUNC_9();
  return VAR_1;
 }

 if ( FUNC_1 (VAR_4, "iamamonkey") == 0 ) {
  FUNC_8();
  return VAR_1;
 }

 if ( FUNC_1 (VAR_4, "ui_cdkey") == 0 ) {
  FUNC_3();
  return VAR_1;
 }

 return VAR_0;
}
