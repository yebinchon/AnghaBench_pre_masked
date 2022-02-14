
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char*) ;

void FUNC_2(struct strbuf *VAR_0, const char *VAR_1)
{
 char VAR_2;

 FUNC_0(VAR_0, '"');
 while ((VAR_2 = *VAR_1++)) {
  switch (VAR_2) {
  case '[': case ']':
  case '{': case '}':
  case '$': case '\\': case '"':
   FUNC_0(VAR_0, '\\');

  default:
   FUNC_0(VAR_0, VAR_2);
   break;
  case '\f':
   FUNC_1(VAR_0, "\\f");
   break;
  case '\r':
   FUNC_1(VAR_0, "\\r");
   break;
  case '\n':
   FUNC_1(VAR_0, "\\n");
   break;
  case '\t':
   FUNC_1(VAR_0, "\\t");
   break;
  case '\v':
   FUNC_1(VAR_0, "\\v");
   break;
  }
 }
 FUNC_0(VAR_0, '"');
}
