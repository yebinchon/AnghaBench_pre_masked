
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct radeon_device {int dummy; } ;
struct kv_power_info {void* soft_regs_start; int sram_end; void* dpm_table_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kv_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,void**,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_4)
{
 struct kv_power_info *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_1 +
         FUNC_2(VAR_2, VAR_0),
         &VAR_6, VAR_5->sram_end);

 if (VAR_7 == 0)
  VAR_5->dpm_table_start = VAR_6;

 VAR_7 = FUNC_1(VAR_4, VAR_1 +
         FUNC_2(VAR_2, VAR_3),
         &VAR_6, VAR_5->sram_end);

 if (VAR_7 == 0)
  VAR_5->soft_regs_start = VAR_6;

 return VAR_7;
}
