
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_14__ {float shaderTime; int* origin; int* oldorigin; int* shaderRGBA; float radius; int customShader; int reType; int axis; } ;
typedef TYPE_3__ refEntity_t ;
struct TYPE_12__ {float trTime; int* trBase; int* trDelta; int trType; } ;
struct TYPE_15__ {float startTime; double endTime; double lifeRate; double* color; TYPE_1__ pos; int leType; int leFlags; TYPE_3__ refEntity; } ;
typedef TYPE_4__ localEntity_t ;
struct TYPE_16__ {int* color1; int* color2; } ;
typedef TYPE_5__ clientInfo_t ;
struct TYPE_20__ {float time; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {double value; } ;
struct TYPE_13__ {int railRingsShader; int railCoreShader; } ;
struct TYPE_17__ {TYPE_2__ media; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int*,int*,int*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int*,int,int*,int*) ;
 float FUNC_7 (int*) ;
 int FUNC_8 (int*,int,int*) ;
 int FUNC_9 (int*,int*,int*) ;
 TYPE_9__ VAR_9 ;
 TYPE_8__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;

void FUNC_10 (clientInfo_t *VAR_13, vec3_t VAR_14, vec3_t VAR_15) {
 vec3_t VAR_16[36], VAR_17, VAR_18, VAR_19, VAR_20;
 float VAR_21;
 int VAR_22, VAR_23, VAR_24;

 localEntity_t *VAR_25;
 refEntity_t *VAR_26;





 VAR_14[2] -= 4;

 VAR_25 = FUNC_1();
 VAR_26 = &VAR_25->refEntity;

 VAR_25->leType = VAR_1;
 VAR_25->startTime = VAR_9.time;
 VAR_25->endTime = VAR_9.time + VAR_11.value;
 VAR_25->lifeRate = 1.0 / (VAR_25->endTime - VAR_25->startTime);

 VAR_26->shaderTime = VAR_9.time / 1000.0f;
 VAR_26->reType = VAR_5;
 VAR_26->customShader = VAR_12.media.railCoreShader;

 FUNC_5(VAR_14, VAR_26->origin);
 FUNC_5(VAR_15, VAR_26->oldorigin);

 VAR_26->shaderRGBA[0] = VAR_13->color1[0] * 255;
 VAR_26->shaderRGBA[1] = VAR_13->color1[1] * 255;
 VAR_26->shaderRGBA[2] = VAR_13->color1[2] * 255;
 VAR_26->shaderRGBA[3] = 255;

 VAR_25->color[0] = VAR_13->color1[0] * 0.75;
 VAR_25->color[1] = VAR_13->color1[1] * 0.75;
 VAR_25->color[2] = VAR_13->color1[2] * 0.75;
 VAR_25->color[3] = 1.0f;

 FUNC_0( VAR_26->axis );

 if (VAR_10.integer)
 {

  VAR_26->origin[2] -= 8;
  VAR_26->oldorigin[2] -= 8;
  return;
 }

 FUNC_5 (VAR_14, VAR_17);
 FUNC_9 (VAR_15, VAR_14, VAR_19);
 VAR_21 = FUNC_7 (VAR_19);
 FUNC_2(VAR_20, VAR_19);
 for (VAR_22 = 0 ; VAR_22 < 36; VAR_22++)
 {
  FUNC_3(VAR_16[VAR_22], VAR_19, VAR_20, VAR_22 * 10);
 }

 FUNC_6(VAR_17, 20, VAR_19, VAR_17);
 FUNC_8 (VAR_19, 5, VAR_19);

 VAR_24 = -1;

 VAR_23 = 18;
 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22 += 5)
 {
  if (VAR_22 != VAR_24)
  {
   VAR_24 = VAR_22 + 5;
   VAR_25 = FUNC_1();
   VAR_26 = &VAR_25->refEntity;
   VAR_25->leFlags = VAR_0;
   VAR_25->leType = VAR_2;
   VAR_25->startTime = VAR_9.time;
   VAR_25->endTime = VAR_9.time + (VAR_22>>1) + 600;
   VAR_25->lifeRate = 1.0 / (VAR_25->endTime - VAR_25->startTime);

   VAR_26->shaderTime = VAR_9.time / 1000.0f;
   VAR_26->reType = VAR_6;
   VAR_26->radius = 1.1f;
   VAR_26->customShader = VAR_12.media.railRingsShader;

   VAR_26->shaderRGBA[0] = VAR_13->color2[0] * 255;
   VAR_26->shaderRGBA[1] = VAR_13->color2[1] * 255;
   VAR_26->shaderRGBA[2] = VAR_13->color2[2] * 255;
   VAR_26->shaderRGBA[3] = 255;

   VAR_25->color[0] = VAR_13->color2[0] * 0.75;
   VAR_25->color[1] = VAR_13->color2[1] * 0.75;
   VAR_25->color[2] = VAR_13->color2[2] * 0.75;
   VAR_25->color[3] = 1.0f;

   VAR_25->pos.trType = VAR_8;
   VAR_25->pos.trTime = VAR_9.time;

   FUNC_5( VAR_17, VAR_18);
   FUNC_6(VAR_18, 4 , VAR_16[VAR_23], VAR_18);
   FUNC_5(VAR_18, VAR_25->pos.trBase);

   VAR_25->pos.trDelta[0] = VAR_16[VAR_23][0]*6;
   VAR_25->pos.trDelta[1] = VAR_16[VAR_23][1]*6;
   VAR_25->pos.trDelta[2] = VAR_16[VAR_23][2]*6;
  }

  FUNC_4 (VAR_17, VAR_19, VAR_17);

  VAR_23 = (VAR_23 + 1) % 36;
 }
}
