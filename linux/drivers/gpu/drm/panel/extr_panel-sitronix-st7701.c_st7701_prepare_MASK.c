
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st7701 {int reset; int supplies; TYPE_1__* desc; } ;
struct drm_panel {int dummy; } ;
struct TYPE_2__ {int num_supplies; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 struct st7701* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct st7701*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_0)
{
 struct st7701 *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_0(VAR_1->reset, 0);

 VAR_2 = FUNC_3(VAR_1->desc->num_supplies,
        VAR_1->supplies);
 if (VAR_2 < 0)
  return VAR_2;
 FUNC_1(20);

 FUNC_0(VAR_1->reset, 1);
 FUNC_1(150);

 FUNC_4(VAR_1);

 return 0;
}
