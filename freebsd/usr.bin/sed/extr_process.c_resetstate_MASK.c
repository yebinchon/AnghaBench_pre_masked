
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct s_command* c; } ;
struct s_command {char code; scalar_t__ startline; scalar_t__ a2; struct s_command* next; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 struct s_command* VAR_2 ;

void
FUNC_1(void)
{
 struct s_command *VAR_3;




 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->code == '{' ? VAR_3->u.c : VAR_3->next)
  if (VAR_3->a2)
   VAR_3->startline = 0;




 FUNC_0(&VAR_0, "", 0, VAR_1);
}
