
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct gpu_i2c_dev {int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gpu_i2c_dev*,int *,int) ;
 int FUNC_2 (struct gpu_i2c_dev*) ;
 int FUNC_3 (struct gpu_i2c_dev*) ;
 int FUNC_4 (struct gpu_i2c_dev*,int ) ;
 int FUNC_5 (struct i2c_msg*) ;
 struct gpu_i2c_dev* FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_2,
          struct i2c_msg *VAR_3, int VAR_4)
{
 struct gpu_i2c_dev *VAR_5 = FUNC_6(VAR_2);
 int VAR_6, VAR_7;
 bool VAR_8 = 1;
 int VAR_9, VAR_10;





 FUNC_7(VAR_5->dev);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_3[VAR_9].flags & VAR_1) {

   FUNC_10(VAR_3[VAR_9].addr, VAR_5->regs + VAR_0);

   VAR_6 = FUNC_1(VAR_5, VAR_3[VAR_9].buf, VAR_3[VAR_9].len);
   if (VAR_6 < 0)
    goto exit;
  } else {
   u8 VAR_11 = FUNC_5(VAR_3 + VAR_9);

   VAR_6 = FUNC_2(VAR_5);
   if (VAR_6 < 0) {
    if (VAR_9 == 0)
     VAR_8 = 0;
    goto exit;
   }

   VAR_6 = FUNC_4(VAR_5, VAR_11);
   if (VAR_6 < 0)
    goto exit;

   for (VAR_10 = 0; VAR_10 < VAR_3[VAR_9].len; VAR_10++) {
    VAR_6 = FUNC_4(VAR_5, VAR_3[VAR_9].buf[VAR_10]);
    if (VAR_6 < 0)
     goto exit;
   }
  }
 }
 VAR_8 = 0;
 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 < 0)
  goto exit;

 VAR_6 = VAR_9;
exit:
 if (VAR_8) {
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7 < 0)
   FUNC_0(VAR_5->dev, "i2c stop failed %d\n", VAR_7);
 }
 FUNC_8(VAR_5->dev);
 FUNC_9(VAR_5->dev);
 return VAR_6;
}
