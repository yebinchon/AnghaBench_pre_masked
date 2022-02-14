
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {TYPE_1__ dev; TYPE_3__* algo_data; int owner; int name; } ;
struct TYPE_8__ {int udelay; struct psb_intel_i2c_chan* data; int timeout; int getscl; int getsda; int (* setscl ) (struct psb_intel_i2c_chan*,int) ;int (* setsda ) (struct psb_intel_i2c_chan*,int) ;} ;
struct psb_intel_i2c_chan {TYPE_4__ adapter; TYPE_3__ algo; int reg; struct drm_device* drm_dev; } ;
struct drm_device {TYPE_2__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,struct psb_intel_i2c_chan*) ;
 int FUNC_2 (struct psb_intel_i2c_chan*) ;
 struct psb_intel_i2c_chan* FUNC_3 (int,int ) ;
 int FUNC_4 (struct psb_intel_i2c_chan*,int) ;
 int FUNC_5 (struct psb_intel_i2c_chan*,int) ;
 int FUNC_6 (int ,int ,char*,char const*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

struct psb_intel_i2c_chan *FUNC_9(struct drm_device *VAR_5,
     const u32 VAR_6, const char *VAR_7)
{
 struct psb_intel_i2c_chan *VAR_8;

 VAR_8 = FUNC_3(sizeof(struct psb_intel_i2c_chan), VAR_0);
 if (!VAR_8)
  goto out_free;

 VAR_8->drm_dev = VAR_5;
 VAR_8->reg = VAR_6;
 FUNC_6(VAR_8->adapter.name, VAR_1, "intel drm %s", VAR_7);
 VAR_8->adapter.owner = VAR_2;
 VAR_8->adapter.algo_data = &VAR_8->algo;
 VAR_8->adapter.dev.parent = &VAR_5->pdev->dev;
 VAR_8->algo.setsda = FUNC_5;
 VAR_8->algo.setscl = FUNC_4;
 VAR_8->algo.getsda = VAR_4;
 VAR_8->algo.getscl = VAR_3;
 VAR_8->algo.udelay = 20;
 VAR_8->algo.timeout = FUNC_8(2200);
 VAR_8->algo.data = VAR_8;

 FUNC_1(&VAR_8->adapter, VAR_8);

 if (FUNC_0(&VAR_8->adapter))
  goto out_free;


 FUNC_5(VAR_8, 1);
 FUNC_4(VAR_8, 1);
 FUNC_7(20);

 return VAR_8;

out_free:
 FUNC_2(VAR_8);
 return ((void*)0);
}
