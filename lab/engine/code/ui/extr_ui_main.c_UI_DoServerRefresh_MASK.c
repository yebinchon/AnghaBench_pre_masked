
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {scalar_t__ realTime; } ;
struct TYPE_6__ {scalar_t__ refreshtime; int refreshActive; } ;
struct TYPE_8__ {TYPE_1__ uiDC; TYPE_2__ serverStatus; } ;
struct TYPE_7__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static void FUNC_6( void )
{
 qboolean VAR_9 = VAR_5;

 if (!VAR_7.serverStatus.refreshActive) {
  return;
 }
 if (VAR_8.integer != VAR_3) {
  if (VAR_8.integer == VAR_4) {
   if (!FUNC_4(VAR_1)) {
    VAR_9 = VAR_6;
   }
  } else {
   if (FUNC_4(VAR_0) < 0) {
    VAR_9 = VAR_6;
   }
  }
 }

 if (VAR_7.uiDC.realTime < VAR_7.serverStatus.refreshtime) {
  if (VAR_9) {
   return;
  }
 }


 if (FUNC_5(FUNC_1())) {
  VAR_7.serverStatus.refreshtime = VAR_7.uiDC.realTime + 1000;
 } else if (!VAR_9) {

  FUNC_0(2);

  FUNC_2();
 } else if ( VAR_8.integer == VAR_4 ) {

  FUNC_3( VAR_2, "localservers\n" );
  VAR_7.serverStatus.refreshtime = VAR_7.uiDC.realTime + 5000;
 }

 FUNC_0(VAR_5);
}
