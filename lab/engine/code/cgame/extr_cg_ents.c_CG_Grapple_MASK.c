
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int missileRenderfx; int missileModel; scalar_t__ missileSound; } ;
typedef TYPE_2__ weaponInfo_t ;
struct TYPE_15__ {int skinNum; int renderfx; int** axis; int hModel; int oldorigin; int origin; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_13__ {int trDelta; } ;
struct TYPE_16__ {size_t weapon; TYPE_1__ pos; int number; int angles; } ;
typedef TYPE_4__ entityState_t ;
typedef int ent ;
struct TYPE_17__ {int lerpOrigin; TYPE_4__ currentState; int lerpAngles; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_18__ {int clientFrame; } ;


 int FUNC_0 (TYPE_5__*,TYPE_2__ const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 size_t VAR_1 ;
 TYPE_9__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6( centity_t *VAR_5 ) {
 refEntity_t VAR_6;
 entityState_t *VAR_7;
 const weaponInfo_t *VAR_8;

 VAR_7 = &VAR_5->currentState;
 if ( VAR_7->weapon >= VAR_1 ) {
  VAR_7->weapon = 0;
 }
 VAR_8 = &VAR_3[VAR_7->weapon];


 FUNC_1( VAR_7->angles, VAR_5->lerpAngles);
 FUNC_0 ( VAR_5, VAR_8 );


 FUNC_3 (&VAR_6, 0, sizeof(VAR_6));
 FUNC_1( VAR_5->lerpOrigin, VAR_6.origin);
 FUNC_1( VAR_5->lerpOrigin, VAR_6.oldorigin);


 VAR_6.skinNum = VAR_2.clientFrame & 1;
 VAR_6.hModel = VAR_8->missileModel;
 VAR_6.renderfx = VAR_8->missileRenderfx | VAR_0;


 if ( FUNC_2( VAR_7->pos.trDelta, VAR_6.axis[0] ) == 0 ) {
  VAR_6.axis[0][2] = 1;
 }

 FUNC_4( &VAR_6 );
}
