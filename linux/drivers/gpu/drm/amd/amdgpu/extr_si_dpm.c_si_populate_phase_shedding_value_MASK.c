
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct amdgpu_phase_shedding_limits_table {unsigned int count; TYPE_1__* entries; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ phase_settings; } ;
struct TYPE_4__ {scalar_t__ voltage; scalar_t__ sclk; scalar_t__ mclk; } ;
typedef TYPE_2__ SISLANDS_SMC_VOLTAGE_VALUE ;



__attribute__((used)) static int FUNC_0(struct amdgpu_device *VAR_0,
         const struct amdgpu_phase_shedding_limits_table *VAR_1,
         u16 VAR_2, u32 VAR_3, u32 VAR_4,
         SISLANDS_SMC_VOLTAGE_VALUE *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->count; VAR_6++) {
  if ((VAR_2 <= VAR_1->entries[VAR_6].voltage) &&
      (VAR_3 <= VAR_1->entries[VAR_6].sclk) &&
      (VAR_4 <= VAR_1->entries[VAR_6].mclk))
   break;
 }

 VAR_5->phase_settings = (u8)VAR_6;

 return 0;
}
