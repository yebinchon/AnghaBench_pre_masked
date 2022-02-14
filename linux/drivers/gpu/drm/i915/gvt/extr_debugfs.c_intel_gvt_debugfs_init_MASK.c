
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_tracked_mmio; } ;
struct intel_gvt {TYPE_3__ mmio; int debugfs_root; TYPE_2__* dev_priv; } ;
struct drm_minor {int debugfs_root; } ;
struct TYPE_4__ {struct drm_minor* primary; } ;
struct TYPE_5__ {TYPE_1__ drm; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,int *) ;

void FUNC_2(struct intel_gvt *VAR_0)
{
 struct drm_minor *VAR_1 = VAR_0->dev_priv->drm.primary;

 VAR_0->debugfs_root = FUNC_0("gvt", VAR_1->debugfs_root);

 FUNC_1("num_tracked_mmio", 0444, VAR_0->debugfs_root,
        &VAR_0->mmio.num_tracked_mmio);
}
