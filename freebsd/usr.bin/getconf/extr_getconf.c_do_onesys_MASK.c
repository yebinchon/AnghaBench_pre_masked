
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 long FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, int VAR_2)
{
 long VAR_3;

 VAR_0 = 0;
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == -1 && VAR_0 != 0) {
  FUNC_2("sysconf: %s", VAR_1);
  return;
 }
 FUNC_0("%s: ", VAR_1);
 if (VAR_3 == -1)
  FUNC_0("undefined\n");
 else
  FUNC_0("%ld\n", VAR_3);
}
