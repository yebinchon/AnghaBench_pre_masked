
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int* vec4_t ;
typedef int * vec2_t ;
struct shaderProgram_s {int dummy; } ;
struct image_s {int height; int width; } ;
typedef int mat4_t ;
typedef int* ivec4_t ;
struct TYPE_14__ {int vidWidth; int vidHeight; } ;
struct TYPE_13__ {TYPE_2__* currentFBO; } ;
struct TYPE_12__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_9__ {int toneMinAvgMaxLinear; int * autoExposureMinMax; } ;
struct TYPE_11__ {TYPE_1__ refdef; struct shaderProgram_s textureColorShader; } ;
struct TYPE_10__ {int width; int height; } ;
typedef TYPE_2__ FBO_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct shaderProgram_s*) ;
 int FUNC_2 (struct shaderProgram_s*,int ,int ) ;
 int FUNC_3 (struct shaderProgram_s*,int ,int *) ;
 int FUNC_4 (struct shaderProgram_s*,int ,int ) ;
 int FUNC_5 (struct shaderProgram_s*,int ,int*) ;
 int FUNC_6 (struct image_s*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int,int,int ,int ,int,int ) ;
 int VAR_1 ;
 int FUNC_10 (int**,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int*,int*) ;
 int FUNC_13 (int *,float,float) ;
 int FUNC_14 (int*,int,int,float,float) ;
 int* VAR_8 ;
 TYPE_6__ VAR_9 ;
 TYPE_5__ VAR_10 ;
 int FUNC_15 (int ,int ,int,int) ;
 int FUNC_16 (int ,int ,int,int) ;
 TYPE_4__ VAR_11 ;
 int FUNC_17 (int ,char*) ;
 TYPE_3__ VAR_12 ;

void FUNC_18(struct image_s *VAR_13, vec4_t VAR_14, vec2_t VAR_15, FBO_t *VAR_16, ivec4_t VAR_17, struct shaderProgram_s *VAR_18, vec4_t VAR_19, int VAR_20)
{
 ivec4_t VAR_21;
 vec4_t VAR_22;
 vec4_t VAR_23[4];
 vec2_t VAR_24[4];
 vec2_t VAR_25;
 FBO_t *VAR_26 = VAR_10.currentFBO;
 mat4_t VAR_27;
 int VAR_28, VAR_29;

 if (!VAR_13)
 {
  VAR_11.Printf(VAR_1, "Tried to blit from a NULL texture!\n");
  return;
 }

 VAR_28 = VAR_16 ? VAR_16->width : VAR_9.vidWidth;
 VAR_29 = VAR_16 ? VAR_16->height : VAR_9.vidHeight;

 if (VAR_14)
 {
  FUNC_13(VAR_24[0], VAR_14[0], VAR_14[1]);
  FUNC_13(VAR_24[1], VAR_14[2], VAR_14[1]);
  FUNC_13(VAR_24[2], VAR_14[2], VAR_14[3]);
  FUNC_13(VAR_24[3], VAR_14[0], VAR_14[3]);
 }
 else
 {
  FUNC_13(VAR_24[0], 0.0f, 1.0f);
  FUNC_13(VAR_24[1], 1.0f, 1.0f);
  FUNC_13(VAR_24[2], 1.0f, 0.0f);
  FUNC_13(VAR_24[3], 0.0f, 0.0f);
 }


 if (VAR_17)
 {
  VAR_21[0] = VAR_17[0];
  VAR_21[1] = VAR_29 - VAR_17[1] - VAR_17[3];
  VAR_21[2] = VAR_17[0] + VAR_17[2];
  VAR_21[3] = VAR_29 - VAR_17[1];
 }
 else
 {
  FUNC_14(VAR_21, 0, VAR_29, VAR_28, 0);
 }

 if (VAR_15)
 {
  FUNC_11(VAR_15, VAR_25);
 }
 else
 {
  FUNC_13(VAR_25, 1.0f, 1.0f);
 }

 if (VAR_19)
 {
  FUNC_12(VAR_19, VAR_22);
 }
 else
 {
  FUNC_12(VAR_8, VAR_22);
 }

 if (!VAR_18)
 {
  VAR_18 = &VAR_12.textureColorShader;
 }

 FUNC_0(VAR_16);

 FUNC_16( 0, 0, VAR_28, VAR_29 );
 FUNC_15( 0, 0, VAR_28, VAR_29 );

 FUNC_9(0, VAR_28, VAR_29, 0, 0, 1, VAR_27);

 FUNC_7( VAR_0 );

 FUNC_6(VAR_13, VAR_2);

 FUNC_14(VAR_23[0], VAR_21[0], VAR_21[1], 0.0f, 1.0f);
 FUNC_14(VAR_23[1], VAR_21[2], VAR_21[1], 0.0f, 1.0f);
 FUNC_14(VAR_23[2], VAR_21[2], VAR_21[3], 0.0f, 1.0f);
 FUNC_14(VAR_23[3], VAR_21[0], VAR_21[3], 0.0f, 1.0f);

 VAR_25[0] /= VAR_13->width;
 VAR_25[1] /= VAR_13->height;

 FUNC_8( VAR_20 );

 FUNC_1(VAR_18);

 FUNC_2(VAR_18, VAR_6, VAR_27);
 FUNC_5(VAR_18, VAR_4, VAR_22);
 FUNC_3(VAR_18, VAR_5, VAR_25);
 FUNC_3(VAR_18, VAR_3, VAR_12.refdef.autoExposureMinMax);
 FUNC_4(VAR_18, VAR_7, VAR_12.refdef.toneMinAvgMaxLinear);

 FUNC_10(VAR_23, VAR_24);

 FUNC_0(VAR_26);
}
