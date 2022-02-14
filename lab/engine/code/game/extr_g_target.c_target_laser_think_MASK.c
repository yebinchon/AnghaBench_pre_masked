
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int vec3_t ;
struct TYPE_17__ {int entityNum; int endpos; } ;
typedef TYPE_5__ trace_t ;
struct TYPE_16__ {int origin2; int number; int origin; } ;
struct TYPE_18__ {scalar_t__ nextthink; TYPE_4__ s; int damage; int movedir; int activator; TYPE_3__* enemy; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_14__ {int maxs; int mins; } ;
struct TYPE_13__ {int origin; } ;
struct TYPE_15__ {TYPE_2__ r; TYPE_1__ s; } ;
struct TYPE_12__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,TYPE_6__*,int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int * VAR_6 ;
 TYPE_10__ VAR_7 ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*,int ,int *,int *,int ,int ,int) ;

void FUNC_7 (gentity_t *VAR_8) {
 vec3_t VAR_9;
 trace_t VAR_10;
 vec3_t VAR_11;


 if ( VAR_8->enemy ) {
  FUNC_2 (VAR_8->enemy->s.origin, 0.5, VAR_8->enemy->r.mins, VAR_11);
  FUNC_2 (VAR_11, 0.5, VAR_8->enemy->r.maxs, VAR_11);
  FUNC_4 (VAR_11, VAR_8->s.origin, VAR_8->movedir);
  FUNC_3 (VAR_8->movedir);
 }


 FUNC_2 (VAR_8->s.origin, 2048, VAR_8->movedir, VAR_9);

 FUNC_6( &VAR_10, VAR_8->s.origin, ((void*)0), ((void*)0), VAR_9, VAR_8->s.number, VAR_2|VAR_0|VAR_1);

 if ( VAR_10.entityNum ) {

  FUNC_0 ( &VAR_6[VAR_10.entityNum], VAR_8, VAR_8->activator, VAR_8->movedir,
   VAR_10.endpos, VAR_8->damage, VAR_3, VAR_5);
 }

 FUNC_1 (VAR_10.endpos, VAR_8->s.origin2);

 FUNC_5( VAR_8 );
 VAR_8->nextthink = VAR_7.time + VAR_4;
}
