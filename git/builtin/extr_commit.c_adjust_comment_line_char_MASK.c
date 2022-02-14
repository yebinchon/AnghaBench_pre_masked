
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 int FUNC_0 (char*) ;
 char VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char,int ) ;
 char* FUNC_3 (char*,char const) ;

__attribute__((used)) static void FUNC_4(const struct strbuf *VAR_1)
{
 char VAR_2[] = "#;@!$%^&|:";
 char *VAR_3;
 const char *VAR_4;

 VAR_0 = VAR_2[0];
 if (!FUNC_2(VAR_1->buf, VAR_0, VAR_1->len))
  return;

 VAR_4 = VAR_1->buf;
 VAR_3 = FUNC_3(VAR_2, *VAR_4);
 if (VAR_3)
  *VAR_3 = ' ';
 for (VAR_4 = VAR_1->buf; *VAR_4; VAR_4++) {
  if ((VAR_4[0] == '\n' || VAR_4[0] == '\r') && VAR_4[1]) {
   VAR_3 = FUNC_3(VAR_2, VAR_4[1]);
   if (VAR_3)
    *VAR_3 = ' ';
  }
 }

 for (VAR_4 = VAR_2; *VAR_4 == ' '; VAR_4++)
  ;
 if (!*VAR_4)
  FUNC_1(FUNC_0("unable to select a comment character that is not used\n"
        "in the current commit message"));
 VAR_0 = *VAR_4;
}
