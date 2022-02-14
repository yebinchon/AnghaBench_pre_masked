
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_merge_preference_t ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const**,int *,char*) ;
 scalar_t__ FUNC_2 (int*,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int **,int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(git_merge_preference_t *VAR_4, git_repository *VAR_5)
{
 git_config *VAR_6;
 const char *VAR_7;
 int VAR_8, VAR_9 = 0;

 *VAR_4 = VAR_2;

 if ((VAR_9 = FUNC_4(&VAR_6, VAR_5)) < 0)
  goto done;

 if ((VAR_9 = FUNC_1(&VAR_7, VAR_6, "merge.ff")) < 0) {
  if (VAR_9 == VAR_0) {
   FUNC_3();
   VAR_9 = 0;
  }

  goto done;
 }

 if (FUNC_2(&VAR_8, VAR_7) == 0) {
  if (!VAR_8)
   *VAR_4 |= VAR_3;
 } else {
  if (FUNC_5(VAR_7, "only") == 0)
   *VAR_4 |= VAR_1;
 }

done:
 FUNC_0(VAR_6);
 return VAR_9;
}
