
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_pack_file {int mwf; } ;
typedef int git_packfile_stream ;
typedef scalar_t__ git_off_t ;
typedef scalar_t__ git_object_t ;
typedef int git_mwindow ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct git_pack_file*,int **,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (size_t*,size_t*,int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct git_pack_file*,scalar_t__) ;
 int FUNC_5 (size_t*,scalar_t__*,int *,int **,scalar_t__*) ;

int FUNC_6(
  size_t *VAR_2,
  git_object_t *VAR_3,
  struct git_pack_file *VAR_4,
  git_off_t VAR_5)
{
 git_mwindow *VAR_6 = ((void*)0);
 git_off_t VAR_7 = VAR_5;
 size_t VAR_8;
 git_object_t VAR_9;
 git_off_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_5(&VAR_8, &VAR_9, &VAR_4->mwf, &VAR_6, &VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_9 == VAR_0 || VAR_9 == VAR_1) {
  size_t VAR_12;
  git_packfile_stream VAR_13;

  VAR_10 = FUNC_0(VAR_4, &VAR_6, &VAR_7, VAR_9, VAR_5);
  FUNC_2(&VAR_6);
  if ((VAR_11 = FUNC_4(&VAR_13, VAR_4, VAR_7)) < 0)
   return VAR_11;
  VAR_11 = FUNC_1(&VAR_12, VAR_2, &VAR_13);
  FUNC_3(&VAR_13);
  if (VAR_11 < 0)
   return VAR_11;
 } else {
  *VAR_2 = VAR_8;
  VAR_10 = 0;
 }

 while (VAR_9 == VAR_0 || VAR_9 == VAR_1) {
  VAR_7 = VAR_10;
  VAR_11 = FUNC_5(&VAR_8, &VAR_9, &VAR_4->mwf, &VAR_6, &VAR_7);
  if (VAR_11 < 0)
   return VAR_11;
  if (VAR_9 != VAR_0 && VAR_9 != VAR_1)
   break;
  VAR_10 = FUNC_0(VAR_4, &VAR_6, &VAR_7, VAR_9, VAR_10);
  FUNC_2(&VAR_6);
 }
 *VAR_3 = VAR_9;

 return VAR_11;
}
