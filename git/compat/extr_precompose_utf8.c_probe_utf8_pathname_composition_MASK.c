
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (struct strbuf*,char*,char const*) ;
 int FUNC_6 (int ,int,int) ;
 int VAR_5 ;
 int FUNC_7 (struct strbuf*) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(void)
{
 struct strbuf VAR_6 = VAR_4;
 static const char *VAR_7 = "\xc3\xa4";
 static const char *VAR_8 = "\x61\xcc\x88";
 int VAR_9;
 if (VAR_5 != -1)
  return;
 FUNC_5(&VAR_6, "%s", VAR_7);
 VAR_9 = FUNC_6(VAR_6.buf, VAR_0|VAR_1|VAR_2, 0600);
 if (VAR_9 >= 0) {
  FUNC_2(VAR_9);
  FUNC_5(&VAR_6, "%s", VAR_8);
  VAR_5 = FUNC_1(VAR_6.buf, VAR_3) ? 0 : 1;
  FUNC_4("core.precomposeunicode",
          VAR_5 ? "true" : "false");
  FUNC_5(&VAR_6, "%s", VAR_7);
  if (FUNC_8(VAR_6.buf))
   FUNC_3(FUNC_0("failed to unlink '%s'"), VAR_6.buf);
 }
 FUNC_7(&VAR_6);
}
