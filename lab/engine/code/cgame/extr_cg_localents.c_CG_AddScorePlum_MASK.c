
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_14__ {int* shaderRGBA; int radius; int* origin; int customShader; } ;
typedef TYPE_4__ refEntity_t ;
struct TYPE_11__ {int trBase; } ;
struct TYPE_15__ {float endTime; float lifeRate; int radius; TYPE_1__ pos; TYPE_4__ refEntity; } ;
typedef TYPE_5__ localEntity_t ;
struct TYPE_12__ {int* vieworg; } ;
struct TYPE_17__ {float time; TYPE_2__ refdef; } ;
struct TYPE_13__ {int * numberShaders; } ;
struct TYPE_16__ {TYPE_3__ media; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int*,int*,int*) ;
 float VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int*) ;
 float FUNC_3 (int*) ;
 int FUNC_4 (int*,float,int*,int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*,int*,int*) ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (float) ;
 int FUNC_8 (TYPE_4__*) ;

void FUNC_9( localEntity_t *VAR_6 ) {
 refEntity_t *VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = {0, 0, 1};
 float VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17[10], VAR_18, VAR_19;

 VAR_7 = &VAR_6->refEntity;

 VAR_13 = ( VAR_6->endTime - VAR_2.time ) * VAR_6->lifeRate;

 VAR_16 = VAR_6->radius;
 if (VAR_16 < 0) {
  VAR_7->shaderRGBA[0] = 0xff;
  VAR_7->shaderRGBA[1] = 0x11;
  VAR_7->shaderRGBA[2] = 0x11;
 }
 else {
  VAR_7->shaderRGBA[0] = 0xff;
  VAR_7->shaderRGBA[1] = 0xff;
  VAR_7->shaderRGBA[2] = 0xff;
  if (VAR_16 >= 50) {
   VAR_7->shaderRGBA[1] = 0;
  } else if (VAR_16 >= 20) {
   VAR_7->shaderRGBA[0] = VAR_7->shaderRGBA[1] = 0;
  } else if (VAR_16 >= 10) {
   VAR_7->shaderRGBA[2] = 0;
  } else if (VAR_16 >= 2) {
   VAR_7->shaderRGBA[0] = VAR_7->shaderRGBA[2] = 0;
  }

 }
 if (VAR_13 < 0.25)
  VAR_7->shaderRGBA[3] = 0xff * 4 * VAR_13;
 else
  VAR_7->shaderRGBA[3] = 0xff;

 VAR_7->radius = VAR_1 / 2;

 FUNC_2(VAR_6->pos.trBase, VAR_8);
 VAR_8[2] += 110 - VAR_13 * 100;

 FUNC_6(VAR_2.refdef.vieworg, VAR_8, VAR_10);
 FUNC_1(VAR_10, VAR_12, VAR_11);
 FUNC_5(VAR_11);

 FUNC_4(VAR_8, -10 + 20 * FUNC_7(VAR_13 * 2 * VAR_0), VAR_11, VAR_8);



 FUNC_6( VAR_8, VAR_2.refdef.vieworg, VAR_9 );
 VAR_14 = FUNC_3( VAR_9 );
 if ( VAR_14 < 20 ) {
  FUNC_0( VAR_6 );
  return;
 }

 VAR_19 = VAR_4;
 if (VAR_16 < 0) {
  VAR_19 = VAR_5;
  VAR_16 = -VAR_16;
 }

 for (VAR_18 = 0; !(VAR_18 && !VAR_16); VAR_18++) {
  VAR_17[VAR_18] = VAR_16 % 10;
  VAR_16 = VAR_16 / 10;
 }

 if (VAR_19) {
  VAR_17[VAR_18] = 10;
  VAR_18++;
 }

 for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
  FUNC_4(VAR_8, (float) (((float) VAR_18 / 2) - VAR_15) * VAR_1, VAR_11, VAR_7->origin);
  VAR_7->customShader = VAR_3.media.numberShaders[VAR_17[VAR_18-1-VAR_15]];
  FUNC_8( VAR_7 );
 }
}
