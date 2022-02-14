
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char const*,size_t) ;
 int FUNC_1 (struct strbuf*,char*) ;
 size_t FUNC_2 (char const*,char*) ;

void FUNC_3(struct strbuf *VAR_0, const char *VAR_1)
{
 while (*VAR_1) {
  size_t VAR_2 = FUNC_2(VAR_1, "\"<>&");
  FUNC_0(VAR_0, VAR_1, VAR_2);
  VAR_1 += VAR_2;
  switch (*VAR_1) {
  case '"':
   FUNC_1(VAR_0, "&quot;");
   break;
  case '<':
   FUNC_1(VAR_0, "&lt;");
   break;
  case '>':
   FUNC_1(VAR_0, "&gt;");
   break;
  case '&':
   FUNC_1(VAR_0, "&amp;");
   break;
  case 0:
   return;
  }
  VAR_1++;
 }
}
