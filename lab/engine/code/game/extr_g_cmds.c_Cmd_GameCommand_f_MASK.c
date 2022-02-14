
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
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 TYPE_4__* VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int) ;

void FUNC_8( gentity_t *VAR_7 ) {
 int VAR_8;
 gentity_t *VAR_9;
 int VAR_10;
 char VAR_11[VAR_0];

 if ( FUNC_4() != 3 ) {
  FUNC_6( VAR_7-VAR_3, FUNC_7( "print \"Usage: gc <player id> <order 0-%d>\n\"", VAR_5 - 1 ) );
  return;
 }

 FUNC_5( 2, VAR_11, sizeof( VAR_11 ) );
 VAR_10 = FUNC_3( VAR_11 );

 if ( VAR_10 < 0 || VAR_10 >= VAR_5 ) {
  FUNC_6( VAR_7-VAR_3, FUNC_7("print \"Bad order: %i\n\"", VAR_10));
  return;
 }

 FUNC_5( 1, VAR_11, sizeof( VAR_11 ) );
 VAR_8 = FUNC_0( VAR_7, VAR_11, VAR_6, VAR_6 );
 if ( VAR_8 == -1 ) {
  return;
 }

 VAR_9 = &VAR_3[VAR_8];
 if ( !VAR_9->inuse || !VAR_9->client ) {
  return;
 }

 FUNC_1( "tell: %s to %s: %s\n", VAR_7->client->pers.netname, VAR_9->client->pers.netname, VAR_4[VAR_10] );
 FUNC_2( VAR_7, VAR_9, VAR_1, VAR_4[VAR_10] );


 if ( VAR_7 != VAR_9 && !(VAR_7->r.svFlags & VAR_2)) {
  FUNC_2( VAR_7, VAR_7, VAR_1, VAR_4[VAR_10] );
 }
}
