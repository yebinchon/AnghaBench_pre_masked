
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

void FUNC_7(u8 VAR_7)
{
 unsigned long VAR_8 = VAR_6 + FUNC_1(100);
 u32 VAR_9;

 if (VAR_7) {



  VAR_9 = FUNC_2(VAR_0);

  VAR_9 &= ~(VAR_5 | VAR_3 | VAR_1);
  VAR_9 |= VAR_4;

  FUNC_3(VAR_9, VAR_0);

  FUNC_5("Waiting for PHY clock good...\n");
  while (!(FUNC_2(VAR_0)
    & VAR_2)) {
   FUNC_0();

   if (FUNC_6(VAR_6, VAR_8)) {
    FUNC_4("musb PHY clock good timed out\n");
    break;
   }
  }
 } else {



  VAR_9 = FUNC_2(VAR_0);

  VAR_9 &= ~VAR_4;
  VAR_9 |= VAR_3 | VAR_1;
  FUNC_3(VAR_9, VAR_0);
 }
}
