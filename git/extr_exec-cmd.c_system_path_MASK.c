
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (struct strbuf*,char*,int ,char const*) ;
 char* FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 () ;
 char* FUNC_4 (char const*) ;

char *FUNC_5(const char *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;

 if (FUNC_0(VAR_1))
  return FUNC_4(VAR_1);

 FUNC_1(&VAR_2, "%s/%s", FUNC_3(), VAR_1);
 return FUNC_2(&VAR_2, ((void*)0));
}
