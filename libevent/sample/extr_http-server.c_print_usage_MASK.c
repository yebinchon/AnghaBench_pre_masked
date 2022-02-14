
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char const*) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, const char *VAR_1, int VAR_2)
{
 FUNC_1(VAR_0,
  "Syntax: %s [ OPTS ] <docroot>\n"
  " -p      - port\n"
  " -U      - bind to unix socket\n"
  " -u      - unlink unix socket before bind\n"
  " -I      - IOCP\n"
  " -v      - verbosity, enables libevent debug logging too\n", VAR_1);
 FUNC_0(VAR_2);
}
