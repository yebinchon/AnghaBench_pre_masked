
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_strarray ;
typedef int git_repository ;
struct TYPE_4__ {int pathspec; } ;
typedef TYPE_1__ git_pathspec ;
typedef int git_iterator ;
typedef int git_index_matched_path_cb ;
typedef int git_index ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,int const*,unsigned int,int ,void*) ;

int FUNC_9(
 git_index *VAR_4,
 const git_strarray *VAR_5,
 unsigned int VAR_6,
 git_index_matched_path_cb VAR_7,
 void *VAR_8)
{
 int VAR_9;
 git_repository *VAR_10;
 git_iterator *VAR_11 = ((void*)0);
 git_pathspec VAR_12;
 bool VAR_13 = (VAR_6 & VAR_1) != 0;

 FUNC_1(VAR_4);

 VAR_10 = FUNC_0(VAR_4);
 if ((VAR_9 = FUNC_7(VAR_10, "index add all")) < 0)
  return VAR_9;

 if ((VAR_9 = FUNC_6(&VAR_12, VAR_5)) < 0)
  return VAR_9;


 if ((VAR_6 & VAR_0) != 0 &&
  (VAR_6 & VAR_2) == 0 &&
  (VAR_9 = FUNC_3(
   VAR_10, &VAR_12.pathspec, VAR_13)) < 0)
  goto cleanup;

 VAR_9 = FUNC_8(VAR_4, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_9)
  FUNC_2(VAR_9);

cleanup:
 FUNC_4(VAR_11);
 FUNC_5(&VAR_12);

 return VAR_9;
}
