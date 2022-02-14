
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ count; TYPE_1__* entries; } ;
struct si_power_info {TYPE_2__ leakage_voltage; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ leakage_index; scalar_t__ voltage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__*,scalar_t__) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2)
{
 struct si_power_info *VAR_3 = FUNC_1(VAR_2);
 u16 VAR_4, VAR_5 = 0;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = FUNC_0(VAR_2, &VAR_4, VAR_0 + VAR_6);

  if (!VAR_7 && (VAR_4 > 0) && (VAR_4 != (VAR_0 + VAR_6))) {
   VAR_3->leakage_voltage.entries[VAR_5].voltage = VAR_4;
   VAR_3->leakage_voltage.entries[VAR_5].leakage_index =
    VAR_0 + VAR_6;
   VAR_5++;
  }
 }
 VAR_3->leakage_voltage.count = VAR_5;
}
