
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_0, "usage: ip6addrctl [show]\n");
 FUNC_1(VAR_0, "       ip6addrctl add "
  "<prefix> <precedence> <label>\n");
 FUNC_1(VAR_0, "       ip6addrctl delete <prefix>\n");
 FUNC_1(VAR_0, "       ip6addrctl flush\n");
 FUNC_1(VAR_0, "       ip6addrctl install <configfile>\n");

 FUNC_0(1);
}
