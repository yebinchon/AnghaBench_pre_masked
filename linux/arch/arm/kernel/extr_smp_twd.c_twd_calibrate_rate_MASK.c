
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 unsigned long FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
 unsigned long VAR_5;
 u64 VAR_6;





 if (VAR_4 == 0) {
  FUNC_2("Calibrating local timer... ");


  VAR_6 = FUNC_0() + 1;

  while (FUNC_0() < VAR_6)
   FUNC_4(10);


  VAR_6 += 5;


  FUNC_5(0x1, VAR_3 + VAR_1);


  FUNC_5(0xFFFFFFFFU, VAR_3 + VAR_2);

  while (FUNC_0() < VAR_6)
   FUNC_4(10);

  VAR_5 = FUNC_3(VAR_3 + VAR_2);

  VAR_4 = (0xFFFFFFFFU - VAR_5) * (VAR_0 / 5);

  FUNC_1("%lu.%02luMHz.\n", VAR_4 / 1000000,
   (VAR_4 / 10000) % 100);
 }
}
