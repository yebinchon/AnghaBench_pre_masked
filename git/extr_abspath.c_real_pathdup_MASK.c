
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (struct strbuf*,int *) ;
 scalar_t__ FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*) ;

char *FUNC_3(const char *VAR_1, int VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 char *VAR_4 = ((void*)0);

 if (FUNC_1(&VAR_3, VAR_1, VAR_2))
  VAR_4 = FUNC_0(&VAR_3, ((void*)0));

 FUNC_2(&VAR_3);

 return VAR_4;
}
