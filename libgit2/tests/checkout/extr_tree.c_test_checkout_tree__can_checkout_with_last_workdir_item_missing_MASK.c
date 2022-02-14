
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int *) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*) ;

void FUNC_16(void)
{
 git_index *VAR_4 = ((void*)0);
 git_checkout_options VAR_5 = VAR_1;
 git_oid VAR_6, VAR_7;
 git_tree *VAR_8 = ((void*)0);
 git_commit *VAR_9 = ((void*)0);

 FUNC_10(&VAR_4, VAR_3);

 VAR_5.checkout_strategy = VAR_0;

 FUNC_1(FUNC_9(&VAR_7, VAR_3, "refs/heads/master"));
 FUNC_1(FUNC_4(&VAR_9, VAR_3, &VAR_7));

 FUNC_1(FUNC_2(VAR_3, (git_object *)VAR_9, &VAR_5));
 FUNC_1(FUNC_11(VAR_3, "refs/heads/master"));

 FUNC_1(FUNC_14("./testrepo/this-is-dir", 0777));
 FUNC_0("./testrepo/this-is-dir/contained_file", "content\n");

 FUNC_1(FUNC_5(VAR_4, "this-is-dir/contained_file"));
 FUNC_1(FUNC_7(VAR_4));

 FUNC_1(FUNC_8(&VAR_6, VAR_4));
 FUNC_1(FUNC_13(&VAR_8, VAR_3, &VAR_6));

 FUNC_1(FUNC_15("./testrepo/this-is-dir/contained_file"));

 VAR_5.checkout_strategy = VAR_2;

 VAR_5.checkout_strategy = 1;
 FUNC_2(VAR_3, (git_object *)VAR_8, &VAR_5);

 FUNC_12(VAR_8);
 FUNC_3(VAR_9);
 FUNC_6(VAR_4);
}
