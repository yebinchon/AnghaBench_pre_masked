
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct acpi_generic_address {int space_id; int bit_width; scalar_t__ access_width; scalar_t__ bit_offset; int address; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct acpi_generic_address *VAR_2,
        u8 VAR_3,
        u8 VAR_4,
        u64 VAR_5, const char *VAR_6, u8 VAR_7)
{
 u8 VAR_8;





 VAR_8 = (u8)(VAR_4 * 8);
 if (VAR_4 > 31) {





  if (!(VAR_7 & VAR_0)) {
   FUNC_0((VAR_1,
        "%s - 32-bit FADT register is too long (%u bytes, %u bits) "
        "to convert to GAS struct - 255 bits max, truncating",
        VAR_6, VAR_4,
        (VAR_4 * 8)));
  }

  VAR_8 = 255;
 }





 FUNC_1(&VAR_2->address, &VAR_5);



 VAR_2->space_id = VAR_3;
 VAR_2->bit_width = VAR_8;
 VAR_2->bit_offset = 0;
 VAR_2->access_width = 0;
}
