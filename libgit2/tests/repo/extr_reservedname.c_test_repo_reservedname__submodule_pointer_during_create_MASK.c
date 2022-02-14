
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_submodule_update_options ;
typedef int git_submodule ;
typedef int git_repository ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,char*) ;
 int FUNC_7 (int *,int,int *) ;
 int * FUNC_8 () ;

void FUNC_9(void)
{
 git_repository *VAR_2;
 git_submodule *VAR_3;
 git_submodule_update_options VAR_4 = VAR_1;
 git_buf VAR_5 = VAR_0;

 VAR_2 = FUNC_8();

 FUNC_0(FUNC_4(&VAR_5, FUNC_2(), "sub.git"));
 FUNC_1(VAR_2, "submodule.sub.url", VAR_5.ptr);

 FUNC_0(FUNC_6(&VAR_3, VAR_2, "sub"));
 FUNC_0(FUNC_7(VAR_3, 1, &VAR_4));

 FUNC_5(VAR_3);
 FUNC_3(&VAR_5);
}
