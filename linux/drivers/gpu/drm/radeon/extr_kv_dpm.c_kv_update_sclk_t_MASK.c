
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
struct kv_power_info {int sram_end; scalar_t__ dpm_table_start; int low_sclk_interrupt_t; scalar_t__ caps_sclk_throttle_low_notification; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,int *,int,int ) ;
 struct kv_power_info* FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_2)
{
 struct kv_power_info *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = 0;
 int VAR_5 = 0;

 if (VAR_3->caps_sclk_throttle_low_notification) {
  VAR_4 = FUNC_0(VAR_3->low_sclk_interrupt_t);

  VAR_5 = FUNC_1(VAR_2,
        VAR_3->dpm_table_start +
        FUNC_3(VAR_1, VAR_0),
        (u8 *)&VAR_4,
        sizeof(u32), VAR_3->sram_end);
 }
 return VAR_5;
}
