
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct kv_power_info {int sram_end; void* fps_low_t; scalar_t__ dpm_table_start; void* fps_high_t; scalar_t__ caps_fps; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int *,int,int ) ;
 void* FUNC_1 (int) ;
 struct kv_power_info* FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_3)
{
 struct kv_power_info *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;

 if (VAR_4->caps_fps) {
  u16 VAR_6;

  VAR_6 = 45;
  VAR_4->fps_high_t = FUNC_1(VAR_6);
  VAR_5 = FUNC_0(VAR_3,
        VAR_4->dpm_table_start +
        FUNC_3(VAR_2, VAR_0),
        (u8 *)&VAR_4->fps_high_t,
        sizeof(u16), VAR_4->sram_end);

  VAR_6 = 30;
  VAR_4->fps_low_t = FUNC_1(VAR_6);

  VAR_5 = FUNC_0(VAR_3,
        VAR_4->dpm_table_start +
        FUNC_3(VAR_2, VAR_1),
        (u8 *)&VAR_4->fps_low_t,
        sizeof(u16), VAR_4->sram_end);

 }
 return VAR_5;
}
