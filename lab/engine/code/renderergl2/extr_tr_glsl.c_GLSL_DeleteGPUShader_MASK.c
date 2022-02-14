
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ uniformBuffer; scalar_t__ program; scalar_t__ fragmentShader; scalar_t__ vertexShader; } ;
typedef TYPE_1__ shaderProgram_t ;
struct TYPE_6__ {int (* Free ) (scalar_t__) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_0 ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(shaderProgram_t *VAR_1)
{
 if(VAR_1->program)
 {
  if (VAR_1->vertexShader)
  {
   FUNC_3(VAR_1->program, VAR_1->vertexShader);
   FUNC_2(VAR_1->vertexShader);
  }

  if (VAR_1->fragmentShader)
  {
   FUNC_3(VAR_1->program, VAR_1->fragmentShader);
   FUNC_2(VAR_1->fragmentShader);
  }

  FUNC_1(VAR_1->program);

  if (VAR_1->uniformBuffer)
  {
   VAR_0.Free(VAR_1->uniformBuffer);
  }

  FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 }
}
