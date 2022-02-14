
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int current_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct igp_ps {scalar_t__ sclk_low; scalar_t__ sclk_high; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 struct igp_ps* FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_7, u32 VAR_8)
{
 struct igp_ps *VAR_9 = FUNC_3(VAR_7->pm.dpm.current_ps);

 if (VAR_9->sclk_low == VAR_9->sclk_high)
  return;

 FUNC_2(VAR_4, VAR_5, ~VAR_5);

 FUNC_2(VAR_3, FUNC_0(VAR_8),
   ~VAR_0);
 FUNC_2(VAR_2, FUNC_1(VAR_8),
   ~VAR_6);
 FUNC_2(VAR_2, VAR_1, ~VAR_1);

 FUNC_4(100);

 FUNC_2(VAR_4, 0, ~VAR_5);
}
