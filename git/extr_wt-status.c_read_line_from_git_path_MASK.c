
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (struct strbuf*,int *) ;
 int FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 FILE *VAR_3 = FUNC_1(FUNC_2("%s", VAR_1), "r");

 if (!VAR_3) {
  FUNC_5(&VAR_2);
  return ((void*)0);
 }
 FUNC_4(&VAR_2, VAR_3);
 if (!FUNC_0(VAR_3)) {
  return FUNC_3(&VAR_2, ((void*)0));
 } else {
  FUNC_5(&VAR_2);
  return ((void*)0);
 }
}
