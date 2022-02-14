
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_8__ {int kdev; struct drm_device* dev; } ;
struct TYPE_7__ {int hpd; } ;
struct radeon_connector {TYPE_4__* ddc_bus; TYPE_3__ base; TYPE_2__ hpd; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_10__ {void* transfer; int dev; } ;
struct TYPE_6__ {int hpd; } ;
struct TYPE_9__ {int has_aux; TYPE_5__ aux; TYPE_1__ rec; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

void FUNC_3(struct radeon_connector *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 int VAR_6;

 VAR_3->ddc_bus->rec.hpd = VAR_3->hpd.hpd;
 VAR_3->ddc_bus->aux.dev = VAR_3->base.kdev;
 if (FUNC_0(VAR_5)) {
  if (VAR_0)
   VAR_3->ddc_bus->aux.transfer = VAR_2;
  else
   VAR_3->ddc_bus->aux.transfer = VAR_1;
 } else {
  VAR_3->ddc_bus->aux.transfer = VAR_1;
 }

 VAR_6 = FUNC_2(&VAR_3->ddc_bus->aux);
 if (!VAR_6)
  VAR_3->ddc_bus->has_aux = 1;

 FUNC_1(VAR_6, "drm_dp_aux_register() failed with error %d\n", VAR_6);
}
