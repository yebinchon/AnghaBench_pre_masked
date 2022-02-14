
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int (*) ()) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 scalar_t__* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(void)
{
 acpi_status VAR_28;

 FUNC_2(FUNC_10);



 VAR_14 = ((void*)0);
 VAR_17 = ((void*)0);
 VAR_20 = VAR_10;

 VAR_16 = VAR_3;
 VAR_15 = VAR_4 | VAR_2;
 VAR_19 = VAR_0;

 VAR_18 = VAR_10;

 VAR_14 = FUNC_3(VAR_1);
 if (!VAR_14) {
  FUNC_9(VAR_6);
 }
 FUNC_8(VAR_14, 0, VAR_1);



 VAR_21[0] = VAR_8;
 VAR_21[1] = 0;
 VAR_22 = VAR_27;



 VAR_23 = VAR_10;






 if (VAR_26 & VAR_9) {



  VAR_28 = FUNC_6();
  if (FUNC_1(VAR_28)) {
   FUNC_7("Could not get debugger mutex\n");
   FUNC_9(VAR_28);
  }



  VAR_25 = VAR_10;
  VAR_28 = FUNC_4(VAR_11,
      VAR_13, ((void*)0));
  if (FUNC_1(VAR_28)) {
   FUNC_0((VAR_5, VAR_28,
     "Could not start debugger thread"));
   VAR_25 = VAR_12;
   FUNC_9(VAR_28);
  }
 } else {
  VAR_24 = FUNC_5();
 }

 FUNC_9(VAR_7);
}
