
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 long FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3)
{
 long VAR_4;

 VAR_1 = 0;
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == -1 && VAR_1 != 0)
  FUNC_0(VAR_0, "sysconf: %s", VAR_2);
 else if (VAR_4 == -1)
  FUNC_1("undefined\n");
 else
  FUNC_1("%ld\n", VAR_4);
}
