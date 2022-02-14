
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* client; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_4__ {int ps; } ;


 int FUNC_0 (int,int,int *) ;

void FUNC_1( gentity_t *VAR_0, int VAR_1, int VAR_2 ) {
 if ( !VAR_0->client ) {
  return;
 }
 FUNC_0( VAR_1, VAR_2, &VAR_0->client->ps );
}
