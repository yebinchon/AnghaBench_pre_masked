
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otm8009a {int enabled; int bl_dev; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 struct otm8009a* FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_0)
{
 struct otm8009a *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->enabled)
  return 0;

 FUNC_0(VAR_1->bl_dev);

 VAR_1->enabled = 1;

 return 0;
}
