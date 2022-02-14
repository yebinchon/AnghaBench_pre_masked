
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_simple {int prepared; TYPE_2__* desc; int supply; int enable_gpio; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {scalar_t__ unprepare; } ;
struct TYPE_4__ {TYPE_1__ delay; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 struct panel_simple* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct panel_simple *VAR_1 = FUNC_3(VAR_0);

 if (!VAR_1->prepared)
  return 0;

 FUNC_0(VAR_1->enable_gpio, 0);

 FUNC_2(VAR_1->supply);

 if (VAR_1->desc->delay.unprepare)
  FUNC_1(VAR_1->desc->delay.unprepare);

 VAR_1->prepared = 0;

 return 0;
}
