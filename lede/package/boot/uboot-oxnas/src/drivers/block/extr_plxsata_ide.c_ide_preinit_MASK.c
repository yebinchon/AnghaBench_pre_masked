
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ,int) ;
 unsigned long** VAR_17 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 () ;

int FUNC_11(void)
{
 int VAR_18 = 0;


 int VAR_19;
 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {
  VAR_16[VAR_19] = 1;
 }


 FUNC_4(VAR_12, 1);
 FUNC_4(VAR_13, 1);
 FUNC_4(VAR_14, 1);
 FUNC_4(VAR_15, 1);


 FUNC_0(VAR_11);
 FUNC_0(VAR_10);

 FUNC_7(5000);
 FUNC_4(VAR_14, 0);
 FUNC_7(50);
 FUNC_4(VAR_12, 0);
 FUNC_4(VAR_13, 0);
 FUNC_7(50);
 FUNC_4(VAR_15, 0);
 FUNC_7(100);

 FUNC_10();
 FUNC_7(10000);


 *((unsigned long*) VAR_4 + VAR_6) =
  ~0UL;
 *((unsigned long*) VAR_4 + VAR_5) = ~0UL;

 int VAR_20;
 for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++) {
  int VAR_21 = 0;
  int VAR_22 = 1;


  *(VAR_17[VAR_20] + VAR_6) = ~0UL;


  *(VAR_17[VAR_20] + VAR_5) = ~0UL;

  do {

   FUNC_1(VAR_20, VAR_0, 0);


   if (!FUNC_2(VAR_20)) {
    FUNC_3("SATA PHY not ready for device %d\n",
     VAR_20);
    break;
   }

   if (!FUNC_8(VAR_20)) {
    FUNC_3("No FIS received from device %d\n",
     VAR_20);
   } else {
    if ((FUNC_5(VAR_20, VAR_8) & 0xf)
     == 0x3) {
     if (FUNC_9(VAR_20, 30)) {
      FUNC_3("Timed out of wait for SATA device %d to have BUSY clear\n",
       VAR_20);
     } else {
      ++VAR_18;
      VAR_21 = 1;
     }
    } else {
     FUNC_3("No SATA device %d found, PHY status = 0x%08x\n",
      VAR_20,
      FUNC_5(
       VAR_20,
       VAR_8));
    }
    break;
   }
  } while (VAR_22--);


  VAR_16[VAR_20] = VAR_21;
 }


 for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++) {
  if (VAR_16[VAR_20]) {

   *(VAR_17[VAR_20] + VAR_3) =
    0UL;


   FUNC_6(VAR_20, VAR_7, ~0);


   *(VAR_17[VAR_20] + VAR_2) |=
    VAR_9;



   *(VAR_17[VAR_20] + VAR_5) = ~0UL;
  }
 }

 return !VAR_18;
}
