
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmcu_iram_parameters {int backlight_ramping_start; int backlight_ramping_reduction; int backlight_lut_array_size; unsigned int* backlight_lut_array; scalar_t__ set; } ;
struct dmcu {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct amdgpu_device {scalar_t__ asic_type; int ddev; TYPE_3__ dm; } ;
struct TYPE_5__ {TYPE_1__* res_pool; } ;
struct TYPE_4__ {struct dmcu* dmcu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dmcu*,struct dmcu_iram_parameters) ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;

 struct dmcu_iram_parameters VAR_4;
 unsigned int VAR_5[16];
 int VAR_6;
 struct dmcu *VAR_7 = VAR_3->dm.dc->res_pool->dmcu;
 bool VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  VAR_5[VAR_6] = 0xFFFF * VAR_6 / 15;

 VAR_4.set = 0;
 VAR_4.backlight_ramping_start = 0xCCCC;
 VAR_4.backlight_ramping_reduction = 0xCCCCCCCC;
 VAR_4.backlight_lut_array_size = 16;
 VAR_4.backlight_lut_array = VAR_5;


 if (VAR_3->asic_type <= VAR_0) {
  VAR_8 = FUNC_1(VAR_7, VAR_4);

  if (!VAR_8)
   return -VAR_1;
 }

 return FUNC_0(VAR_3->ddev);
}
