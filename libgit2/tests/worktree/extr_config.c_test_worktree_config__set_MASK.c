
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
typedef int git_config ;
struct TYPE_2__ {int repo; int worktree; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int **,int ) ;

void FUNC_6(void)
{
 git_config *VAR_1;
 int32_t VAR_2;

 FUNC_1(FUNC_5(&VAR_1, VAR_0.worktree));
 FUNC_1(FUNC_4(VAR_1, "core.dummy", 5));
 FUNC_2(VAR_1);





 FUNC_1(FUNC_5(&VAR_1, VAR_0.repo));
 FUNC_1(FUNC_3(&VAR_2, VAR_1, "core.dummy"));
 FUNC_0(VAR_2, 5);
 FUNC_2(VAR_1);
}
