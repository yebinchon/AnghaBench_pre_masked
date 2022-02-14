
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
 int * FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int **,int *,int ,char const*) ;
 int FUNC_7 (int *,int *,TYPE_3__*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_2 ;

void FUNC_10(void)
{
 git_repository *VAR_3 = FUNC_4("partial-testrepo");
 git_remote *VAR_4;
 int VAR_5 = 0;
 git_strarray VAR_6 = {0};
 const char *VAR_7;
 git_fetch_options VAR_8 = VAR_0;

 VAR_8.callbacks.transfer_progress = VAR_2;
 VAR_8.callbacks.payload = &VAR_5;

 FUNC_3(FUNC_5(&VAR_6, VAR_3));
 FUNC_1(1, (int)VAR_6.count);

 VAR_7 = FUNC_2("testrepo.git");
 FUNC_3(FUNC_6(&VAR_4, VAR_3, VAR_1, VAR_7));
 FUNC_3(FUNC_7(VAR_4, ((void*)0), &VAR_8, ((void*)0)));

 FUNC_9(&VAR_6);

 FUNC_3(FUNC_5(&VAR_6, VAR_3));
 FUNC_1(20, (int)VAR_6.count);
 FUNC_0(VAR_5 > 0);

 FUNC_9(&VAR_6);
 FUNC_8(VAR_4);
}
