
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct eeprom_table_record {int dummy; } ;
struct amdgpu_ras_eeprom_control {int dummy; } ;


 scalar_t__ FUNC_0 (struct amdgpu_ras_eeprom_control*) ;
 scalar_t__ FUNC_1 (struct eeprom_table_record*,int) ;

__attribute__((used)) static inline uint32_t FUNC_2(struct amdgpu_ras_eeprom_control *VAR_0,
      struct eeprom_table_record *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0) + FUNC_1(VAR_1, VAR_2);
}
