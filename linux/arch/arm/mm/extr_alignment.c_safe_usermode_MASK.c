
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2, bool VAR_3)
{
 if (FUNC_0() && !(VAR_2 & (VAR_0 | VAR_1))) {
  VAR_2 |= VAR_0;

  if (VAR_3)
   FUNC_1("alignment: ignoring faults is unsafe on this CPU.  Defaulting to fixup mode.\n");
 }

 return VAR_2;
}
