
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_13__ {TYPE_3__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_14__ {int* teamScores; scalar_t__ warmupTime; } ;
struct TYPE_11__ {int clientNum; int* persistant; } ;
struct TYPE_10__ {int sessionTeam; } ;
struct TYPE_12__ {TYPE_2__ ps; TYPE_1__ sess; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (char const*,int,int ,int const*,int ,int) ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;

void FUNC_3( gentity_t *VAR_5, vec3_t VAR_6, int VAR_7, const char* VAR_8, gentity_t *VAR_9 ) {
  const int* VAR_10 = ((void*)0);
 if ( !VAR_5->client ) {
  return;
 }

 if ( VAR_4.warmupTime ) {
  return;
 }
  if (VAR_9 != ((void*)0) && VAR_9->client) {
    VAR_10 = &VAR_9->client->ps.clientNum;
  }
 VAR_7 = FUNC_2(VAR_8, VAR_5->client->ps.clientNum, VAR_5->client->sess.sessionTeam, VAR_10, VAR_6, VAR_7);
 if ( VAR_7 == 0 ) {
  return;
 }

 if ( VAR_6 ) {
  FUNC_1( VAR_5, VAR_6, VAR_7 );
 }

 VAR_5->client->ps.persistant[VAR_1] += VAR_7;
 if ( VAR_3.integer == VAR_0 )
  VAR_4.teamScores[ VAR_5->client->ps.persistant[VAR_2] ] += VAR_7;
 FUNC_0();
}
