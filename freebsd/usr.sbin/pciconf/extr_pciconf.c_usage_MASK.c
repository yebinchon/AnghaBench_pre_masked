
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{

 FUNC_1(VAR_0, "%s",
  "usage: pciconf -l [-BbcevV] [device]\n"
  "       pciconf -a device\n"
  "       pciconf -r [-b | -h] device addr[:addr2]\n"
  "       pciconf -w [-b | -h] device addr value\n"
  "       pciconf -D [-b | -h | -x] device bar [start [count]]"
  "\n");
 FUNC_0(1);
}
