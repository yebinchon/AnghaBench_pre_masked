
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char const) ;

void FUNC_1(struct strbuf *VAR_0, const char *VAR_1)
{
 const char VAR_2 = '\'';
 const char VAR_3 = '\\';
 const char VAR_4 = '\n';
 char VAR_5;

 FUNC_0(VAR_0, VAR_2);
 while ((VAR_5 = *VAR_1++)) {
  if (VAR_5 == VAR_4) {
   FUNC_0(VAR_0, VAR_3);
   FUNC_0(VAR_0, 'n');
   continue;
  }
  if (VAR_5 == VAR_2 || VAR_5 == VAR_3)
   FUNC_0(VAR_0, VAR_3);
  FUNC_0(VAR_0, VAR_5);
 }
 FUNC_0(VAR_0, VAR_2);
}
