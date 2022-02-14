
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{

 FUNC_0("%-16s ", "NAME");
 if (VAR_0)
  FUNC_0("S ");
 FUNC_0("%-12s %-12s ", "LINE", "TIME");
 if (VAR_1)
  FUNC_0("IDLE  ");
 FUNC_0("%-16s\n", "FROM");
}
