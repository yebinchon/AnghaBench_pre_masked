
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pingtime; scalar_t__ nettype; int gametype; int gamename; void* bPB; void* maxPing; void* minPing; void* maxclients; void* numclients; int mapname; int hostname; int adrstr; } ;
typedef TYPE_1__ servernode_t ;
struct TYPE_4__ {scalar_t__* numservers; scalar_t__ maxservers; TYPE_1__* serverlist; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 void* FUNC_6 (char*) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char** VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7( char* VAR_8, char* VAR_9, int VAR_10 )
{
 servernode_t* VAR_11;
 char* VAR_12;
 int VAR_13;


 if ((VAR_10 >= FUNC_1()) && (VAR_5 != VAR_3))
 {

  return;
 }

 if (*VAR_4.numservers >= VAR_4.maxservers) {

  VAR_11 = VAR_4.serverlist+(*VAR_4.numservers)-1;
 } else {

  VAR_11 = VAR_4.serverlist+(*VAR_4.numservers);
  (*VAR_4.numservers)++;
 }

 FUNC_4( VAR_11->adrstr, VAR_8, VAR_0 );

 FUNC_4( VAR_11->hostname, FUNC_2( VAR_9, "hostname"), VAR_1 );
 FUNC_3( VAR_11->hostname );
 FUNC_5( VAR_11->hostname );

 FUNC_4( VAR_11->mapname, FUNC_2( VAR_9, "mapname"), VAR_2 );
 FUNC_3( VAR_11->mapname );
 FUNC_5( VAR_11->mapname );

 VAR_11->numclients = FUNC_6( FUNC_2( VAR_9, "clients") );
 VAR_11->maxclients = FUNC_6( FUNC_2( VAR_9, "sv_maxclients") );
 VAR_11->pingtime = VAR_10;
 VAR_11->minPing = FUNC_6( FUNC_2( VAR_9, "minPing") );
 VAR_11->maxPing = FUNC_6( FUNC_2( VAR_9, "maxPing") );
 VAR_11->bPB = FUNC_6( FUNC_2( VAR_9, "punkbuster") );
 VAR_11->nettype = FUNC_6(FUNC_2(VAR_9, "nettype"));
 if (VAR_11->nettype < 0 || VAR_11->nettype >= FUNC_0(VAR_7) - 1) {
  VAR_11->nettype = 0;
 }

 VAR_12 = FUNC_2( VAR_9, "game");
 VAR_13 = FUNC_6( FUNC_2( VAR_9, "gametype") );
 if( VAR_13 < 0 ) {
  VAR_13 = 0;
 }
 else if( VAR_13 > 11 ) {
  VAR_13 = 12;
 }
 if( *VAR_12 ) {
  VAR_11->gametype = VAR_13;
  FUNC_4( VAR_11->gamename, VAR_12, sizeof(VAR_11->gamename) );
 }
 else {
  VAR_11->gametype = VAR_13;
  FUNC_4( VAR_11->gamename, VAR_6[VAR_13], sizeof(VAR_11->gamename) );
 }
}
