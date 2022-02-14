
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (char const*,char const) ;

void FUNC_5(struct strbuf *VAR_0, const char *VAR_1)
{
 static const char VAR_2[] = "+,-./:=@_^";
 const char *VAR_3;


 if (!*VAR_1) {
  FUNC_3(VAR_0, "''");
  return;
 }

 for (VAR_3 = VAR_1; *VAR_3; VAR_3++) {
  if (!FUNC_0(*VAR_3) && !FUNC_1(*VAR_3) && !FUNC_4(VAR_2, *VAR_3)) {
   FUNC_2(VAR_0, VAR_1);
   return;
  }
 }


 FUNC_3(VAR_0, VAR_1);
}
