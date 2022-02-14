
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int remote_cb; } ;
typedef TYPE_1__ git_clone_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int ,char*,TYPE_1__*) ;
 int VAR_3 ;

void FUNC_2(void)
{
 git_clone_options VAR_4 = VAR_0;
 git_repository *VAR_5;

 VAR_4.remote_cb = VAR_3;

 FUNC_0(VAR_1, FUNC_1(&VAR_5, VAR_2, "./restrict-refspec", &VAR_4));
}
