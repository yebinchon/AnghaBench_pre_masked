
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char*,unsigned char) ;
 int FUNC_2 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, const char *VAR_1)
{
 unsigned char VAR_2;

 FUNC_0(VAR_0, '"');
 while ((VAR_2 = *VAR_1++) != '\0') {
  if (VAR_2 == '"')
   FUNC_2(VAR_0, "\\\"");
  else if (VAR_2 == '\\')
   FUNC_2(VAR_0, "\\\\");
  else if (VAR_2 == '\n')
   FUNC_2(VAR_0, "\\n");
  else if (VAR_2 == '\r')
   FUNC_2(VAR_0, "\\r");
  else if (VAR_2 == '\t')
   FUNC_2(VAR_0, "\\t");
  else if (VAR_2 == '\f')
   FUNC_2(VAR_0, "\\f");
  else if (VAR_2 == '\b')
   FUNC_2(VAR_0, "\\b");
  else if (VAR_2 < 0x20)
   FUNC_1(VAR_0, "\\u%04x", VAR_2);
  else
   FUNC_0(VAR_0, VAR_2);
 }
 FUNC_0(VAR_0, '"');
}
