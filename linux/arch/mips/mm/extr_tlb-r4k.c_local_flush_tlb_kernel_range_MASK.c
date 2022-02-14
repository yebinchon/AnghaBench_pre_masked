
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tlbsize; scalar_t__ tlbsizeftlbsets; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

void FUNC_17(unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6, VAR_7;

 FUNC_6(VAR_7);
 VAR_6 = (VAR_5 - VAR_4 + (VAR_2 - 1)) >> VAR_1;
 VAR_6 = (VAR_6 + 1) >> 1;
 if (VAR_6 <= (VAR_3.tlbsizeftlbsets ?
       VAR_3.tlbsize / 8 :
       VAR_3.tlbsize / 2)) {
  int VAR_8 = FUNC_8();

  VAR_4 &= (VAR_0 << 1);
  VAR_5 += ((VAR_2 << 1) - 1);
  VAR_5 &= (VAR_0 << 1);
  FUNC_3();

  while (VAR_4 < VAR_5) {
   int VAR_9;

   FUNC_14(VAR_4);
   VAR_4 += (VAR_2 << 1);
   FUNC_7();
   FUNC_10();
   FUNC_11();
   VAR_9 = FUNC_9();
   FUNC_15(0);
   FUNC_16(0);
   if (VAR_9 < 0)
    continue;

   FUNC_14(FUNC_0(VAR_9));
   FUNC_7();
   FUNC_12();
  }
  FUNC_13();
  FUNC_14(VAR_8);
  FUNC_2();
 } else {
  FUNC_4();
 }
 FUNC_1();
 FUNC_5(VAR_7);
}
