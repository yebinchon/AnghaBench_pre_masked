
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_simple {int prepared; TYPE_2__* desc; scalar_t__ no_hpd; int enable_gpio; int supply; } ;
struct drm_panel {int dev; } ;
struct TYPE_3__ {unsigned int prepare; scalar_t__ hpd_absent_delay; } ;
struct TYPE_4__ {TYPE_1__ delay; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 struct panel_simple* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_0)
{
 struct panel_simple *VAR_1 = FUNC_4(VAR_0);
 unsigned int VAR_2;
 int VAR_3;

 if (VAR_1->prepared)
  return 0;

 VAR_3 = FUNC_3(VAR_1->supply);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0->dev, "failed to enable supply: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_1(VAR_1->enable_gpio, 1);

 VAR_2 = VAR_1->desc->delay.prepare;
 if (VAR_1->no_hpd)
  VAR_2 += VAR_1->desc->delay.hpd_absent_delay;
 if (VAR_2)
  FUNC_2(VAR_2);

 VAR_1->prepared = 1;

 return 0;
}
