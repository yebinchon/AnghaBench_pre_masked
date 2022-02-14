
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int svFlags; } ;
struct TYPE_13__ {TYPE_3__ r; TYPE_2__* client; int inuse; } ;
typedef TYPE_4__ gentity_t ;
typedef int arg ;
struct TYPE_10__ {int netname; } ;
struct TYPE_11__ {TYPE_1__ pers; } ;


 int FUNC_0 (TYPE_4__*,char*,int ,int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static void FUNC_8( gentity_t *VAR_5 ) {
 int VAR_6;
 gentity_t *VAR_7;
 char *VAR_8;
 char VAR_9[VAR_0];

 if ( FUNC_5 () < 3 ) {
  FUNC_7( VAR_5-VAR_3, "print \"Usage: tell <player id> <message>\n\"" );
  return;
 }

 FUNC_6( 1, VAR_9, sizeof( VAR_9 ) );
 VAR_6 = FUNC_0( VAR_5, VAR_9, VAR_4, VAR_4 );
 if ( VAR_6 == -1 ) {
  return;
 }

 VAR_7 = &VAR_3[VAR_6];
 if ( !VAR_7->inuse || !VAR_7->client ) {
  return;
 }

 VAR_8 = FUNC_1( 2 );

 FUNC_4( VAR_8 );

 FUNC_2( "tell: %s to %s: %s\n", VAR_5->client->pers.netname, VAR_7->client->pers.netname, VAR_8 );
 FUNC_3( VAR_5, VAR_7, VAR_1, VAR_8 );


 if ( VAR_5 != VAR_7 && !(VAR_5->r.svFlags & VAR_2)) {
  FUNC_3( VAR_5, VAR_5, VAR_1, VAR_8 );
 }
}
