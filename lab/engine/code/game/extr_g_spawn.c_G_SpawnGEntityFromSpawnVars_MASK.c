
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int currentOrigin; } ;
struct TYPE_12__ {int trBase; } ;
struct TYPE_13__ {int origin; TYPE_1__ pos; } ;
struct TYPE_15__ {TYPE_3__ r; TYPE_2__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_17__ {size_t integer; } ;
struct TYPE_16__ {int numSpawnVars; int ** spawnVars; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (char*,char*,int*) ;
 scalar_t__ FUNC_6 (char*,int *,char**) ;
 int FUNC_7 (int ,int ) ;
 TYPE_6__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 char* FUNC_8 (char*,char*) ;

gentity_t* FUNC_9( void ) {
 int VAR_6;
 gentity_t *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 static char *VAR_11[] = {"ffa", "tournament", "single", "team", "ctf", "oneflag", "obelisk", "harvester"};


 VAR_7 = FUNC_4();

 for ( VAR_6 = 0 ; VAR_6 < VAR_5.numSpawnVars ; VAR_6++ ) {
  FUNC_3( VAR_5.spawnVars[VAR_6][0], VAR_5.spawnVars[VAR_6][1], VAR_7 );
 }


 if ( VAR_4.integer == VAR_2 ) {
  FUNC_5( "notsingle", "0", &VAR_6 );
  if ( VAR_6 ) {
   FUNC_0();
   FUNC_2( VAR_7 );
   return ((void*)0);
  }
 }

 if ( VAR_4.integer >= VAR_3 ) {
  FUNC_5( "notteam", "0", &VAR_6 );
  if ( VAR_6 ) {
   FUNC_0();
   FUNC_2( VAR_7 );
   return ((void*)0);
  }
 } else {
  FUNC_5( "notfree", "0", &VAR_6 );
  if ( VAR_6 ) {
   FUNC_0();
   FUNC_2( VAR_7 );
   return ((void*)0);
  }
 }
 FUNC_5( "notq3a", "0", &VAR_6 );
 if ( VAR_6 ) {
  FUNC_0();
  FUNC_2( VAR_7 );
  return ((void*)0);
 }


 if( FUNC_6( "gametype", ((void*)0), &VAR_9 ) ) {
  if( VAR_4.integer >= VAR_0 && VAR_4.integer < VAR_1 ) {
   VAR_10 = VAR_11[VAR_4.integer];

   VAR_8 = FUNC_8( VAR_9, VAR_10 );
   if( !VAR_8 ) {
    FUNC_0();
    FUNC_2( VAR_7 );
    return ((void*)0);
   }
  }
 }


 FUNC_7( VAR_7->s.origin, VAR_7->s.pos.trBase );
 FUNC_7( VAR_7->s.origin, VAR_7->r.currentOrigin );


 if ( !FUNC_1( VAR_7 ) ) {
  FUNC_2( VAR_7 );
  return ((void*)0);
 }
 return VAR_7;
}
