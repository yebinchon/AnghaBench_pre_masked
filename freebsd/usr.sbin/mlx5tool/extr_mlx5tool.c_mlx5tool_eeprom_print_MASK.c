
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mlx5_eeprom_get {size_t eeprom_info_out_len; scalar_t__ eeprom_info_buf; scalar_t__ eeprom_info_page_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct mlx5_eeprom_get *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 size_t VAR_6;

 VAR_6 = 0;
 VAR_4 = 16;

 FUNC_0("\nOffset\t\tValues\n");
 FUNC_0("------\t\t------");
 while (VAR_6 < VAR_2->eeprom_info_out_len) {
  FUNC_0("\n0x%04zX\t\t", VAR_6);
  for (VAR_3 = 0; VAR_3 < VAR_4;
      VAR_3++) {
   FUNC_0("%02X ",
       ((uint8_t *)VAR_2->eeprom_info_buf)[
       VAR_6]);
   VAR_6++;
  }
 }

 if (VAR_2->eeprom_info_page_valid) {
  VAR_5 = VAR_0;
  FUNC_0("\n\nUpper Page 0x03\n");
  FUNC_0("\nOffset\t\tValues\n");
  FUNC_0("------\t\t------");
  for (VAR_5 = VAR_0;
      VAR_5 < VAR_1;) {
   FUNC_0("\n0x%04X\t\t", VAR_5);
   for (VAR_3 = 0;
        VAR_3 < VAR_4;
        VAR_3++) {
    FUNC_0("%02X ",
        ((uint8_t *)VAR_2->
        eeprom_info_buf)[VAR_6]);
    VAR_6++;
    VAR_5++;
   }
  }
 }
 FUNC_0("\n");
}
