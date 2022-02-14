
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

void FUNC_3(unsigned long *VAR_2)
{
 unsigned long *VAR_3;
 unsigned long *VAR_4;
 unsigned long *VAR_5;
 unsigned long VAR_6;

 VAR_6 = (unsigned long) VAR_2 & VAR_0;
 VAR_4 = (unsigned long *) VAR_6;
 VAR_3 = (unsigned long *) (VAR_6 + VAR_1);

 VAR_5 = VAR_2;
 FUNC_2("\nCall Trace:");

 while (VAR_5 > VAR_4 && VAR_5 < VAR_3) {




  VAR_6 = *VAR_5++;

  if (FUNC_0(VAR_6))
   FUNC_1("\n[<%08lx>] %pS", VAR_6, (void *)VAR_6);
 }
 FUNC_1("\n");
}
