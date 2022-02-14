
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {TYPE_3__* algo_data; int name; TYPE_1__ dev; int class; int owner; } ;
struct TYPE_8__ {int udelay; int timeout; int getscl; int getsda; int setscl; int setsda; struct mga_i2c_chan* data; } ;
struct mga_i2c_chan {int data; int clock; TYPE_4__ adapter; TYPE_3__ bit; struct drm_device* dev; } ;
struct mga_device {int type; } ;
struct drm_device {TYPE_2__* pdev; struct mga_device* dev_private; } ;
struct TYPE_7__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,struct mga_i2c_chan*) ;
 int FUNC_3 (struct mga_i2c_chan*) ;
 struct mga_i2c_chan* FUNC_4 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int,char*) ;

struct mga_i2c_chan *FUNC_6(struct drm_device *VAR_10)
{
 struct mga_device *VAR_11 = VAR_10->dev_private;
 struct mga_i2c_chan *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_3, 1);
 FUNC_0(VAR_4, 0xff);
 FUNC_0(VAR_2, 0);

 switch (VAR_11->type) {
 case 130:
 case 129:
 case 132:
 case 128:
 case 131:
  VAR_14 = 1;
  VAR_15 = 2;
  break;
 case 135:
 case 134:
 case 133:
  VAR_14 = 2;
  VAR_15 = 1;
  break;
 default:
  VAR_14 = 2;
  VAR_15 = 8;
  break;
 }

 VAR_12 = FUNC_4(sizeof(struct mga_i2c_chan), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->data = VAR_14;
 VAR_12->clock = VAR_15;
 VAR_12->adapter.owner = VAR_5;
 VAR_12->adapter.class = VAR_1;
 VAR_12->adapter.dev.parent = &VAR_10->pdev->dev;
 VAR_12->dev = VAR_10;
 FUNC_2(&VAR_12->adapter, VAR_12);
 FUNC_5(VAR_12->adapter.name, sizeof(VAR_12->adapter.name), "mga i2c");

 VAR_12->adapter.algo_data = &VAR_12->bit;

 VAR_12->bit.udelay = 10;
 VAR_12->bit.timeout = 2;
 VAR_12->bit.data = VAR_12;
 VAR_12->bit.setsda = VAR_9;
 VAR_12->bit.setscl = VAR_8;
 VAR_12->bit.getsda = VAR_7;
 VAR_12->bit.getscl = VAR_6;

 VAR_13 = FUNC_1(&VAR_12->adapter);
 if (VAR_13) {
  FUNC_3(VAR_12);
  VAR_12 = ((void*)0);
 }
 return VAR_12;
}
