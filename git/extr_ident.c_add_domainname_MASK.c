
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,char*) ;
 int FUNC_2 (struct strbuf*,char*) ;
 scalar_t__ FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(struct strbuf *VAR_1, int *VAR_2)
{
 char VAR_3[VAR_0 + 1];

 if (FUNC_5(VAR_3, sizeof(VAR_3))) {
  FUNC_4("cannot get host name");
  FUNC_2(VAR_1, "(none)");
  *VAR_2 = 1;
  return;
 }
 if (FUNC_3(VAR_3, '.'))
  FUNC_2(VAR_1, VAR_3);
 else if (FUNC_0(VAR_3, VAR_1) < 0) {
  FUNC_1(VAR_1, "%s.(none)", VAR_3);
  *VAR_2 = 1;
 }
}
