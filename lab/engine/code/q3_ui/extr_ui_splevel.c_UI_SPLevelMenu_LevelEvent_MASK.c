
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_4__ {int selectedArenaInfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3( void* VAR_8, int VAR_9 ) {
 if (VAR_9 != VAR_2) {
  return;
 }

 if ( VAR_6 == VAR_7 || VAR_6 == VAR_3 ) {
  return;
 }

 VAR_5 = ((menucommon_s*)VAR_8)->id - VAR_1;
 VAR_4.selectedArenaInfo = FUNC_0( VAR_6 * VAR_0 + VAR_5 );
 FUNC_1();

 FUNC_2( "ui_spSelection", VAR_6 * VAR_0 + VAR_5 );
}
