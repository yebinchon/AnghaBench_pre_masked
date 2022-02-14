
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_index ;
typedef int git_diff ;
struct TYPE_4__ {int * file_status; int files; } ;
typedef TYPE_1__ diff_expects ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int * FUNC_11 (int ,char const*) ;

void FUNC_12(void)
{
 const char *VAR_9 = "26a125ee1bf";
 git_tree *VAR_10;
 git_index *VAR_11;
 git_index *VAR_12;
 git_diff *VAR_13;
 diff_expects VAR_14;

 FUNC_1(FUNC_6(&VAR_11));
 VAR_10 = FUNC_11(VAR_8, VAR_9);
 FUNC_1(FUNC_7(VAR_11, VAR_10));

 FUNC_1(FUNC_8(&VAR_12, VAR_8));

 FUNC_1(FUNC_4(&VAR_13, VAR_8, VAR_11, VAR_12, ((void*)0)));

 FUNC_10(&VAR_14, 0, sizeof(diff_expects));
 FUNC_1(FUNC_2(
  VAR_13, VAR_5, VAR_4, VAR_6, VAR_7, &VAR_14));
 FUNC_0(8, VAR_14.files);
 FUNC_0(3, VAR_14.file_status[VAR_0]);
 FUNC_0(2, VAR_14.file_status[VAR_2]);
 FUNC_0(3, VAR_14.file_status[VAR_3]);
 FUNC_0(0, VAR_14.file_status[VAR_1]);

 FUNC_3(VAR_13);
 FUNC_5(VAR_12);
 FUNC_5(VAR_11);
 FUNC_9(VAR_10);
}
