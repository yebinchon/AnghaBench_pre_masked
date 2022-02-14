
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32f7_i2c_msg {int smbus; int result; } ;
struct TYPE_2__ {int timeout; } ;
struct stm32f7_i2c_dev {int msg_num; int dev; scalar_t__ use_dma; struct i2c_msg* msg; TYPE_1__ adap; int complete; scalar_t__ msg_id; struct stm32_i2c_dma* dma; struct stm32f7_i2c_msg f7_msg; } ;
struct stm32_i2c_dma {int chan_using; } ;
struct i2c_msg {int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 struct stm32f7_i2c_dev* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct stm32f7_i2c_dev*) ;
 int FUNC_7 (struct stm32f7_i2c_dev*,struct i2c_msg*) ;
 unsigned long FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_1,
       struct i2c_msg VAR_2[], int VAR_3)
{
 struct stm32f7_i2c_dev *VAR_4 = FUNC_2(VAR_1);
 struct stm32f7_i2c_msg *VAR_5 = &VAR_4->f7_msg;
 struct stm32_i2c_dma *VAR_6 = VAR_4->dma;
 unsigned long VAR_7;
 int VAR_8;

 VAR_4->msg = VAR_2;
 VAR_4->msg_num = VAR_3;
 VAR_4->msg_id = 0;
 VAR_5->smbus = 0;

 VAR_8 = FUNC_3(VAR_4->dev);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8)
  goto pm_free;

 FUNC_7(VAR_4, VAR_2);

 VAR_7 = FUNC_8(&VAR_4->complete,
      VAR_4->adap.timeout);
 VAR_8 = VAR_5->result;

 if (!VAR_7) {
  FUNC_0(VAR_4->dev, "Access to slave 0x%x timed out\n",
   VAR_4->msg->addr);
  if (VAR_4->use_dma)
   FUNC_1(VAR_6->chan_using);
  VAR_8 = -VAR_0;
 }

pm_free:
 FUNC_4(VAR_4->dev);
 FUNC_5(VAR_4->dev);

 return (VAR_8 < 0) ? VAR_8 : VAR_3;
}
