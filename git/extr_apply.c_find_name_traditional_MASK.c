
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (char const*,size_t) ;
 char* FUNC_1 (struct strbuf*,char const*,char*,int,char const*,int ) ;
 char* FUNC_2 (struct strbuf*,char const*,int) ;
 char const* FUNC_3 (char const*,char) ;

__attribute__((used)) static char *FUNC_4(struct strbuf *VAR_1,
       const char *VAR_2,
       char *VAR_3,
       int VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;

 if (*VAR_2 == '"') {
  char *VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 VAR_5 = FUNC_3(VAR_2, '\n') - VAR_2;
 VAR_6 = FUNC_0(VAR_2, VAR_5);
 if (!VAR_6)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), VAR_0);
 VAR_5 -= VAR_6;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_2 + VAR_5, 0);
}
