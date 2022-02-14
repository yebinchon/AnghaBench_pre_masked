
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int nip; int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (void const*,int) ;

__attribute__((used)) static void FUNC_5(struct pt_regs *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = VAR_2->nip - (VAR_1 * 3 / 4 * sizeof(int));

 FUNC_3("Instruction dump:");

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  int VAR_5;

  if (!(VAR_3 % 8))
   FUNC_2("\n");





  if (!(VAR_2->msr & VAR_0))
   VAR_4 = (unsigned long)FUNC_1(VAR_4);


  if (!FUNC_0(VAR_4) ||
      FUNC_4((const void *)VAR_4, VAR_5)) {
   FUNC_2("XXXXXXXX ");
  } else {
   if (VAR_2->nip == VAR_4)
    FUNC_2("<%08x> ", VAR_5);
   else
    FUNC_2("%08x ", VAR_5);
  }

  VAR_4 += sizeof(int);
 }

 FUNC_2("\n");
}
