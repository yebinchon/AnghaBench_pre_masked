
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* name; int program; } ;
typedef TYPE_2__ shaderProgram_t ;
struct TYPE_6__ {int c_glslShaderBinds; } ;
struct TYPE_9__ {TYPE_1__ pc; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
typedef int GLuint ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(shaderProgram_t * VAR_2)
{
 GLuint VAR_3 = VAR_2 ? VAR_2->program : 0;
 char *VAR_4 = VAR_2 ? VAR_2->name : "NULL";

 if(VAR_1->integer)
 {

  FUNC_1(FUNC_2("--- GLSL_BindProgram( %s ) ---\n", VAR_4));
 }

 if (FUNC_0(VAR_3))
  VAR_0.pc.c_glslShaderBinds++;
}
