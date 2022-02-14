
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct strbuf*,char const) ;
 int FUNC_3 (struct strbuf*,char*,int) ;
 char* FUNC_4 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_1, const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 const char *VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3, VAR_1);

 for (VAR_4 = VAR_2; (VAR_5 = *VAR_4) != 0; VAR_4++)
  if (FUNC_1(VAR_5))
   FUNC_3(&VAR_3, "%%%02x", VAR_5);
  else
   FUNC_2(&VAR_3, *VAR_4);

 return FUNC_4(&VAR_3, ((void*)0));
}
