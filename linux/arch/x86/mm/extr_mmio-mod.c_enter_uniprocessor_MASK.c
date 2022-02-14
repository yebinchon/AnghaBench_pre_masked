
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (FUNC_0() > 1)
  FUNC_1("multiple CPUs are online, may miss events. "
      "Suggest booting with maxcpus=1 kernel argument.\n");
}
