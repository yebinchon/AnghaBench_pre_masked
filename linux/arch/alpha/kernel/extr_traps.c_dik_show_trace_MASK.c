
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(unsigned long *VAR_0)
{
 long VAR_1 = 0;
 FUNC_0("Trace:\n");
 while (0x1ff8 & (unsigned long) VAR_0) {
  extern char VAR_2[], VAR_3[];
  unsigned long VAR_4 = *VAR_0;
  VAR_0++;
  if (VAR_4 < (unsigned long) &VAR_2)
   continue;
  if (VAR_4 >= (unsigned long) &VAR_3)
   continue;
  FUNC_0("[<%lx>] %pSR\n", VAR_4, (void *)VAR_4);
  if (VAR_1 > 40) {
   FUNC_0(" ...");
   break;
  }
 }
 FUNC_0("\n");
}
