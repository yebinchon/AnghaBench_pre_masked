
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int pwm; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct drm_connector_state {int connector; } ;
struct TYPE_4__ {struct intel_panel panel; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct drm_connector_state *VAR_1, u32 VAR_2)
{
 struct intel_panel *VAR_3 = &FUNC_2(VAR_1->connector)->panel;
 int VAR_4 = FUNC_0(VAR_2 * VAR_0, 100);

 FUNC_1(VAR_3->backlight.pwm, VAR_4, VAR_0);
}
