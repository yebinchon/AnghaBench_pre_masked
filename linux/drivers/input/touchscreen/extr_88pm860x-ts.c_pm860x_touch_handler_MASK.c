
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_touch {int res_x; int idev; int i2c; struct pm860x_chip* chip; } ;
struct pm860x_chip {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,unsigned char*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct pm860x_touch *VAR_10 = VAR_9;
 struct pm860x_chip *VAR_11 = VAR_10->chip;
 unsigned char VAR_12[VAR_6];
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18 = 0;
 int VAR_19;

 VAR_19 = FUNC_4(VAR_10->i2c, VAR_7, VAR_6, VAR_12);
 if (VAR_19 < 0)
  goto out;

 VAR_15 = VAR_12[1] & (1 << 6);
 VAR_13 = ((VAR_12[0] & 0xFF) << 4) | (VAR_12[1] & 0x0F);
 VAR_14 = ((VAR_12[2] & 0xFF) << 4) | (VAR_12[3] & 0x0F);
 VAR_16 = ((VAR_12[4] & 0xFF) << 4) | (VAR_12[5] & 0x0F);
 VAR_17 = ((VAR_12[6] & 0xFF) << 4) | (VAR_12[7] & 0x0F);

 if (VAR_15) {
  if ((VAR_13 != 0) && (VAR_16 != 0) && (VAR_10->res_x != 0)) {
   VAR_18 = VAR_17 / VAR_16 - 1;
   VAR_18 = (VAR_18 * VAR_10->res_x * VAR_13) >> VAR_3;
   FUNC_0(VAR_11->dev, "z1:%d, z2:%d, rt:%d\n",
    VAR_16, VAR_17, VAR_18);
  }
  FUNC_1(VAR_10->idev, VAR_1, VAR_13);
  FUNC_1(VAR_10->idev, VAR_2, VAR_14);
  FUNC_1(VAR_10->idev, VAR_0, VAR_18);
  FUNC_2(VAR_10->idev, VAR_4, 1);
  FUNC_0(VAR_11->dev, "pen down at [%d, %d].\n", VAR_13, VAR_14);
 } else {
  FUNC_1(VAR_10->idev, VAR_0, 0);
  FUNC_2(VAR_10->idev, VAR_4, 0);
  FUNC_0(VAR_11->dev, "pen release\n");
 }
 FUNC_3(VAR_10->idev);

out:
 return VAR_5;
}
