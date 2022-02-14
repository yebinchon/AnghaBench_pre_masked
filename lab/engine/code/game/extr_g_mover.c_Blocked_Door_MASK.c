
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ eType; int origin; } ;
struct TYPE_16__ {int spawnflags; scalar_t__ damage; TYPE_2__ s; TYPE_1__* item; int client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_14__ {scalar_t__ giType; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,TYPE_3__*,int *,int *,scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;

void FUNC_5( gentity_t *VAR_4, gentity_t *VAR_5 ) {

 if ( !VAR_5->client ) {

  if( VAR_5->s.eType == VAR_0 && VAR_5->item->giType == VAR_2 ) {
   FUNC_3( VAR_5 );
   return;
  }
  FUNC_2( VAR_5->s.origin, VAR_1 );
  FUNC_1( VAR_5 );
  return;
 }

 if ( VAR_4->damage ) {
  FUNC_0( VAR_5, VAR_4, VAR_4, ((void*)0), ((void*)0), VAR_4->damage, 0, VAR_3 );
 }
 if ( VAR_4->spawnflags & 4 ) {
  return;
 }


 FUNC_4( VAR_4, VAR_4, VAR_5 );
}
