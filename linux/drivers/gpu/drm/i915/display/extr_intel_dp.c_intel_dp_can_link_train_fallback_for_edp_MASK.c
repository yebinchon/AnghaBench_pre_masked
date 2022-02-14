
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct intel_dp {TYPE_2__* attached_connector; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_3__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_4__ {TYPE_1__ panel; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static bool FUNC_2(struct intel_dp *VAR_0,
           int VAR_1,
           u8 VAR_2)
{
 const struct drm_display_mode *VAR_3 =
  VAR_0->attached_connector->panel.fixed_mode;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_3->clock, 18);
 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 > VAR_5)
  return 0;

 return 1;
}
