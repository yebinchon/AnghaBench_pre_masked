
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;
struct eeprom_table_record {int dummy; } ;



__attribute__((used)) static uint32_t FUNC_0(struct eeprom_table_record *VAR_0,
          int VAR_1)
{
 int VAR_2, VAR_3;
 uint32_t VAR_4 = 0;


 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct eeprom_table_record *VAR_5 = &VAR_0[VAR_2];

  for (VAR_3 = 0; VAR_3 < sizeof(*VAR_5); VAR_3++) {
   VAR_4 += *(((unsigned char *)VAR_5) + VAR_3);
  }
 }

 return VAR_4;
}
