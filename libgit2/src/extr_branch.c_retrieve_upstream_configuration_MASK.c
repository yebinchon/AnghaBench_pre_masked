
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *,int const*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
 git_buf *VAR_2,
 const git_config *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 git_buf VAR_6 = VAR_0;
 int VAR_7;

 if (FUNC_2(&VAR_6, VAR_5,
  VAR_4 + FUNC_4(VAR_1)) < 0)
   return -1;

 VAR_7 = FUNC_3(VAR_2, VAR_3, FUNC_0(&VAR_6));
 FUNC_1(&VAR_6);
 return VAR_7;
}
