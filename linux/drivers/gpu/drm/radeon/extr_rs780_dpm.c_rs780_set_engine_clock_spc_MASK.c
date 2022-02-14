
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct igp_ps {scalar_t__ sclk_high; scalar_t__ sclk_low; } ;
struct igp_power_info {scalar_t__ crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct igp_power_info* FUNC_1 (struct radeon_device*) ;
 struct igp_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2,
           struct radeon_ps *VAR_3,
           struct radeon_ps *VAR_4)
{
 struct igp_ps *VAR_5 = FUNC_2(VAR_3);
 struct igp_ps *VAR_6 = FUNC_2(VAR_4);
 struct igp_power_info *VAR_7 = FUNC_1(VAR_2);

 if ((VAR_5->sclk_high == VAR_6->sclk_high) &&
     (VAR_5->sclk_low == VAR_6->sclk_low))
  return;

 if (VAR_7->crtc_id == 0)
  FUNC_0(VAR_0, 0, ~VAR_1);
 else
  FUNC_0(VAR_0, VAR_1, ~VAR_1);

}
