
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long bits; unsigned long* stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 size_t FUNC_6 () ;
 unsigned long FUNC_7 (unsigned long*,int ) ;

void FUNC_8(void)
{
 unsigned long *VAR_5 = &VAR_4[FUNC_6()].bits;
 unsigned long *VAR_6 = VAR_4[FUNC_6()].stats;

 FUNC_1();

 while (1) {
  unsigned long VAR_7;


  FUNC_4();

  VAR_7 = FUNC_7(VAR_5, 0);
  if (VAR_7 == 0)
   return;

  if (VAR_7 & (1 << VAR_3)) {
   VAR_6[VAR_3]++;
   FUNC_5();
  }

  if (VAR_7 & (1 << VAR_0)) {
   VAR_6[VAR_0]++;
   FUNC_2();
  }

  if (VAR_7 & (1 << VAR_1)) {
   VAR_6[VAR_1]++;
   FUNC_3();
  }

  FUNC_0((VAR_7 >> VAR_2) != 0);


  FUNC_4();
 }
}
