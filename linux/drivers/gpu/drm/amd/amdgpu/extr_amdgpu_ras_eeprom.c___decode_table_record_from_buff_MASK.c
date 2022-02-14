
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeprom_table_record {unsigned char err_type; unsigned char bank; int ts; int offset; unsigned char mem_channel; unsigned char mcumc_id; int retired_page; } ;
struct amdgpu_ras_eeprom_control {int dummy; } ;
typedef int __le64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ras_eeprom_control *VAR_0,
         struct eeprom_table_record *VAR_1,
         unsigned char *VAR_2)
{
 __le64 VAR_3 = 0;
 int VAR_4 = 0;


 VAR_1->err_type = VAR_2[VAR_4++];

 VAR_1->bank = VAR_2[VAR_4++];

 FUNC_1(&VAR_3, VAR_2 + VAR_4, 8);
 VAR_1->ts = FUNC_0(VAR_3);
 VAR_4 += 8;

 FUNC_1(&VAR_3, VAR_2 + VAR_4, 6);
 VAR_1->offset = (FUNC_0(VAR_3) & 0xffffffffffff);
 VAR_4 += 6;

 VAR_2[VAR_4++] = VAR_1->mem_channel;
 VAR_2[VAR_4++] = VAR_1->mcumc_id;

 FUNC_1(&VAR_3, VAR_2 + VAR_4, 6);
 VAR_1->retired_page = (FUNC_0(VAR_3) & 0xffffffffffff);
}
