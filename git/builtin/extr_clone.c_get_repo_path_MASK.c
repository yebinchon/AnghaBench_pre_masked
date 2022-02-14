
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (struct strbuf*,int*) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1, int *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 const char *VAR_4;
 char *VAR_5;

 FUNC_2(&VAR_3, VAR_1);
 VAR_4 = FUNC_1(&VAR_3, VAR_2);
 VAR_5 = VAR_4 ? FUNC_0(VAR_4) : ((void*)0);
 FUNC_3(&VAR_3);
 return VAR_5;
}
