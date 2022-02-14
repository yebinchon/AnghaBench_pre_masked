
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_parse_ctx ;
typedef int git_buf ;


 scalar_t__ FUNC_0 (char const**,size_t*,int *,char) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
 git_buf *VAR_0, git_buf *VAR_1,
 git_buf *VAR_2, git_buf *VAR_3,
 git_parse_ctx *VAR_4)
{
 const char *VAR_5;
 size_t VAR_6;

 FUNC_2(VAR_0);
 FUNC_2(VAR_1);
 FUNC_2(VAR_2);
 FUNC_2(VAR_3);

 FUNC_4(VAR_4);
 if (FUNC_5(VAR_4))
  return -1;


 if (FUNC_0(&VAR_5, &VAR_6, VAR_4, '<') < 0)
  return -1;

 FUNC_1(VAR_0, VAR_5, VAR_6);
 FUNC_3(VAR_0);





 if (FUNC_0(&VAR_5, &VAR_6, VAR_4, '>') < 0)
  return -1;


 if (!FUNC_5(VAR_4)) {
  FUNC_1(VAR_1, VAR_5, VAR_6);

  FUNC_4(VAR_4);
  if (FUNC_0(&VAR_5, &VAR_6, VAR_4, '<') < 0)
   return -1;
  FUNC_1(VAR_2, VAR_5, VAR_6);
  FUNC_3(VAR_2);

  if (FUNC_0(&VAR_5, &VAR_6, VAR_4, '>') < 0)
   return -1;
 }

 FUNC_1(VAR_3, VAR_5, VAR_6);

 if (!FUNC_5(VAR_4))
  return -1;

 return 0;
}
