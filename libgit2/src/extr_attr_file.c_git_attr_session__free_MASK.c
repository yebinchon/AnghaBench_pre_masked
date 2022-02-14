
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tmp; int sysdir; } ;
typedef TYPE_1__ git_attr_session ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(git_attr_session *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(&VAR_0->sysdir);
 FUNC_0(&VAR_0->tmp);

 FUNC_1(VAR_0, 0, sizeof(git_attr_session));
}
