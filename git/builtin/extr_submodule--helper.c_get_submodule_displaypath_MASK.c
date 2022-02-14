
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 struct strbuf VAR_0 ;
 char* FUNC_1 () ;
 char const* FUNC_2 (char const*,char const*,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char const*,char const*) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_1();

 if (VAR_2 && VAR_3) {
  FUNC_0("cannot have prefix '%s' and superprefix '%s'",
      VAR_2, VAR_3);
 } else if (VAR_2) {
  struct strbuf VAR_4 = VAR_0;
  char *VAR_5 = FUNC_4(FUNC_2(VAR_1, VAR_2, &VAR_4));
  FUNC_3(&VAR_4);
  return VAR_5;
 } else if (VAR_3) {
  return FUNC_5("%s%s", VAR_3, VAR_1);
 } else {
  return FUNC_4(VAR_1);
 }
}
