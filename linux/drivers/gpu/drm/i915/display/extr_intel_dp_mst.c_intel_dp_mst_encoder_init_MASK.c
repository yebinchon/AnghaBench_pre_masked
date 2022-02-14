
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * cbs; } ;
struct intel_dp {int can_mst; int aux; TYPE_3__ mst_mgr; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; struct intel_dp dp; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (TYPE_3__*,struct drm_device*,int *,int,int,int) ;
 int FUNC_1 (struct intel_digital_port*) ;
 int VAR_0 ;

int
FUNC_2(struct intel_digital_port *VAR_1, int VAR_2)
{
 struct intel_dp *VAR_3 = &VAR_1->dp;
 struct drm_device *VAR_4 = VAR_1->base.base.dev;
 int VAR_5;

 VAR_3->can_mst = 1;
 VAR_3->mst_mgr.cbs = &VAR_0;


 FUNC_1(VAR_1);
 VAR_5 = FUNC_0(&VAR_3->mst_mgr, VAR_4,
        &VAR_3->aux, 16, 3, VAR_2);
 if (VAR_5) {
  VAR_3->can_mst = 0;
  return VAR_5;
 }
 return 0;
}
