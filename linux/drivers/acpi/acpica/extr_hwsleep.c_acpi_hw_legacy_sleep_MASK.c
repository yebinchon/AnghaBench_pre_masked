
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_bit_register_info {int access_bit_mask; int bit_position; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 struct acpi_bit_register_info* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ,int*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 int VAR_14 ;
 int FUNC_15 (scalar_t__) ;

acpi_status FUNC_16(u8 VAR_15)
{
 struct acpi_bit_register_info *VAR_16;
 struct acpi_bit_register_info *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 acpi_status VAR_21;

 FUNC_3(VAR_14);

 VAR_16 =
     FUNC_7(VAR_1);
 VAR_17 =
     FUNC_7(VAR_0);



 VAR_21 = FUNC_14(VAR_2,
      VAR_3);
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }


 VAR_21 = FUNC_5();
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }
 VAR_21 = FUNC_4();
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }
 VAR_13 = VAR_10;


 VAR_21 = FUNC_6();
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }



 VAR_21 = FUNC_8(VAR_5,
           &VAR_18);
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }
 FUNC_0((VAR_4,
     "Entering sleep state [S%u]\n", VAR_15));



 VAR_18 &= ~(VAR_16->access_bit_mask |
     VAR_17->access_bit_mask);
 VAR_19 = VAR_18;



 VAR_18 |=
     (VAR_11 << VAR_16->bit_position);
 VAR_19 |=
     (VAR_12 << VAR_16->bit_position);
 VAR_21 = FUNC_10(VAR_18, VAR_19);
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }



 VAR_18 |= VAR_17->access_bit_mask;
 VAR_19 |= VAR_17->access_bit_mask;



 FUNC_2();

 VAR_21 = FUNC_11(VAR_15, VAR_18, VAR_19);
 if (VAR_21 == VAR_8) {
  FUNC_15(VAR_9);
 }
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }



 VAR_21 = FUNC_10(VAR_18, VAR_19);
 if (FUNC_1(VAR_21)) {
  FUNC_15(VAR_21);
 }

 if (VAR_15 > VAR_6) {
  FUNC_12(10 * VAR_7);

  VAR_21 = FUNC_9(VAR_5,
      VAR_17->
      access_bit_mask);
  if (FUNC_1(VAR_21)) {
   FUNC_15(VAR_21);
  }
 }



 do {
  VAR_21 =
      FUNC_13(VAR_2, &VAR_20);
  if (FUNC_1(VAR_21)) {
   FUNC_15(VAR_21);
  }

 } while (!VAR_20);

 FUNC_15(VAR_9);
}
