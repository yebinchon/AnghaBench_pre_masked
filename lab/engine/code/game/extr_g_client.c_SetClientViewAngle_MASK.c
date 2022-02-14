
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_10__ {int * angles; } ;
struct TYPE_13__ {TYPE_5__* client; TYPE_3__ s; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_11__ {int * viewangles; scalar_t__* delta_angles; } ;
struct TYPE_8__ {scalar_t__* angles; } ;
struct TYPE_9__ {TYPE_1__ cmd; } ;
struct TYPE_12__ {TYPE_4__ ps; TYPE_2__ pers; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2( gentity_t *VAR_0, vec3_t VAR_1 ) {
 int VAR_2;


 for (VAR_2=0 ; VAR_2<3 ; VAR_2++) {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_1[VAR_2]);
  VAR_0->client->ps.delta_angles[VAR_2] = VAR_3 - VAR_0->client->pers.cmd.angles[VAR_2];
 }
 FUNC_1( VAR_1, VAR_0->s.angles );
 FUNC_1 (VAR_0->s.angles, VAR_0->client->ps.viewangles);
}
