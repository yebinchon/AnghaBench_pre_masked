
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_0)
{
 u64 VAR_1, VAR_2, VAR_3 = VAR_0;
 int VAR_4;

 FUNC_0();
 VAR_4 = FUNC_4();
 VAR_1 = FUNC_2();
 for (;;) {
  VAR_2 = FUNC_2();
  if ((VAR_2 - VAR_1) >= VAR_3)
   break;


  FUNC_1();
  FUNC_3();
  FUNC_0();
  if (FUNC_5(VAR_4 != FUNC_4())) {
   VAR_3 -= (VAR_2 - VAR_1);
   VAR_4 = FUNC_4();
   VAR_1 = FUNC_2();
  }
 }
 FUNC_1();
}
