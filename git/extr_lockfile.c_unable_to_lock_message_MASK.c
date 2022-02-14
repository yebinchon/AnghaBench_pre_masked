
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct strbuf*,int ,int ,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(const char *VAR_1, int VAR_2, struct strbuf *VAR_3)
{
 if (VAR_2 == VAR_0) {
  FUNC_2(VAR_3, FUNC_0("Unable to create '%s.lock': %s.\n\n"
      "Another git process seems to be running in this repository, e.g.\n"
      "an editor opened by 'git commit'. Please make sure all processes\n"
      "are terminated then try again. If it still fails, a git process\n"
      "may have crashed in this repository earlier:\n"
      "remove the file manually to continue."),
       FUNC_1(VAR_1), FUNC_3(VAR_2));
 } else
  FUNC_2(VAR_3, FUNC_0("Unable to create '%s.lock': %s"),
       FUNC_1(VAR_1), FUNC_3(VAR_2));
}
