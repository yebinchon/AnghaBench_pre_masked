
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct stm32f7_i2c_msg {int size; char read_write; int smbus; int result; int* smbus_buf; int addr; } ;
struct TYPE_2__ {int timeout; } ;
struct stm32f7_i2c_dev {scalar_t__ use_dma; TYPE_1__ adap; int complete; struct device* dev; struct stm32_i2c_dma* dma; struct stm32f7_i2c_msg f7_msg; } ;
struct stm32_i2c_dma {int chan_using; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;





 int VAR_3 ;

 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 struct stm32f7_i2c_dev* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct stm32f7_i2c_dev*) ;
 int FUNC_8 (struct stm32f7_i2c_dev*,unsigned short,int ,union i2c_smbus_data*) ;
 int FUNC_9 (struct stm32f7_i2c_dev*) ;
 unsigned long FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_4, u16 VAR_5,
      unsigned short VAR_6, char VAR_7,
      u8 VAR_8, int VAR_9,
      union i2c_smbus_data *VAR_10)
{
 struct stm32f7_i2c_dev *VAR_11 = FUNC_3(VAR_4);
 struct stm32f7_i2c_msg *VAR_12 = &VAR_11->f7_msg;
 struct stm32_i2c_dma *VAR_13 = VAR_11->dma;
 struct device *VAR_14 = VAR_11->dev;
 unsigned long VAR_15;
 int VAR_16, VAR_17;

 VAR_12->addr = VAR_5;
 VAR_12->size = VAR_9;
 VAR_12->read_write = VAR_7;
 VAR_12->smbus = 1;

 VAR_17 = FUNC_4(VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_9(VAR_11);
 if (VAR_17)
  goto pm_free;

 VAR_17 = FUNC_8(VAR_11, VAR_6, VAR_8, VAR_10);
 if (VAR_17)
  goto pm_free;

 VAR_15 = FUNC_10(&VAR_11->complete,
           VAR_11->adap.timeout);
 VAR_17 = VAR_12->result;
 if (VAR_17)
  goto pm_free;

 if (!VAR_15) {
  FUNC_0(VAR_14, "Access to slave 0x%x timed out\n", VAR_12->addr);
  if (VAR_11->use_dma)
   FUNC_2(VAR_13->chan_using);
  VAR_17 = -VAR_1;
  goto pm_free;
 }


 if ((VAR_6 & VAR_2) && VAR_9 != VAR_3 && VAR_7) {
  VAR_17 = FUNC_7(VAR_11);
  if (VAR_17)
   goto pm_free;
 }

 if (VAR_7 && VAR_9 != VAR_3) {
  switch (VAR_9) {
  case 131:
  case 130:
   VAR_10->byte = VAR_12->smbus_buf[0];
  break;
  case 128:
  case 129:
   VAR_10->word = VAR_12->smbus_buf[0] |
    (VAR_12->smbus_buf[1] << 8);
  break;
  case 133:
  case 132:
  for (VAR_16 = 0; VAR_16 <= VAR_12->smbus_buf[0]; VAR_16++)
   VAR_10->block[VAR_16] = VAR_12->smbus_buf[VAR_16];
  break;
  default:
   FUNC_1(VAR_14, "Unsupported smbus transaction\n");
   VAR_17 = -VAR_0;
  }
 }

pm_free:
 FUNC_5(VAR_14);
 FUNC_6(VAR_14);
 return VAR_17;
}
