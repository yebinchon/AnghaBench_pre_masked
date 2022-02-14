
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cmd2; int * cmd1; } ;
typedef TYPE_1__ help_msg ;


 scalar_t__ FUNC_0 (int *,char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static help_msg*
FUNC_1(char *VAR_1, char *VAR_2)
{
  help_msg *VAR_3;

  if (VAR_1 == ((void*)0)) {
    return ((void*)0);
  }
  for (VAR_3 = VAR_0; VAR_3->cmd1 != ((void*)0); VAR_3++) {
    if (FUNC_0(VAR_3->cmd1, VAR_1) && FUNC_0(VAR_3->cmd2, VAR_2)) {
      return VAR_3;
    }
  }
  return ((void*)0);
}
