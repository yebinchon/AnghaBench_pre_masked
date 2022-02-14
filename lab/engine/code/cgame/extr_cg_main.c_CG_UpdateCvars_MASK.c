
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vmCvar; } ;
typedef TYPE_1__ cvarTable_t ;
struct TYPE_7__ {scalar_t__ modificationCount; scalar_t__ integer; } ;
struct TYPE_6__ {scalar_t__ modificationCount; } ;


 int FUNC_0 () ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;

void FUNC_3( void ) {
 int VAR_6;
 cvarTable_t *VAR_7;

 for ( VAR_6 = 0, VAR_7 = VAR_2 ; VAR_6 < VAR_3 ; VAR_6++, VAR_7++ ) {
  FUNC_2( VAR_7->vmCvar );
 }





 if ( VAR_4 != VAR_0.modificationCount ) {
  VAR_4 = VAR_0.modificationCount;

  if ( VAR_0.integer > 0 ) {
   FUNC_1( "teamoverlay", "1" );
  } else {
   FUNC_1( "teamoverlay", "0" );
  }
 }


 if ( VAR_5 != VAR_1.modificationCount ) {
  VAR_5 = VAR_1.modificationCount;
  FUNC_0();
 }
}
