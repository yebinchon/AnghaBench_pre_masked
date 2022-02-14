
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_merge_options ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (int **,int *,int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(
 git_index **VAR_3, git_repository *VAR_4,
 const char *VAR_5, const char *VAR_6,
 git_merge_options *VAR_7)
{
 git_commit *VAR_8, *VAR_9, *VAR_10 = ((void*)0);
 git_tree *VAR_11, *VAR_12, *VAR_13 = ((void*)0);
 git_oid VAR_14, VAR_15, VAR_16;
 git_buf VAR_17 = VAR_0;
 int VAR_18;

 FUNC_3(&VAR_17, "%s%s", VAR_2, VAR_5);
 FUNC_0(FUNC_10(&VAR_14, VAR_4, VAR_17.ptr));
 FUNC_0(FUNC_6(&VAR_8, VAR_4, &VAR_14));

 FUNC_1(&VAR_17);
 FUNC_3(&VAR_17, "%s%s", VAR_2, VAR_6);
 FUNC_0(FUNC_10(&VAR_15, VAR_4, VAR_17.ptr));
 FUNC_0(FUNC_6(&VAR_9, VAR_4, &VAR_15));

 VAR_18 = FUNC_8(&VAR_16, VAR_4, FUNC_5(VAR_8), FUNC_5(VAR_9));

 if (VAR_18 != VAR_1) {
  FUNC_0(VAR_18);

  FUNC_0(FUNC_6(&VAR_10, VAR_4, &VAR_16));
  FUNC_0(FUNC_7(&VAR_13, VAR_10));
 }

 FUNC_0(FUNC_7(&VAR_11, VAR_8));
 FUNC_0(FUNC_7(&VAR_12, VAR_9));

 VAR_18 = FUNC_9(VAR_3, VAR_4, VAR_13, VAR_11, VAR_12, VAR_7);

 FUNC_2(&VAR_17);
 FUNC_11(VAR_11);
 FUNC_11(VAR_12);
 FUNC_11(VAR_13);
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);

 return VAR_18;
}
