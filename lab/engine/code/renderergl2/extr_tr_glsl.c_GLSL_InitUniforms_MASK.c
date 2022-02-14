
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec_t ;
struct TYPE_6__ {int* uniforms; int* uniformBufferOffsets; int uniformBuffer; int program; } ;
typedef TYPE_1__ shaderProgram_t ;
struct TYPE_9__ {int glslMaxAnimatedBones; } ;
struct TYPE_8__ {int (* Malloc ) (int) ;} ;
struct TYPE_7__ {int type; int name; } ;
typedef int GLint ;
typedef int GLfloat ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_3 ;

void FUNC_2(shaderProgram_t *VAR_4)
{
 int VAR_5, VAR_6;

 GLint *VAR_7 = VAR_4->uniforms;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
 {
  VAR_7[VAR_5] = FUNC_0(VAR_4->program, VAR_3[VAR_5].name);

  if (VAR_7[VAR_5] == -1)
   continue;

  VAR_4->uniformBufferOffsets[VAR_5] = VAR_6;

  switch(VAR_3[VAR_5].type)
  {
   case 133:
    VAR_6 += sizeof(GLint);
    break;
   case 135:
    VAR_6 += sizeof(GLfloat);
    break;
   case 134:
    VAR_6 += sizeof(vec_t) * 5;
    break;
   case 130:
    VAR_6 += sizeof(vec_t) * 2;
    break;
   case 129:
    VAR_6 += sizeof(vec_t) * 3;
    break;
   case 128:
    VAR_6 += sizeof(vec_t) * 4;
    break;
   case 132:
    VAR_6 += sizeof(vec_t) * 16;
    break;
   case 131:
    VAR_6 += sizeof(vec_t) * 16 * VAR_1.glslMaxAnimatedBones;
    break;
   default:
    break;
  }
 }

 VAR_4->uniformBuffer = VAR_2.Malloc(VAR_6);
}
