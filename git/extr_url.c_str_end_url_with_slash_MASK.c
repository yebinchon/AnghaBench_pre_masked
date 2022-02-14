
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct strbuf*,int *) ;

void FUNC_3(const char *VAR_1, char **VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 FUNC_0(&VAR_3, VAR_1);
 FUNC_1(*VAR_2);
 *VAR_2 = FUNC_2(&VAR_3, ((void*)0));
}
