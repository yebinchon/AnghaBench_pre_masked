
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_5__ {int* ammo; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;



void FUNC_0 (gentity_t *VAR_0, int VAR_1, int VAR_2)
{

 if ( VAR_0->client->ps.ammo[VAR_1] != -1 ) {
  VAR_0->client->ps.ammo[VAR_1] += VAR_2;
  if ( VAR_0->client->ps.ammo[VAR_1] > 200 ) {
   VAR_0->client->ps.ammo[VAR_1] = 200;
  }
 }
}
