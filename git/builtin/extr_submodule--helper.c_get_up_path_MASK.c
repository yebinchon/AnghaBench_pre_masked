
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (struct strbuf*,char*) ;
 char* FUNC_3 (struct strbuf*,int *) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_1)
{
 int VAR_2;
 struct strbuf VAR_3 = VAR_0;

 for (VAR_2 = FUNC_0(VAR_1); VAR_2; VAR_2--)
  FUNC_2(&VAR_3, "../");






 if (!FUNC_1(VAR_1[FUNC_4(VAR_1) - 1]))
  FUNC_2(&VAR_3, "../");

 return FUNC_3(&VAR_3, ((void*)0));
}
