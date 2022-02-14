
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_dev {TYPE_2__* pci; int v4l2_dev; int i2c_bitrate; } ;
struct TYPE_3__ {int * parent; } ;
struct i2c_adapter {int retries; int timeout; int * algo_data; int * algo; TYPE_1__ dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_adapter*,int *) ;
 int VAR_5 ;
 int FUNC_2 (struct saa7146_dev*) ;
 int FUNC_3 (struct saa7146_dev*,int ,int) ;

int FUNC_4(struct saa7146_dev *VAR_6, struct i2c_adapter *VAR_7, u32 VAR_8)
{
 FUNC_0("bitrate: 0x%08x\n", VAR_8);


 FUNC_3(VAR_6, VAR_2, (VAR_0 | VAR_1));

 VAR_6->i2c_bitrate = VAR_8;
 FUNC_2(VAR_6);

 if (VAR_7) {
  FUNC_1(VAR_7, &VAR_6->v4l2_dev);
  VAR_7->dev.parent = &VAR_6->pci->dev;
  VAR_7->algo = &VAR_5;
  VAR_7->algo_data = ((void*)0);
  VAR_7->timeout = VAR_4;
  VAR_7->retries = VAR_3;
 }

 return 0;
}
