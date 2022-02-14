
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char const*,char,int) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 char* FUNC_2 (char const**,int,int *,struct strbuf*,int ) ;

char *FUNC_3(const char *VAR_1, int VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 const char *VAR_4 = FUNC_0(VAR_1, ':', VAR_2);


 if (VAR_4 && VAR_1 < VAR_4) {
  FUNC_1(&VAR_3, VAR_1, VAR_4 - VAR_1);
  VAR_2 -= VAR_4 - VAR_1;
  VAR_1 = VAR_4;
 }
 return FUNC_2(&VAR_1, VAR_2, ((void*)0), &VAR_3, 0);
}
