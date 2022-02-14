
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nextmap ;
struct TYPE_8__ {scalar_t__ connected; } ;
struct TYPE_7__ {scalar_t__* persistant; } ;
struct TYPE_9__ {TYPE_2__ pers; TYPE_1__ ps; } ;
typedef TYPE_3__ gclient_t ;
typedef int d1 ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {TYPE_3__* clients; scalar_t__* teamScores; scalar_t__ intermissiontime; int * changemap; scalar_t__ restarted; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_6__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 TYPE_4__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,char*) ;

void FUNC_7 (void) {
 int VAR_12;
 gclient_t *VAR_13;
 char VAR_14[VAR_4];
 char VAR_15[VAR_4];


 FUNC_0();



 if ( VAR_8.integer == VAR_3 ) {
  if ( !VAR_10.restarted ) {
   FUNC_3();
   FUNC_6( VAR_2, "map_restart 0\n" );
   VAR_10.restarted = VAR_11;
   VAR_10.changemap = ((void*)0);
   VAR_10.intermissiontime = 0;
  }
  return;
 }

 FUNC_5( "nextmap", VAR_14, sizeof(VAR_14) );
 FUNC_5( "d1", VAR_15, sizeof(VAR_15) );

 if( !FUNC_2( VAR_14, "map_restart 0" ) && FUNC_2( VAR_15, "" ) ) {
  FUNC_4( "nextmap", "vstr d2" );
  FUNC_6( VAR_2, "vstr d1\n" );
 } else {
  FUNC_6( VAR_2, "vstr nextmap\n" );
 }

 VAR_10.changemap = ((void*)0);
 VAR_10.intermissiontime = 0;


 VAR_10.teamScores[VAR_7] = 0;
 VAR_10.teamScores[VAR_6] = 0;
 for ( VAR_12=0 ; VAR_12< VAR_9.integer ; VAR_12++ ) {
  VAR_13 = VAR_10.clients + VAR_12;
  if ( VAR_13->pers.connected != VAR_0 ) {
   continue;
  }
  VAR_13->ps.persistant[VAR_5] = 0;
 }


 FUNC_1();



 for (VAR_12=0 ; VAR_12< VAR_9.integer ; VAR_12++) {
  if ( VAR_10.clients[VAR_12].pers.connected == VAR_0 ) {
   VAR_10.clients[VAR_12].pers.connected = VAR_1;
  }
 }

}
