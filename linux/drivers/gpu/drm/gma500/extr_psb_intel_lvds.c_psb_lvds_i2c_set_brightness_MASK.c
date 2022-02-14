
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct psb_intel_i2c_chan {int adapter; int slave_addr; } ;
struct i2c_msg {int len; scalar_t__* buf; int flags; int addr; } ;
struct drm_psb_private {TYPE_1__* lvds_bl; struct psb_intel_i2c_chan* lvds_i2c_bus; } ;
struct drm_device {int dev; scalar_t__ dev_private; } ;
struct TYPE_2__ {scalar_t__ pol; scalar_t__ brightnesscmd; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3,
     unsigned int VAR_4)
{
 struct drm_psb_private *VAR_5 =
  (struct drm_psb_private *)VAR_3->dev_private;

 struct psb_intel_i2c_chan *VAR_6 = VAR_5->lvds_i2c_bus;
 u8 VAR_7[2];
 unsigned int VAR_8;

 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_6->slave_addr,
   .flags = 0,
   .len = 2,
   .buf = VAR_7,
  }
 };

 VAR_8 = VAR_1 & ((unsigned int)VAR_4 *
        VAR_1 /
        VAR_2);

 if (VAR_5->lvds_bl->pol == VAR_0)
  VAR_8 = VAR_1 - VAR_8;

 VAR_7[0] = VAR_5->lvds_bl->brightnesscmd;
 VAR_7[1] = (u8)VAR_8;

 if (FUNC_2(&VAR_6->adapter, VAR_9, 1) == 1) {
  FUNC_0(VAR_3->dev, "I2C set brightness.(command, value) (%d, %d)\n",
   VAR_5->lvds_bl->brightnesscmd,
   VAR_8);
  return 0;
 }

 FUNC_1(VAR_3->dev, "I2C transfer error\n");
 return -1;
}
