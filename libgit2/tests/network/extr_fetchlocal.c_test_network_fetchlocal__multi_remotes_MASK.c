
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ count; int member_0; } ;
typedef TYPE_2__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
struct TYPE_8__ {int transfer_progress; } ;
struct TYPE_10__ {TYPE_1__ callbacks; } ;
typedef TYPE_3__ git_fetch_options ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,int *,TYPE_3__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char*) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_1 ;

void FUNC_10(void)
{
 git_repository *VAR_2 = FUNC_3("testrepo.git");
 git_remote *VAR_3, *VAR_4;
 git_strarray VAR_5 = {0};
 git_fetch_options VAR_6 = VAR_0;

 VAR_6.callbacks.transfer_progress = VAR_1;
 FUNC_2(FUNC_8(VAR_2, "test", FUNC_1("testrepo.git")));
 FUNC_2(FUNC_7(&VAR_3, VAR_2, "test"));
 FUNC_2(FUNC_5(VAR_3, ((void*)0), &VAR_6, ((void*)0)));

 FUNC_2(FUNC_4(&VAR_5, VAR_2));
 FUNC_0(33, (int)VAR_5.count);
 FUNC_9(&VAR_5);

 FUNC_2(FUNC_8(VAR_2, "test_with_pushurl", FUNC_1("testrepo.git")));
 FUNC_2(FUNC_7(&VAR_4, VAR_2, "test_with_pushurl"));
 FUNC_2(FUNC_5(VAR_4, ((void*)0), &VAR_6, ((void*)0)));

 FUNC_2(FUNC_4(&VAR_5, VAR_2));
 FUNC_0(45, (int)VAR_5.count);

 FUNC_9(&VAR_5);
 FUNC_6(VAR_3);
 FUNC_6(VAR_4);
}
