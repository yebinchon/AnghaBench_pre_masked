
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t curvalue; } ;
struct TYPE_4__ {size_t nummaps; int* maplist; int maxpages; scalar_t__ currentmap; scalar_t__ page; TYPE_1__ gametype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 char* FUNC_3 (int) ;
 int FUNC_4 () ;
 int* VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void FUNC_5( void* VAR_6, int VAR_7 ) {
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 const char *VAR_12;

 if( VAR_7 != VAR_3) {
  return;
 }

 VAR_9 = FUNC_4();
 VAR_5.nummaps = 0;
 VAR_11 = 1 << VAR_4[VAR_5.gametype.curvalue];
 if( VAR_4[VAR_5.gametype.curvalue] == VAR_0 ) {
  VAR_11 |= ( 1 << VAR_1 );
 }
 for( VAR_8 = 0; VAR_8 < VAR_9; VAR_8++ ) {
  VAR_12 = FUNC_3( VAR_8 );

  VAR_10 = FUNC_0( FUNC_1( VAR_12, "type") );
  if( !( VAR_10 & VAR_11 ) ) {
   continue;
  }

  VAR_5.maplist[ VAR_5.nummaps ] = VAR_8;
  VAR_5.nummaps++;
 }
 VAR_5.maxpages = (VAR_5.nummaps + VAR_2-1)/VAR_2;
 VAR_5.page = 0;
 VAR_5.currentmap = 0;

 FUNC_2();
}
