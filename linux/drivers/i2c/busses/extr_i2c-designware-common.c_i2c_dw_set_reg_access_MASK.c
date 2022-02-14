
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_i2c_dev {int dev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dw_i2c_dev*,int ) ;
 int FUNC_2 (struct dw_i2c_dev*) ;
 int FUNC_3 (struct dw_i2c_dev*) ;
 int FUNC_4 (int) ;

int FUNC_5(struct dw_i2c_dev *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 FUNC_3(VAR_5);

 if (VAR_6 == FUNC_4(VAR_3)) {

  VAR_5->flags |= VAR_1;
 } else if (VAR_6 == (VAR_3 & 0x0000ffff)) {

  VAR_5->flags |= VAR_0;
 } else if (VAR_6 != VAR_3) {
  FUNC_0(VAR_5->dev,
   "Unknown Synopsys component type: 0x%08x\n", VAR_6);
  return -VAR_4;
 }

 return 0;
}
