
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 char* FUNC_0 (char const*,char,int) ;
 int FUNC_1 (struct strbuf*,char*,int) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1, int VAR_2, struct strbuf *VAR_3)
{
 const char *VAR_4;

 if (VAR_2 || VAR_0[1] == '{')
  return -1;


 VAR_4 = FUNC_0(VAR_0 + VAR_2 + 1, '@', VAR_1 - VAR_2 - 1);
 if (VAR_4 && VAR_4[1] != '{')
  return -1;
 if (!VAR_4)
  VAR_4 = VAR_0 + VAR_1;
 if (VAR_4 != VAR_0 + 1)
  return -1;

 FUNC_2(VAR_3);
 FUNC_1(VAR_3, "HEAD", 4);
 return 1;
}
