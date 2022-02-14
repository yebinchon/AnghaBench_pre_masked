
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct passwd {int * pw_name; } ;


 char* FUNC_0 (struct passwd const*) ;
 int FUNC_1 (struct strbuf*,int) ;
 int FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct passwd *VAR_0, struct strbuf *VAR_1)
{
 char *VAR_2;





 for (VAR_2 = FUNC_0(VAR_0); *VAR_2 && *VAR_2 != ','; VAR_2++) {
  int VAR_3 = *VAR_2;
  if (VAR_3 != '&')
   FUNC_1(VAR_1, VAR_3);
  else {

   FUNC_1(VAR_1, FUNC_3(*VAR_0->pw_name));
   FUNC_2(VAR_1, VAR_0->pw_name + 1);
  }
 }
}
