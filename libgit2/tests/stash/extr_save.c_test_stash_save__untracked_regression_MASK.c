
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_9__ {char** strings; int count; } ;
struct TYPE_10__ {TYPE_1__ paths; int checkout_strategy; } ;
typedef TYPE_2__ git_checkout_options ;
struct TYPE_11__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,char*,char const*) ;
 int FUNC_6 (int ,int *,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int ) ;
 int FUNC_10 (int **,int ) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int ,int *,int ) ;
 int FUNC_13 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_14(void)
{
 git_checkout_options VAR_7 = VAR_1;
 const char *VAR_8[] = {"what", "where", "how", "why"};
 git_reference *VAR_9;
 git_commit *VAR_10;
 git_buf VAR_11;

 const char* VAR_12 = FUNC_11(VAR_4);

 FUNC_4(&VAR_11, 0);
 FUNC_5(&VAR_11, "%sz", VAR_12);

 FUNC_1(!FUNC_13(VAR_11.ptr, 0777));

 FUNC_2(FUNC_10(&VAR_9, VAR_4));

 FUNC_2(FUNC_9((git_object **)&VAR_10, VAR_9, VAR_2));

 VAR_7.checkout_strategy = VAR_0;

 VAR_7.paths.strings = (char **)VAR_8;
 VAR_7.paths.count = 4;

 FUNC_2(FUNC_6(VAR_4, (git_object*)VAR_10, &VAR_7));

 FUNC_2(FUNC_12(&VAR_6, VAR_4, VAR_5, ((void*)0), VAR_3));

 FUNC_0("refs/stash", "WIP on master");

 FUNC_8(VAR_9);
 FUNC_7(VAR_10);
 FUNC_3(&VAR_11);
}
