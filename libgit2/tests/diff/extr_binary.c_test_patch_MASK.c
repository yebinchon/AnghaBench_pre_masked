
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_patch ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;
struct TYPE_7__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_9 (int **,int ,int *,int *,int const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,char const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int *,int ) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (int **,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **,int ,int *) ;
 int VAR_3 ;

void FUNC_19(
 const char *VAR_4,
 const char *VAR_5,
 const git_diff_options *VAR_6,
 const char *VAR_7)
{
 git_oid VAR_8, VAR_9;
 git_index *VAR_10 = ((void*)0);
 git_commit *VAR_11, *VAR_12 = ((void*)0);
 git_tree *VAR_13, *VAR_14;
 git_diff *VAR_15;
 git_patch *VAR_16;
 git_buf VAR_17 = VAR_0;

 FUNC_1(FUNC_12(&VAR_8, VAR_4));
 FUNC_1(FUNC_5(&VAR_11, VAR_3, &VAR_8));
 FUNC_1(FUNC_6(&VAR_13, VAR_11));

 if (VAR_5) {
  FUNC_1(FUNC_12(&VAR_9, VAR_5));
  FUNC_1(FUNC_5(&VAR_12, VAR_3, &VAR_9));
  FUNC_1(FUNC_6(&VAR_14, VAR_12));
 } else {
  FUNC_1(FUNC_16(&VAR_10, VAR_3));
  FUNC_1(FUNC_11(&VAR_9, VAR_10));
  FUNC_1(FUNC_18(&VAR_14, VAR_3, &VAR_9));
 }

 FUNC_1(FUNC_9(&VAR_15, VAR_3, VAR_13, VAR_14, VAR_6));

 FUNC_1(FUNC_14(&VAR_16, VAR_15, 0));
 FUNC_1(FUNC_15(&VAR_17, VAR_16));

 FUNC_0(VAR_7, VAR_17.ptr);

 FUNC_2(&VAR_17);
 FUNC_1(FUNC_8(VAR_15, VAR_1, VAR_2, &VAR_17));

 FUNC_0(VAR_7, VAR_17.ptr);

 FUNC_3(&VAR_17);
 FUNC_13(VAR_16);
 FUNC_7(VAR_15);
 FUNC_17(VAR_13);
 FUNC_17(VAR_14);
 FUNC_4(VAR_11);
 FUNC_4(VAR_12);
 FUNC_10(VAR_10);
}
