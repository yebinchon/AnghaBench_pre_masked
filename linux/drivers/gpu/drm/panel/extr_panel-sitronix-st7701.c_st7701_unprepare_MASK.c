
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st7701 {int supplies; TYPE_1__* desc; int sleep_delay; int reset; } ;
struct drm_panel {int dummy; } ;
struct TYPE_2__ {int num_supplies; } ;


 int VAR_0 ;
 int FUNC_0 (struct st7701*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct st7701* FUNC_3 (struct drm_panel*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_1)
{
 struct st7701 *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2, VAR_0, 0x00);

 FUNC_2(VAR_2->sleep_delay);

 FUNC_1(VAR_2->reset, 0);
 FUNC_2(VAR_2->sleep_delay);

 FUNC_4(VAR_2->desc->num_supplies, VAR_2->supplies);

 return 0;
}
