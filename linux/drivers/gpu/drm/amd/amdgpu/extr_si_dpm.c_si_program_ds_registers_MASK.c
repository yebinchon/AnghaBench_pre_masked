
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct evergreen_power_info {scalar_t__ sclk_deep_sleep; } ;
struct amdgpu_device {scalar_t__ asic_type; int rev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 struct evergreen_power_info* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_5)
{
 struct evergreen_power_info *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;


 if (VAR_5->asic_type == VAR_2 && VAR_5->rev_id == 0x0)
  VAR_7 = 0x10;
 else
  VAR_7 = 0x1;

 if (VAR_6->sclk_deep_sleep) {
  FUNC_1(VAR_4, FUNC_0(VAR_7), ~VAR_3);
  FUNC_1(VAR_1, VAR_0,
    ~VAR_0);
 }
}
