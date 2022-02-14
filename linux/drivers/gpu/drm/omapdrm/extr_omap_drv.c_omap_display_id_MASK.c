
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_dss_device {TYPE_2__* panel; struct drm_bridge* bridge; TYPE_3__* dev; scalar_t__ next; } ;
struct drm_bridge {struct device_node* of_node; struct drm_bridge* next; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct omap_dss_device*) ;
 struct omap_dss_device* FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_3(struct omap_dss_device *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);

 if (VAR_1->next) {
  struct omap_dss_device *VAR_3;

  VAR_3 = FUNC_2(VAR_1);
  VAR_2 = VAR_3->dev->of_node;
  FUNC_1(VAR_3);
 } else if (VAR_1->bridge) {
  struct drm_bridge *VAR_4 = VAR_1->bridge;

  while (VAR_4->next)
   VAR_4 = VAR_4->next;

  VAR_2 = VAR_4->of_node;
 } else if (VAR_1->panel) {
  VAR_2 = VAR_1->panel->dev->of_node;
 }

 return VAR_2 ? FUNC_0(VAR_2, "display") : -VAR_0;
}
