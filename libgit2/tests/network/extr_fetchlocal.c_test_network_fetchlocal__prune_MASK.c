
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ count; int member_0; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;
struct TYPE_10__ {int* payload; int transfer_progress; } ;
struct TYPE_9__ {TYPE_4__ callbacks; } ;
typedef TYPE_2__ git_fetch_options ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int **,int *,char*) ;
 int FUNC_10 (int **,int *,int ,char const*) ;
 int FUNC_11 (int *,int *,TYPE_2__*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *,int ) ;
 int FUNC_14 (int *,TYPE_4__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,char*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_3 ;

void FUNC_19(void)
{
 git_repository *VAR_4;
 git_remote *VAR_5;
 int VAR_6 = 0;
 git_strarray VAR_7 = {0};
 git_reference *VAR_8;
 git_repository *VAR_9 = FUNC_4("testrepo.git");
 const char *VAR_10 = FUNC_3(FUNC_17(VAR_9));
 git_fetch_options VAR_11 = VAR_0;

 VAR_11.callbacks.transfer_progress = VAR_3;
 VAR_11.callbacks.payload = &VAR_6;

 FUNC_5(&VAR_2, "foo");
 FUNC_2(FUNC_16(&VAR_4, "foo", 1));

 FUNC_2(FUNC_10(&VAR_5, VAR_4, VAR_1, VAR_10));
 FUNC_2(FUNC_11(VAR_5, ((void*)0), &VAR_11, ((void*)0)));

 FUNC_2(FUNC_8(&VAR_7, VAR_4));
 FUNC_1(19, (int)VAR_7.count);
 FUNC_0(VAR_6 > 0);
 FUNC_18(&VAR_7);
 FUNC_12(VAR_5);

 FUNC_2(FUNC_9(&VAR_8, VAR_9, "refs/heads/br2"));
 FUNC_2(FUNC_6(VAR_8));
 FUNC_7(VAR_8);

 FUNC_2(FUNC_13(&VAR_5, VAR_4, VAR_1));
 FUNC_2(FUNC_11(VAR_5, ((void*)0), &VAR_11, ((void*)0)));
 FUNC_2(FUNC_14(VAR_5, &VAR_11.callbacks));

 FUNC_2(FUNC_8(&VAR_7, VAR_4));
 FUNC_1(18, (int)VAR_7.count);
 FUNC_18(&VAR_7);
 FUNC_12(VAR_5);

 FUNC_2(FUNC_9(&VAR_8, VAR_9, "refs/heads/packed"));
 FUNC_2(FUNC_6(VAR_8));
 FUNC_7(VAR_8);

 FUNC_2(FUNC_13(&VAR_5, VAR_4, VAR_1));
 FUNC_2(FUNC_11(VAR_5, ((void*)0), &VAR_11, ((void*)0)));
 FUNC_2(FUNC_14(VAR_5, &VAR_11.callbacks));

 FUNC_2(FUNC_8(&VAR_7, VAR_4));
 FUNC_1(17, (int)VAR_7.count);
 FUNC_18(&VAR_7);
 FUNC_12(VAR_5);

 FUNC_15(VAR_4);
}
