
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {int zorder_prop; int dispc; TYPE_1__* dispc_ops; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;
struct TYPE_2__ {unsigned int (* get_num_ovls ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ,char*,int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1)
{
 struct omap_drm_private *VAR_2 = VAR_1->dev_private;
 unsigned int VAR_3 = VAR_2->dispc_ops->get_num_ovls(VAR_2->dispc);

 VAR_2->zorder_prop = FUNC_0(VAR_1, 0, "zorder", 0,
            VAR_3 - 1);
 if (!VAR_2->zorder_prop)
  return -VAR_0;

 return 0;
}
