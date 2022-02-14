
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float vec_t ;
struct TYPE_5__ {int* uniforms; int program; int name; scalar_t__* uniformBufferOffsets; scalar_t__ uniformBuffer; } ;
typedef TYPE_1__ shaderProgram_t ;
typedef int mat4_t ;
struct TYPE_7__ {int (* Printf ) (int ,char*,int,int ) ;} ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef int GLint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const,float*) ;
 int FUNC_1 (int const,float*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int,int ,int const) ;
 TYPE_3__ VAR_3 ;
 int FUNC_3 (int ,char*,int,int ) ;
 TYPE_2__* VAR_4 ;

void FUNC_4(shaderProgram_t *VAR_5, int VAR_6, const mat4_t VAR_7)
{
 GLint *VAR_8 = VAR_5->uniforms;
 vec_t *VAR_9 = (float *)(VAR_5->uniformBuffer + VAR_5->uniformBufferOffsets[VAR_6]);

 if (VAR_8[VAR_6] == -1)
  return;

 if (VAR_4[VAR_6].type != VAR_0)
 {
  VAR_3.Printf( VAR_2, "GLSL_SetUniformMat4: wrong type for uniform %i in program %s\n", VAR_6, VAR_5->name);
  return;
 }

 if (FUNC_0(VAR_7, VAR_9))
 {
  return;
 }

 FUNC_1(VAR_7, VAR_9);

 FUNC_2(VAR_5->program, VAR_8[VAR_6], 1, VAR_1, VAR_7);
}
