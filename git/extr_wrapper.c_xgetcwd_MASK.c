
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct strbuf*,int *) ;
 scalar_t__ FUNC_3 (struct strbuf*) ;

char *FUNC_4(void)
{
 struct strbuf VAR_1 = VAR_0;
 if (FUNC_3(&VAR_1))
  FUNC_1(FUNC_0("unable to get current working directory"));
 return FUNC_2(&VAR_1, ((void*)0));
}
