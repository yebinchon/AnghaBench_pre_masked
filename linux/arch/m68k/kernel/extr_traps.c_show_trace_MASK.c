
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

void FUNC_3(unsigned long *VAR_1)
{
 unsigned long *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2("Call Trace:");
 VAR_3 = (unsigned long)VAR_1 + VAR_0 - 1;
 VAR_2 = (unsigned long *)(VAR_3 & -VAR_0);
 VAR_4 = 0;
 while (VAR_1 + 1 <= VAR_2) {
  VAR_3 = *VAR_1++;
  if (FUNC_0(VAR_3)) {

   if (VAR_4 % 5 == 0)
    FUNC_1("\n       ");

   FUNC_1(" [<%08lx>] %pS\n", VAR_3, (void *)VAR_3);
   VAR_4++;
  }
 }
 FUNC_1("\n");
}
