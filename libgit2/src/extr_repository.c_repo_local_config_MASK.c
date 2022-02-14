
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int ,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int ) ;
 int FUNC_6 (int **,char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int **,int *) ;

__attribute__((used)) static int FUNC_10(
 git_config **VAR_3,
 git_buf *VAR_4,
 git_repository *VAR_5,
 const char *VAR_6)
{
 int VAR_7 = 0;
 git_config *VAR_8;
 const char *VAR_9;

 if (FUNC_2(VAR_4, VAR_6, VAR_0) < 0)
  return -1;
 VAR_9 = FUNC_1(VAR_4);


 if (!FUNC_8(VAR_9) &&
  (VAR_7 = FUNC_0(VAR_9, VAR_1)) < 0)
  return VAR_7;


 if (!VAR_5)
  return FUNC_6(VAR_3, VAR_9);


 if ((VAR_7 = FUNC_9(&VAR_8, VAR_5)) < 0)
  return VAR_7;

 if (FUNC_5(VAR_3, VAR_8, VAR_2) < 0) {
  FUNC_7();

  if (!(VAR_7 = FUNC_3(
    VAR_8, VAR_9, VAR_2, VAR_5, 0)))
   VAR_7 = FUNC_5(VAR_3, VAR_8, VAR_2);
 }

 FUNC_4(VAR_8);

 return VAR_7;
}
