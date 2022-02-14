
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ddc_service {TYPE_5__* ddc_pin; TYPE_1__* ctx; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_12__ {int name; int * algo; TYPE_2__ dev; int class; int owner; } ;
struct amdgpu_i2c_adapter {struct ddc_service* ddc_service; TYPE_6__ base; } ;
struct amdgpu_device {TYPE_3__* pdev; } ;
struct TYPE_10__ {int ddc_channel; } ;
struct TYPE_11__ {TYPE_4__ hw_info; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {struct amdgpu_device* driver_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_6__*,struct amdgpu_i2c_adapter*) ;
 struct amdgpu_i2c_adapter* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,char*,int) ;

__attribute__((used)) static struct amdgpu_i2c_adapter *
FUNC_3(struct ddc_service *VAR_4,
    int VAR_5,
    int *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_4->ctx->driver_context;
 struct amdgpu_i2c_adapter *VAR_8;

 VAR_8 = FUNC_1(sizeof(struct amdgpu_i2c_adapter), VAR_0);
 if (!VAR_8)
  return ((void*)0);
 VAR_8->base.owner = VAR_2;
 VAR_8->base.class = VAR_1;
 VAR_8->base.dev.parent = &VAR_7->pdev->dev;
 VAR_8->base.algo = &VAR_3;
 FUNC_2(VAR_8->base.name, sizeof(VAR_8->base.name), "AMDGPU DM i2c hw bus %d", VAR_5);
 FUNC_0(&VAR_8->base, VAR_8);
 VAR_8->ddc_service = VAR_4;
 VAR_8->ddc_service->ddc_pin->hw_info.ddc_channel = VAR_5;

 return VAR_8;
}
