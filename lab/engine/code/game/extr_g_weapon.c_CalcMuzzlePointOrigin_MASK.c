
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_7__ {int trBase; } ;
struct TYPE_8__ {TYPE_1__ pos; } ;
struct TYPE_11__ {TYPE_4__* client; TYPE_2__ s; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_9__ {scalar_t__ viewheight; } ;
struct TYPE_10__ {TYPE_3__ ps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int,int *,int *) ;

void FUNC_3 ( gentity_t *VAR_0, vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5 ) {
 FUNC_1( VAR_0->s.pos.trBase, VAR_5 );
 VAR_5[2] += VAR_0->client->ps.viewheight;
 FUNC_2( VAR_5, 14, VAR_2, VAR_5 );

 FUNC_0( VAR_5 );
}
