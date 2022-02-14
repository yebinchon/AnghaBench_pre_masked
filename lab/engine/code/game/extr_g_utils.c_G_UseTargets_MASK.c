
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int inuse; int (* use ) (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;int target; TYPE_1__* client; int id; scalar_t__ targetShaderNewName; scalar_t__ targetShaderName; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_13__ {double time; } ;
struct TYPE_11__ {int ps; } ;


 int FUNC_0 (scalar_t__,scalar_t__,float) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 TYPE_6__ VAR_1 ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;

void FUNC_9( gentity_t *VAR_3, gentity_t *VAR_4 ) {
 gentity_t *VAR_5;

 if ( !VAR_3 ) {
  return;
 }

 if (VAR_3->targetShaderName && VAR_3->targetShaderNewName) {
  float VAR_6 = VAR_1.time * 0.001;
  FUNC_0(VAR_3->targetShaderName, VAR_3->targetShaderNewName, VAR_6);
  FUNC_8(VAR_0, FUNC_1());
 }

 if ( !VAR_3->target ) {
  return;
 }

 if ( VAR_4->client &&
   !FUNC_5( VAR_3->id, VAR_3->target, &VAR_4->client->ps ) ) {
  return;
 }

 if ( VAR_4->client &&
   FUNC_6( VAR_3->id, VAR_3->target, &VAR_4->client->ps ) ) {
  return;
 }

 VAR_5 = ((void*)0);
 while ( (VAR_5 = FUNC_3 (VAR_5, FUNC_2(VAR_2), VAR_3->target)) != ((void*)0) ) {
  if ( VAR_5 == VAR_3 ) {
   FUNC_4 ("WARNING: Entity used itself.\n");
  } else {
   if ( VAR_5->use ) {
    VAR_5->use (VAR_5, VAR_3, VAR_4);
   }
  }
  if ( !VAR_3->inuse ) {
   FUNC_4("entity was removed while using targets\n");
   return;
  }
 }
}
