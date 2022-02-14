
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*,char const*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 if (VAR_1 != 3)
  FUNC_0("submodule--helper relative-path takes exactly 2 arguments, got %d", VAR_1);

 FUNC_1("%s", FUNC_2(VAR_2[1], VAR_2[2], &VAR_4));
 FUNC_3(&VAR_4);
 return 0;
}
