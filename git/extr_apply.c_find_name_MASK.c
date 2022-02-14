
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 char* FUNC_0 (struct strbuf*,char const*,char*,int,int *,int) ;
 char* FUNC_1 (struct strbuf*,char const*,int) ;

__attribute__((used)) static char *FUNC_2(struct strbuf *VAR_0,
         const char *VAR_1,
         char *VAR_2,
         int VAR_3,
         int VAR_4)
{
 if (*VAR_1 == '"') {
  char *VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), VAR_4);
}
