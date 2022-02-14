
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_panel {int prepared; int supplies; int num_supplies; scalar_t__ reset; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int ) ;
 struct rad_panel* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct rad_panel *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (!VAR_1->prepared)
  return 0;






 if (VAR_1->reset) {
  FUNC_0(VAR_1->reset, 1);
  FUNC_3(15000, 17000);
  FUNC_0(VAR_1->reset, 0);
 }

 VAR_2 = FUNC_1(VAR_1->num_supplies, VAR_1->supplies);
 if (VAR_2)
  return VAR_2;

 VAR_1->prepared = 0;

 return 0;
}
