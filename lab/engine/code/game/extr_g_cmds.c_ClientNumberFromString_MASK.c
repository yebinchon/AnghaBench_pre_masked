
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int gentity_t ;
struct TYPE_4__ {scalar_t__ connected; int netname; } ;
struct TYPE_5__ {TYPE_1__ pers; } ;
typedef TYPE_2__ gclient_t ;
typedef int cleanName ;
struct TYPE_6__ {int maxclients; TYPE_2__* clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7( gentity_t *VAR_4, char *VAR_5, qboolean VAR_6, qboolean VAR_7 ) {
 gclient_t *VAR_8;
 int VAR_9;
 char VAR_10[VAR_1];

 if ( VAR_6 ) {

  if ( FUNC_3( VAR_5 ) ) {
   VAR_9 = FUNC_4( VAR_5 );
   if ( VAR_9 >= 0 && VAR_9 < VAR_3.maxclients ) {
    VAR_8 = &VAR_3.clients[VAR_9];
    if ( VAR_8->pers.connected == VAR_0 ) {
     return VAR_9;
    }
   }
  }
 }

 if ( VAR_7 ) {

  for ( VAR_9=0,VAR_8=VAR_3.clients ; VAR_9 < VAR_3.maxclients ; VAR_9++,VAR_8++ ) {
   if ( VAR_8->pers.connected != VAR_0 ) {
    continue;
   }
   FUNC_2(VAR_10, VAR_8->pers.netname, sizeof(VAR_10));
   FUNC_0(VAR_10);
   if ( !FUNC_1( VAR_10, VAR_5 ) ) {
    return VAR_9;
   }
  }
 }

 FUNC_5( VAR_4-VAR_2, FUNC_6("print \"User %s is not on the server\n\"", VAR_5));
 return -1;
}
