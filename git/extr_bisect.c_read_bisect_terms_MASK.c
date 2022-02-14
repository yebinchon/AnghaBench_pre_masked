
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 char* FUNC_4 () ;
 char* FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*) ;

void FUNC_8(const char **VAR_3, const char **VAR_4)
{
 struct strbuf VAR_5 = VAR_1;
 const char *VAR_6 = FUNC_4();
 FILE *VAR_7 = FUNC_3(VAR_6, "r");

 if (!VAR_7) {
  if (VAR_2 == VAR_0) {
   *VAR_3 = "bad";
   *VAR_4 = "good";
   return;
  } else {
   FUNC_1(FUNC_0("could not read file '%s'"), VAR_6);
  }
 } else {
  FUNC_6(&VAR_5, VAR_7);
  *VAR_3 = FUNC_5(&VAR_5, ((void*)0));
  FUNC_6(&VAR_5, VAR_7);
  *VAR_4 = FUNC_5(&VAR_5, ((void*)0));
 }
 FUNC_7(&VAR_5);
 FUNC_2(VAR_7);
}
