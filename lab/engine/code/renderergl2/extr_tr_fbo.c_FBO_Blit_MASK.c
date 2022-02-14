
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int vec2_t ;
struct shaderProgram_s {int dummy; } ;
typedef float* ivec4_t ;
struct TYPE_7__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_6__ {int * colorImage; scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ FBO_t ;


 int FUNC_0 (int ,float*,int ,TYPE_1__*,float*,struct shaderProgram_s*,float*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (float*,float,float,float,float) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(FBO_t *VAR_3, ivec4_t VAR_4, vec2_t VAR_5, FBO_t *VAR_6, ivec4_t VAR_7, struct shaderProgram_s *VAR_8, vec4_t VAR_9, int VAR_10)
{
 vec4_t VAR_11;

 if (!VAR_3)
 {
  VAR_2.Printf(VAR_1, "Tried to blit from a NULL FBO!\n");
  return;
 }

 if (VAR_4)
 {
  VAR_11[0] = VAR_4[0] / (float)VAR_3->width;
  VAR_11[1] = (VAR_4[1] + VAR_4[3]) / (float)VAR_3->height;
  VAR_11[2] = (VAR_4[0] + VAR_4[2]) / (float)VAR_3->width;
  VAR_11[3] = VAR_4[1] / (float)VAR_3->height;
 }
 else
 {
  FUNC_1(VAR_11, 0.0f, 0.0f, 1.0f, 1.0f);
 }

 FUNC_0(VAR_3->colorImage[0], VAR_11, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 | VAR_0);
}
