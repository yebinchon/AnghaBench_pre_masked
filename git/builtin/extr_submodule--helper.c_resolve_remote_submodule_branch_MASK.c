
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(int VAR_1, const char **VAR_2,
  const char *VAR_3)
{
 const char *VAR_4;
 struct strbuf VAR_5 = VAR_0;
 if (VAR_1 != 2)
  FUNC_0("submodule--helper remote-branch takes exactly one arguments, got %d", VAR_1);

 VAR_4 = FUNC_2(VAR_2[1]);
 if (!VAR_4)
  FUNC_0("submodule %s doesn't exist", VAR_2[1]);

 FUNC_1("%s", VAR_4);
 FUNC_3(&VAR_5);
 return 0;
}
