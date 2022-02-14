
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_time_t ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char const*,size_t) ;
 int FUNC_5 (int **,int **,int *,int ,int) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int **,int **,int *,int ,size_t) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (int*,char const*) ;

__attribute__((used)) static int FUNC_10(git_object **VAR_2, git_reference **VAR_3, const char *VAR_4, size_t VAR_5, git_repository* VAR_6, const char *VAR_7)
{
 bool VAR_8;
 int VAR_9 = 0, VAR_10 = -1;
 git_buf VAR_11 = VAR_0;
 git_time_t VAR_12;

 FUNC_0(*VAR_2 == ((void*)0));

 if (FUNC_4(&VAR_11, VAR_4, VAR_5) < 0)
  return -1;

 VAR_8 = !FUNC_9(&VAR_9, VAR_7);

 if (*VAR_7 == '-' && (!VAR_8 || VAR_9 == 0)) {
  VAR_10 = VAR_1;
  goto cleanup;
 }

 if (VAR_8) {
  if (VAR_9 < 0)
   VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_6, FUNC_2(&VAR_11), -VAR_9);
  else
   VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_6, FUNC_2(&VAR_11), VAR_9);

  goto cleanup;
 }

 if (!FUNC_8(VAR_7, "u") || !FUNC_8(VAR_7, "upstream")) {
  VAR_10 = FUNC_6(VAR_3, FUNC_2(&VAR_11), VAR_6);

  goto cleanup;
 }

 if (FUNC_1(&VAR_12, VAR_7) < 0)
  goto cleanup;

 VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_6, FUNC_2(&VAR_11), (size_t)VAR_12);

cleanup:
 FUNC_3(&VAR_11);
 return VAR_10;
}
