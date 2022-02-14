
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int skinNum; int hModel; int renderfx; int axis; int oldorigin; int origin; } ;
typedef TYPE_1__ refEntity_t ;
struct TYPE_10__ {scalar_t__ solid; size_t modelindex; int modelindex2; } ;
typedef TYPE_2__ entityState_t ;
typedef int ent ;
struct TYPE_11__ {int lerpAngles; int lerpOrigin; TYPE_2__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_13__ {int time; } ;
struct TYPE_12__ {int * gameModels; int * inlineDrawModel; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_7__ VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4( centity_t *VAR_4 ) {
 refEntity_t VAR_5;
 entityState_t *VAR_6;

 VAR_6 = &VAR_4->currentState;


 FUNC_2 (&VAR_5, 0, sizeof(VAR_5));
 FUNC_1( VAR_4->lerpOrigin, VAR_5.origin);
 FUNC_1( VAR_4->lerpOrigin, VAR_5.oldorigin);
 FUNC_0( VAR_4->lerpAngles, VAR_5.axis );

 VAR_5.renderfx = VAR_0;


 VAR_5.skinNum = ( VAR_2.time >> 6 ) & 1;


 if ( VAR_6->solid == VAR_1 ) {
  VAR_5.hModel = VAR_3.inlineDrawModel[VAR_6->modelindex];
 } else {
  VAR_5.hModel = VAR_3.gameModels[VAR_6->modelindex];
 }


 FUNC_3(&VAR_5);


 if ( VAR_6->modelindex2 ) {
  VAR_5.skinNum = 0;
  VAR_5.hModel = VAR_3.gameModels[VAR_6->modelindex2];
  FUNC_3(&VAR_5);
 }

}
