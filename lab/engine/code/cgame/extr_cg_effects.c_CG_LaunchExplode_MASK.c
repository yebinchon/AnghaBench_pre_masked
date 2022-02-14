
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int hModel; int axis; int origin; } ;
typedef TYPE_2__ refEntity_t ;
typedef int qhandle_t ;
struct TYPE_6__ {scalar_t__ trTime; int trDelta; int trBase; int trType; } ;
struct TYPE_8__ {float bounceFactor; int leMarkType; int leBounceSoundType; TYPE_1__ pos; scalar_t__ startTime; scalar_t__ endTime; int leType; TYPE_2__ refEntity; } ;
typedef TYPE_3__ localEntity_t ;
struct TYPE_9__ {scalar_t__ time; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_3 () ;

void FUNC_4( vec3_t VAR_6, vec3_t VAR_7, qhandle_t VAR_8 ) {
 localEntity_t *VAR_9;
 refEntity_t *VAR_10;

 VAR_9 = FUNC_1();
 VAR_10 = &VAR_9->refEntity;

 VAR_9->leType = VAR_2;
 VAR_9->startTime = VAR_5.time;
 VAR_9->endTime = VAR_9->startTime + 10000 + FUNC_3() * 6000;

 FUNC_2( VAR_6, VAR_10->origin );
 FUNC_0( VAR_4, VAR_10->axis );
 VAR_10->hModel = VAR_8;

 VAR_9->pos.trType = VAR_3;
 FUNC_2( VAR_6, VAR_9->pos.trBase );
 FUNC_2( VAR_7, VAR_9->pos.trDelta );
 VAR_9->pos.trTime = VAR_5.time;

 VAR_9->bounceFactor = 0.1f;

 VAR_9->leBounceSoundType = VAR_0;
 VAR_9->leMarkType = VAR_1;
}
