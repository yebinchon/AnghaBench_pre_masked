
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
struct TYPE_8__ {int* payload; int transfer_progress; } ;
struct TYPE_10__ {TYPE_1__ callbacks; } ;
typedef TYPE_3__ git_fetch_options ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int **,int *,int ,char const*) ;
 int FUNC_7 (int *,int *,TYPE_3__*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,char*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_3 ;

void FUNC_12(void)
{
 git_repository *VAR_4;
 git_remote *VAR_5;
 int VAR_6 = 0;
 git_strarray VAR_7 = {0};

 const char *VAR_8 = FUNC_2("testrepo.git");
 git_fetch_options VAR_9 = VAR_0;

 VAR_9.callbacks.transfer_progress = VAR_3;
 VAR_9.callbacks.payload = &VAR_6;

 FUNC_4(&VAR_2, "foo");
 FUNC_3(FUNC_10(&VAR_4, "foo", 1));

 FUNC_3(FUNC_6(&VAR_5, VAR_4, VAR_1, VAR_8));
 FUNC_3(FUNC_7(VAR_5, ((void*)0), &VAR_9, ((void*)0)));

 FUNC_3(FUNC_5(&VAR_7, VAR_4));
 FUNC_1(19, (int)VAR_7.count);
 FUNC_0(VAR_6 > 0);

 FUNC_11(&VAR_7);
 FUNC_8(VAR_5);
 FUNC_9(VAR_4);
}
