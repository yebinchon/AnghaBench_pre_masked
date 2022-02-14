
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_13__ {int angles; int origin; } ;
struct TYPE_14__ {int spawnflags; TYPE_3__ s; TYPE_2__* client; int target; int id; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_15__ {scalar_t__ pm_type; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_12__ {TYPE_7__ ps; TYPE_1__ sess; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_7__*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_7__*) ;

void FUNC_5 (gentity_t *VAR_2, gentity_t *VAR_3, trace_t *VAR_4 ) {
 gentity_t *VAR_5;

 if ( !VAR_3->client ) {
  return;
 }
 if ( VAR_3->client->ps.pm_type == VAR_0 ) {
  return;
 }

 if ( ( VAR_2->spawnflags & 1 ) &&
  VAR_3->client->sess.sessionTeam != VAR_1 ) {
  return;
 }

 VAR_5 = FUNC_0( VAR_2->target );
 if (!VAR_5) {
  FUNC_1 ("Couldn't find teleporter destination\n");
  return;
 }

 if ( !FUNC_3( VAR_2->id, VAR_2->target, &VAR_3->client->ps ) ) {
  return;
 }
 if ( FUNC_4( VAR_2->id, VAR_2->target, &VAR_3->client->ps ) ) {
  return;
 }

 FUNC_2( VAR_3, VAR_5->s.origin, VAR_5->s.angles );
}
