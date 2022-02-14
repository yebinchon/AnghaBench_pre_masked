
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int *,char*) ;
 int FUNC_1 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_2(git_config *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_3, "core.repositoryformatversion");

 if (VAR_5 == VAR_0)
  return 0;

 if (VAR_5 < 0)
  return -1;

 if (VAR_2 < VAR_4) {
  FUNC_1(VAR_1,
   "unsupported repository version %d. Only versions up to %d are supported.",
   VAR_4, VAR_2);
  return -1;
 }

 return 0;
}
