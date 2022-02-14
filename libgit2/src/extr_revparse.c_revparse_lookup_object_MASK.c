
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int **,int *,int ,int ) ;
 int FUNC_2 (int **,int *,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,char const*) ;
 int FUNC_5 (int **,int *,char const*) ;
 int FUNC_6 (int **,int *,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(
 git_object **VAR_4,
 git_reference **VAR_5,
 git_repository *VAR_6,
 const char *VAR_7)
{
 int VAR_8;
 git_reference *VAR_9;

 if ((VAR_8 = FUNC_6(VAR_4, VAR_6, VAR_7)) != VAR_0)
  return VAR_8;

 VAR_8 = FUNC_2(&VAR_9, VAR_6, VAR_7);
 if (!VAR_8) {

  VAR_8 = FUNC_1(
   VAR_4, VAR_6, FUNC_3(VAR_9), VAR_2);

  if (!VAR_8)
   *VAR_5 = VAR_9;

  return VAR_8;
 }

 if (VAR_8 != VAR_0)
  return VAR_8;

 if ((FUNC_7(VAR_7) < VAR_3) &&
  ((VAR_8 = FUNC_4(VAR_4, VAR_6, VAR_7)) != VAR_0))
   return VAR_8;

 if ((VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_7)) != VAR_0)
  return VAR_8;

 FUNC_0(VAR_1, "revspec '%s' not found", VAR_7);
 return VAR_0;
}
