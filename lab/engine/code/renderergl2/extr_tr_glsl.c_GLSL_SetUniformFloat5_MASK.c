
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float vec_t ;
typedef int vec5_t ;
struct TYPE_5__ {int* uniforms; int program; int name; scalar_t__* uniformBufferOffsets; scalar_t__ uniformBuffer; } ;
typedef TYPE_1__ shaderProgram_t ;
struct TYPE_7__ {int (* Printf ) (int ,char*,int,int ) ;} ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef int GLint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const,float*) ;
 int FUNC_1 (int const,float*) ;
 int FUNC_2 (int ,int,int,int const) ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (int ,char*,int,int ) ;
 TYPE_2__* VAR_3 ;

void FUNC_4(shaderProgram_t *VAR_4, int VAR_5, const vec5_t VAR_6)
{
 GLint *VAR_7 = VAR_4->uniforms;
 vec_t *VAR_8 = (float *)(VAR_4->uniformBuffer + VAR_4->uniformBufferOffsets[VAR_5]);

 if (VAR_7[VAR_5] == -1)
  return;

 if (VAR_3[VAR_5].type != VAR_0)
 {
  VAR_2.Printf( VAR_1, "GLSL_SetUniformFloat5: wrong type for uniform %i in program %s\n", VAR_5, VAR_4->name);
  return;
 }

 if (FUNC_0(VAR_6, VAR_8))
 {
  return;
 }

 FUNC_1(VAR_6, VAR_8);

 FUNC_2(VAR_4->program, VAR_7[VAR_5], 5, VAR_6);
}
