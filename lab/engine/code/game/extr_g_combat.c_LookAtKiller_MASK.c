
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {int trBase; } ;
struct TYPE_10__ {int * angles; TYPE_1__ pos; } ;
struct TYPE_13__ {TYPE_4__* client; TYPE_2__ s; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_11__ {int * stats; } ;
struct TYPE_12__ {TYPE_3__ ps; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;

void FUNC_2( gentity_t *VAR_2, gentity_t *VAR_3, gentity_t *VAR_4 ) {
 vec3_t VAR_5;

 if ( VAR_4 && VAR_4 != VAR_2 ) {
  FUNC_0 (VAR_4->s.pos.trBase, VAR_2->s.pos.trBase, VAR_5);
 } else if ( VAR_3 && VAR_3 != VAR_2 ) {
  FUNC_0 (VAR_3->s.pos.trBase, VAR_2->s.pos.trBase, VAR_5);
 } else {
  VAR_2->client->ps.stats[VAR_0] = VAR_2->s.angles[VAR_1];
  return;
 }

 VAR_2->client->ps.stats[VAR_0] = FUNC_1 ( VAR_5 );
}
