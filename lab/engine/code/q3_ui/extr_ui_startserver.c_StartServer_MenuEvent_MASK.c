
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_2__ menucommon_s ;
struct TYPE_4__ {size_t curvalue; } ;
struct TYPE_6__ {int multiplayer; TYPE_1__ gametype; int page; int maxpages; } ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4( void* VAR_3, int VAR_4 ) {
 if( VAR_4 != VAR_0 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_3)->id ) {
 case 130:
  if( VAR_2.page > 0 ) {
   VAR_2.page--;
   FUNC_0();
  }
  break;

 case 131:
  if( VAR_2.page < VAR_2.maxpages - 1 ) {
   VAR_2.page++;
   FUNC_0();
  }
  break;

 case 128:
  FUNC_3( "g_gameType", VAR_1[VAR_2.gametype.curvalue] );
  FUNC_2( VAR_2.multiplayer );
  break;

 case 129:
  FUNC_1();
  break;
 }
}
