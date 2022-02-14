
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ base; struct drm_device* dev; } ;
struct TYPE_8__ {int * cbs; } ;
struct radeon_connector {TYPE_2__ base; TYPE_3__* ddc_bus; TYPE_4__ mst_mgr; } ;
struct drm_device {int dummy; } ;
struct TYPE_7__ {int aux; int has_aux; } ;


 int FUNC_0 (TYPE_4__*,struct drm_device*,int *,int,int,int ) ;
 int VAR_0 ;

int
FUNC_1(struct radeon_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;

 if (!VAR_1->ddc_bus->has_aux)
  return 0;

 VAR_1->mst_mgr.cbs = &VAR_0;
 return FUNC_0(&VAR_1->mst_mgr, VAR_2,
         &VAR_1->ddc_bus->aux, 16, 6,
         VAR_1->base.base.id);
}
