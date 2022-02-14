
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(git_buf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (VAR_2[0] == '/')
  VAR_2++;

 FUNC_0(VAR_0);
 return FUNC_1(VAR_0, "file://%s/%s", VAR_1, VAR_2);
}
