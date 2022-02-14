
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int commandId; } ;
typedef TYPE_1__ exportCubemapsCommand_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

void FUNC_1(void)
{
 exportCubemapsCommand_t *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (!VAR_1) {
  return;
 }
 VAR_1->commandId = VAR_0;
}
