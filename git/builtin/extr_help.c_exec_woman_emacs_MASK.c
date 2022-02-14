
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char*,char*,int ,char*) ;
 int FUNC_3 (struct strbuf*,char*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, const char *VAR_2)
{
 if (!FUNC_1()) {

  struct strbuf VAR_3 = VAR_0;

  if (!VAR_1)
   VAR_1 = "emacsclient";
  FUNC_3(&VAR_3, "(woman \"%s\")", VAR_2);
  FUNC_2(VAR_1, "emacsclient", "-e", VAR_3.buf, (char *)((void*)0));
  FUNC_5(FUNC_0("failed to exec '%s'"), VAR_1);
  FUNC_4(&VAR_3);
 }
}
