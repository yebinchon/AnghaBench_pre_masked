
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_6__ {int s; TYPE_1__* client; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_5__ {int ps; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1 (gentity_t *VAR_0, gentity_t *VAR_1, trace_t *VAR_2 ) {

 if ( !VAR_1->client ) {
  return;
 }

 FUNC_0( &VAR_1->client->ps, &VAR_0->s );
}
