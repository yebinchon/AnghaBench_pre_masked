
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int * parent; } ;
struct i2c_adapter {TYPE_1__ dev; TYPE_4__* algo_data; int owner; int name; } ;
struct TYPE_8__ {struct intel_gpio* data; int timeout; int udelay; int getscl; int getsda; int setscl; int setsda; } ;
struct intel_gpio {int reg; struct i2c_adapter adapter; TYPE_4__ algo; struct drm_psb_private* dev_priv; } ;
struct drm_psb_private {TYPE_3__* dev; } ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct intel_gpio*) ;
 struct intel_gpio* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int,char*,char) ;
 int FUNC_5 (int) ;

__attribute__((used)) static struct i2c_adapter *
FUNC_6(struct drm_psb_private *VAR_7, u32 VAR_8)
{
 static const int VAR_9[] = {
  0,
  132,
  133,
  131,
  130,
  129,
  0,
  128,
 };
 struct intel_gpio *VAR_10;

 if (VAR_8 >= FUNC_0(VAR_9) || !VAR_9[VAR_8])
  return ((void*)0);

 VAR_10 = FUNC_3(sizeof(struct intel_gpio), VAR_0);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 VAR_10->reg = VAR_9[VAR_8];
 VAR_10->dev_priv = VAR_7;

 FUNC_4(VAR_10->adapter.name, sizeof(VAR_10->adapter.name),
   "gma500 GPIO%c", "?BACDE?F"[VAR_8]);
 VAR_10->adapter.owner = VAR_2;
 VAR_10->adapter.algo_data = &VAR_10->algo;
 VAR_10->adapter.dev.parent = &VAR_7->dev->pdev->dev;
 VAR_10->algo.setsda = VAR_6;
 VAR_10->algo.setscl = VAR_5;
 VAR_10->algo.getsda = VAR_4;
 VAR_10->algo.getscl = VAR_3;
 VAR_10->algo.udelay = VAR_1;
 VAR_10->algo.timeout = FUNC_5(2200);
 VAR_10->algo.data = VAR_10;

 if (FUNC_1(&VAR_10->adapter))
  goto out_free;

 return &VAR_10->adapter;

out_free:
 FUNC_2(VAR_10);
 return ((void*)0);
}
