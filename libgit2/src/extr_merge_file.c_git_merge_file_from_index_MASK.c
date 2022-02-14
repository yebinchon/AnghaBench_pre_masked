
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_odb_object ;
typedef int git_odb ;
typedef int git_merge_file_result ;
typedef int git_merge_file_options ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ git_merge_file_input ;
typedef int git_index_entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int **,int *,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*,int const*) ;

int FUNC_7(
 git_merge_file_result *VAR_0,
 git_repository *VAR_1,
 const git_index_entry *VAR_2,
 const git_index_entry *VAR_3,
 const git_index_entry *VAR_4,
 const git_merge_file_options *VAR_5)
{
 git_merge_file_input *VAR_6 = ((void*)0),
  VAR_7 = {0}, VAR_8 = {0}, VAR_9 = {0};
 git_odb *VAR_10 = ((void*)0);
 git_odb_object *VAR_11[3] = { 0 };
 int VAR_12 = 0;

 FUNC_0(VAR_0 && VAR_1 && VAR_3 && VAR_4);

 FUNC_5(VAR_0, 0x0, sizeof(git_merge_file_result));

 if ((VAR_12 = FUNC_4(&VAR_10, VAR_1)) < 0)
  goto done;

 if (VAR_2) {
  if ((VAR_12 = FUNC_1(
   &VAR_7, &VAR_11[0], VAR_10, VAR_2)) < 0)
   goto done;

  VAR_6 = &VAR_7;
 }

 if ((VAR_12 = FUNC_1(
   &VAR_8, &VAR_11[1], VAR_10, VAR_3)) < 0 ||
  (VAR_12 = FUNC_1(
   &VAR_9, &VAR_11[2], VAR_10, VAR_4)) < 0)
  goto done;

 VAR_12 = FUNC_6(VAR_0,
  VAR_6, &VAR_8, &VAR_9, VAR_5);

done:
 FUNC_3(VAR_11[0]);
 FUNC_3(VAR_11[1]);
 FUNC_3(VAR_11[2]);
 FUNC_2(VAR_10);

 return VAR_12;
}
