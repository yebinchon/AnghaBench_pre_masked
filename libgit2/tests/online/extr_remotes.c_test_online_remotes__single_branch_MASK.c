
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t count; int * strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_repository ;
typedef int git_remote ;
struct TYPE_9__ {char* checkout_branch; int remote_cb; } ;
typedef TYPE_2__ git_clone_options ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int **,int ,char*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int **,int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_3 ;

void FUNC_11(void)
{
 git_clone_options VAR_4 = VAR_0;
 git_repository *VAR_5;
 git_remote *VAR_6;
 git_strarray VAR_7;
 size_t VAR_8, VAR_9 = 0;

 VAR_4.remote_cb = VAR_3;
 VAR_4.checkout_branch = "first-merge";

 FUNC_2(FUNC_4(&VAR_5, VAR_2, "./single-branch", &VAR_4));
 FUNC_2(FUNC_5(&VAR_7, VAR_5));

 for (VAR_8 = 0; VAR_8 < VAR_7.count; VAR_8++) {
  if (!FUNC_3(VAR_7.strings[VAR_8], "refs/heads/"))
   VAR_9++;
 }
 FUNC_0(1, VAR_9);

 FUNC_10(&VAR_7);

 FUNC_2(FUNC_8(&VAR_6, VAR_5, "origin"));
 FUNC_2(FUNC_7(&VAR_7, VAR_6));

 FUNC_0(1, VAR_7.count);
 FUNC_1(VAR_1, VAR_7.strings[0]);

 FUNC_10(&VAR_7);
 FUNC_6(VAR_6);
 FUNC_9(VAR_5);
}
