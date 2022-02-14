
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 char* FUNC_5 (char const*,char*) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 static char *VAR_3 = "Content-Type: text/html;\n";
 static char *VAR_4 = "<pre>\n";
 static char *VAR_5 = "</pre>\n";
 const char *VAR_6 = FUNC_5(VAR_1->buf, "\n\n");

 if (!VAR_6)
  return;

 VAR_6 += 2;

 FUNC_0(&VAR_2, VAR_1->buf, VAR_6 - VAR_1->buf - 1);
 FUNC_2(&VAR_2, VAR_3);
 FUNC_1(&VAR_2, '\n');
 FUNC_2(&VAR_2, VAR_4);
 FUNC_3(&VAR_2, VAR_6);
 FUNC_2(&VAR_2, VAR_5);

 FUNC_4(VAR_1);
 *VAR_1 = VAR_2;
}
