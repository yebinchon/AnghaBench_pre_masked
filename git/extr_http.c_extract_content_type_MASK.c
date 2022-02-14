
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 int FUNC_0 (char const*,char*,struct strbuf*) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*,char*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (char const) ;

__attribute__((used)) static void FUNC_8(struct strbuf *VAR_0, struct strbuf *VAR_1,
     struct strbuf *VAR_2)
{
 const char *VAR_3;

 FUNC_6(VAR_1);
 FUNC_5(VAR_1, VAR_0->len);
 for (VAR_3 = VAR_0->buf; *VAR_3; VAR_3++) {
  if (FUNC_1(*VAR_3))
   continue;
  if (*VAR_3 == ';') {
   VAR_3++;
   break;
  }
  FUNC_3(VAR_1, FUNC_7(*VAR_3));
 }

 if (!VAR_2)
  return;

 FUNC_6(VAR_2);
 while (*VAR_3) {
  while (FUNC_1(*VAR_3) || *VAR_3 == ';')
   VAR_3++;
  if (!FUNC_0(VAR_3, "charset", VAR_2))
   return;
  while (*VAR_3 && !FUNC_1(*VAR_3))
   VAR_3++;
 }

 if (!VAR_2->len && FUNC_2(VAR_1->buf, "text/"))
  FUNC_4(VAR_2, "ISO-8859-1");
}
