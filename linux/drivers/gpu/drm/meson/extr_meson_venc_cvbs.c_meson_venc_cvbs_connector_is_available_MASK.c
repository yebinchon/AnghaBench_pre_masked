
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_drm {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 struct device_node* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct device_node*) ;

__attribute__((used)) static bool FUNC_2(struct meson_drm *VAR_0)
{
 struct device_node *VAR_1;

 VAR_1 = FUNC_0(VAR_0->dev->of_node, 0, 0);
 if (!VAR_1)
  return 0;

 FUNC_1(VAR_1);
 return 1;
}
