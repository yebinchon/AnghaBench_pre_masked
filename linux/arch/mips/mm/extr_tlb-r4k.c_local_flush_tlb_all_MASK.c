
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tlbsizevtlb; int tlbsizeftlbsets; int tlbsize; } ;


 unsigned long FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 unsigned long FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;

void FUNC_16(void)
{
 unsigned long VAR_2;
 unsigned long VAR_3;
 int VAR_4, VAR_5;

 FUNC_5(VAR_2);

 VAR_3 = FUNC_8();
 FUNC_3();
 FUNC_13(0);
 FUNC_14(0);

 VAR_4 = FUNC_7();





 if (VAR_0 && !VAR_4) {
  if (VAR_1.tlbsizevtlb) {
   FUNC_15(0);
   FUNC_6();
   FUNC_10();
  }
  VAR_5 = VAR_1.tlbsizevtlb +
   VAR_1.tlbsizeftlbsets;
  for (VAR_4 = VAR_1.tlbsizevtlb;
       VAR_4 < VAR_5;
       VAR_4++) {
   FUNC_15(VAR_4);
   FUNC_6();
   FUNC_10();
  }
 } else {
  while (VAR_4 < VAR_1.tlbsize) {

   FUNC_12(FUNC_0(VAR_4));
   FUNC_15(VAR_4);
   FUNC_6();
   FUNC_9();
   VAR_4++;
  }
 }
 FUNC_11();
 FUNC_12(VAR_3);
 FUNC_2();
 FUNC_1();
 FUNC_4(VAR_2);
}
