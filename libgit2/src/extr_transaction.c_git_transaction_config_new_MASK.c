
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * cfg; int type; } ;
typedef TYPE_1__ git_transaction ;
typedef int git_config ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;

int FUNC_3(git_transaction **VAR_1, git_config *VAR_2)
{
 git_transaction *VAR_3;
 FUNC_1(VAR_1 && VAR_2);

 VAR_3 = FUNC_2(1, sizeof(git_transaction));
 FUNC_0(VAR_3);

 VAR_3->type = VAR_0;
 VAR_3->cfg = VAR_2;
 *VAR_1 = VAR_3;
 return 0;
}
