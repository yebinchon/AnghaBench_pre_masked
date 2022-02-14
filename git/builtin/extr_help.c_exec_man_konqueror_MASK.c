
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char const*,char const*,char*,int ,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct strbuf*,char*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 scalar_t__ FUNC_6 (char const*,char*,size_t*) ;
 int FUNC_7 (int ,char const*) ;
 char* FUNC_8 (char*,int,char const*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_3("DISPLAY");
 if (VAR_3 && *VAR_3) {
  struct strbuf VAR_4 = VAR_0;
  const char *VAR_5 = "kfmclient";


  if (VAR_1) {
   size_t VAR_6;
   if (FUNC_6(VAR_1, "/konqueror", &VAR_6))
    VAR_1 = FUNC_8("%.*s/kfmclient", (int)VAR_6, VAR_1);
   VAR_5 = FUNC_1((char *)VAR_1);
  } else
   VAR_1 = "kfmclient";
  FUNC_4(&VAR_4, "man:%s(1)", VAR_2);
  FUNC_2(VAR_1, VAR_5, "newTab", VAR_4.buf, (char *)((void*)0));
  FUNC_7(FUNC_0("failed to exec '%s'"), VAR_1);
  FUNC_5(&VAR_4);
 }
}
