
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_mode_config {int connector_free_work; int connector_free_list; int connector_list_lock; } ;
struct TYPE_5__ {int refcount; } ;
struct TYPE_6__ {TYPE_2__ refcount; } ;
struct drm_connector {int free_node; TYPE_3__ base; TYPE_1__* dev; } ;
struct TYPE_4__ {struct drm_mode_config mode_config; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct drm_connector *VAR_0)
{
 struct drm_mode_config *VAR_1 = &VAR_0->dev->mode_config;

 FUNC_1(&VAR_1->connector_list_lock);

 if (!FUNC_2(&VAR_0->base.refcount.refcount))
  return;

 FUNC_0(&VAR_0->free_node, &VAR_1->connector_free_list);
 FUNC_3(&VAR_1->connector_free_work);
}
