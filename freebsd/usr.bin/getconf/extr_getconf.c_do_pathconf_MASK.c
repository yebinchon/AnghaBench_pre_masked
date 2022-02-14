
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ VAR_1 ;
 long FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3, const char *VAR_4)
{
 long VAR_5;

 VAR_1 = 0;
 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5 == -1 && VAR_1 != 0)
  FUNC_0(VAR_0, "pathconf: %s", VAR_2);
 else if (VAR_5 == -1)
  FUNC_2("undefined\n");
 else
  FUNC_2("%ld\n", VAR_5);
}
