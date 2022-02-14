
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kdev; } ;
struct TYPE_8__ {int hpd; } ;
struct amdgpu_connector {TYPE_4__* ddc_bus; TYPE_1__ base; TYPE_3__ hpd; } ;
struct TYPE_10__ {int transfer; int dev; } ;
struct TYPE_7__ {int hpd; } ;
struct TYPE_9__ {int has_aux; TYPE_5__ aux; TYPE_2__ rec; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*) ;

void FUNC_2(struct amdgpu_connector *VAR_1)
{
 int VAR_2;

 VAR_1->ddc_bus->rec.hpd = VAR_1->hpd.hpd;
 VAR_1->ddc_bus->aux.dev = VAR_1->base.kdev;
 VAR_1->ddc_bus->aux.transfer = VAR_0;
 VAR_2 = FUNC_1(&VAR_1->ddc_bus->aux);
 if (!VAR_2)
  VAR_1->ddc_bus->has_aux = 1;

 FUNC_0(VAR_2, "drm_dp_aux_register_i2c_bus() failed with error %d\n", VAR_2);
}
