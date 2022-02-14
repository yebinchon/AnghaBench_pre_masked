
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {float shaderTime; int radius; int* shaderRGBA; int customShader; scalar_t__ rotation; int reType; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_10__ {float trTime; int* trDelta; int trBase; int trType; } ;
struct TYPE_12__ {int startTime; int endTime; double lifeRate; double* color; TYPE_2__ pos; TYPE_3__ refEntity; int leType; int leFlags; } ;
typedef TYPE_4__ localEntity_t ;
struct TYPE_15__ {int time; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_9__ {int waterBubbleShader; } ;
struct TYPE_13__ {TYPE_1__ media; } ;


 TYPE_4__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 float FUNC_4 (int ) ;
 int FUNC_5 (int ,float,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10( vec3_t VAR_7, vec3_t VAR_8, float VAR_9 ) {
 vec3_t VAR_10;
 vec3_t VAR_11;
 float VAR_12;
 int VAR_13;

 if ( VAR_5.integer ) {
  return;
 }

 FUNC_2 (VAR_7, VAR_10);
 FUNC_6 (VAR_8, VAR_7, VAR_11);
 VAR_12 = FUNC_4 (VAR_11);


 VAR_13 = FUNC_8() % (int)VAR_9;
 FUNC_3( VAR_10, VAR_13, VAR_11, VAR_10 );

 FUNC_5 (VAR_11, VAR_9, VAR_11);

 for ( ; VAR_13 < VAR_12; VAR_13 += VAR_9 ) {
  localEntity_t *VAR_14;
  refEntity_t *VAR_15;

  VAR_14 = FUNC_0();
  VAR_14->leFlags = VAR_0;
  VAR_14->leType = VAR_1;
  VAR_14->startTime = VAR_4.time;
  VAR_14->endTime = VAR_4.time + 1000 + FUNC_9() * 250;
  VAR_14->lifeRate = 1.0 / ( VAR_14->endTime - VAR_14->startTime );

  VAR_15 = &VAR_14->refEntity;
  VAR_15->shaderTime = VAR_4.time / 1000.0f;

  VAR_15->reType = VAR_2;
  VAR_15->rotation = 0;
  VAR_15->radius = 3;
  VAR_15->customShader = VAR_6.media.waterBubbleShader;
  VAR_15->shaderRGBA[0] = 0xff;
  VAR_15->shaderRGBA[1] = 0xff;
  VAR_15->shaderRGBA[2] = 0xff;
  VAR_15->shaderRGBA[3] = 0xff;

  VAR_14->color[3] = 1.0;

  VAR_14->pos.trType = VAR_3;
  VAR_14->pos.trTime = VAR_4.time;
  FUNC_2( VAR_10, VAR_14->pos.trBase );
  VAR_14->pos.trDelta[0] = FUNC_7()*5;
  VAR_14->pos.trDelta[1] = FUNC_7()*5;
  VAR_14->pos.trDelta[2] = FUNC_7()*5 + 6;

  FUNC_1 (VAR_10, VAR_11, VAR_10);
 }
}
