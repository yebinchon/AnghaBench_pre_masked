
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct igp_ps {scalar_t__ sclk_high; scalar_t__ sclk_low; } ;


 int FUNC_0 (struct radeon_device*,int) ;
 struct igp_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
           struct radeon_ps *VAR_1,
           struct radeon_ps *VAR_2)
{
 struct igp_ps *VAR_3 = FUNC_1(VAR_1);
 struct igp_ps *VAR_4 = FUNC_1(VAR_2);

 if ((VAR_3->sclk_high == VAR_4->sclk_high) &&
     (VAR_3->sclk_low == VAR_4->sclk_low))
  return;

 if (VAR_3->sclk_high == VAR_3->sclk_low)
  return;

 FUNC_0(VAR_0, 1);
}
