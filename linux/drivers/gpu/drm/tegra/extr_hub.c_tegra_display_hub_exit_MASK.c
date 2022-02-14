
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_drm {TYPE_1__* hub; } ;
struct host1x_client {int parent; } ;
struct drm_device {struct tegra_drm* dev_private; } ;
struct TYPE_2__ {int base; } ;


 struct drm_device* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct host1x_client *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(VAR_0->parent);
 struct tegra_drm *VAR_2 = VAR_1->dev_private;

 FUNC_1(&VAR_2->hub->base);
 VAR_2->hub = ((void*)0);

 return 0;
}
