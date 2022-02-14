
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lb035q02_device {int enable_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct lb035q02_device* FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_0)
{
 struct lb035q02_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->enable_gpio, 1);

 return 0;
}
