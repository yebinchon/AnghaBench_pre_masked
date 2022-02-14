
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_bit_register_info {int access_bit_mask; int bit_position; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int*,int*) ;
 struct acpi_bit_register_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int,int) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;

acpi_status FUNC_7(u8 VAR_7)
{
 acpi_status VAR_8;
 struct acpi_bit_register_info *VAR_9;
 struct acpi_bit_register_info *VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 FUNC_0(VAR_6);






 VAR_8 = FUNC_2(VAR_3,
       &VAR_4,
       &VAR_5);
 if (FUNC_1(VAR_8)) {
  VAR_9 =
      FUNC_3(VAR_1);
  VAR_10 =
      FUNC_3(VAR_0);



  VAR_8 = FUNC_4(VAR_2,
            &VAR_11);
  if (FUNC_1(VAR_8)) {



   VAR_11 &= ~(VAR_9->access_bit_mask |
       VAR_10->
       access_bit_mask);
   VAR_12 = VAR_11;



   VAR_11 |= (VAR_4 <<
      VAR_9->bit_position);
   VAR_12 |= (VAR_5 <<
      VAR_9->bit_position);



   (void)FUNC_5(VAR_11,
       VAR_12);
  }
 }

 FUNC_6(VAR_8);
}
