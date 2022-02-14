
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(unsigned long *VAR_0, unsigned long *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1("Call trace:");
 VAR_3 = 0;
 while (VAR_0 + 1 <= VAR_1) {
  VAR_2 = *VAR_0++;
  if (FUNC_0(VAR_2)) {

   if (VAR_3 % 5 == 0)
    FUNC_1("\n	    ");

   FUNC_1(" [<%08lx>] %pS\n", VAR_2, (void *)VAR_2);
   VAR_3++;
  }
 }
 FUNC_1("\n");
}
