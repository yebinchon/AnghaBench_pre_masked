
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;
 int VAR_3 ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(void)
{
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = VAR_6;
 unsigned short VAR_10;

 if (VAR_4)
  FUNC_4();

 FUNC_12(VAR_2);


 VAR_10 = VAR_5 == VAR_1 ? 0x1234 : 0;
 *((unsigned short *)FUNC_0(0x472)) = VAR_10;





 if (FUNC_2(((void*)0))) {
  FUNC_11("EFI capsule is pending, forcing EFI reboot.\n");
  VAR_6 = 130;
 }

 for (;;) {

  switch (VAR_6) {
  case 134:
   FUNC_1();
   VAR_6 = 129;
   break;

  case 129:
   FUNC_8();

   for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
    FUNC_7();
    FUNC_13(50);
    FUNC_10(0xfe, 0x64);
    FUNC_13(50);
   }
   if (VAR_8 == 0 && VAR_9 == 134) {
    VAR_8 = 1;
    VAR_6 = 134;
   } else {
    VAR_6 = 130;
   }
   break;

  case 130:
   FUNC_3(VAR_5, ((void*)0));
   VAR_6 = 133;
   break;

  case 133:
   FUNC_9(VAR_0);


   VAR_6 = 131;
   break;

  case 132:
   VAR_3 = 1;


  case 131:
   if (VAR_3) {
    u8 VAR_11 = VAR_5 == VAR_1 ? 0x06 : 0x0E;
    u8 VAR_12 = FUNC_6(0xcf9) & ~VAR_11;
    FUNC_10(VAR_12|2, 0xcf9);
    FUNC_13(50);

    FUNC_10(VAR_12|VAR_11, 0xcf9);
    FUNC_13(50);
   }
   VAR_6 = 128;
   break;

  case 128:
   FUNC_5(((void*)0));
   __asm__ __volatile__("int3");


   VAR_6 = 129;
   break;
  }
 }
}
