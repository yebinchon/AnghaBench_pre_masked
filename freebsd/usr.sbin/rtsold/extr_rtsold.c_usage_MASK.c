
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1)
{

 if (FUNC_2(VAR_1, "rtsold") == 0) {
  FUNC_1(VAR_0, "usage: rtsold [-dDfFm1] [-O script-name] "
      "[-p pidfile] [-R script-name] interface ...\n");
  FUNC_1(VAR_0, "usage: rtsold [-dDfFm1] [-O script-name] "
      "[-p pidfile] [-R script-name] -a\n");
 } else {
  FUNC_1(VAR_0, "usage: rtsol [-dDF] [-O script-name] "
      "[-p pidfile] [-R script-name] interface ...\n");
  FUNC_1(VAR_0, "usage: rtsol [-dDF] [-O script-name] "
      "[-p pidfile] [-R script-name] -a\n");
 }
 FUNC_0(1);
}
