
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_i2c_dev {int sda_hold_time; int dev; int (* set_sda_hold_time ) (struct dw_i2c_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct dw_i2c_dev*,int ) ;
 int FUNC_3 (struct dw_i2c_dev*) ;
 int FUNC_4 (struct dw_i2c_dev*) ;
 int FUNC_5 (struct dw_i2c_dev*) ;

int FUNC_6(struct dw_i2c_dev *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  return VAR_7;


 VAR_6 = FUNC_2(VAR_5, VAR_0);
 if (VAR_6 >= VAR_2) {
  if (!VAR_5->sda_hold_time) {

   VAR_5->sda_hold_time = FUNC_2(VAR_5, VAR_1);
  }
  if (!(VAR_5->sda_hold_time & VAR_3))
   VAR_5->sda_hold_time |= 1 << VAR_4;

  FUNC_0(VAR_5->dev, "SDA Hold Time TX:RX = %d:%d\n",
   VAR_5->sda_hold_time & ~(u32)VAR_3,
   VAR_5->sda_hold_time >> VAR_4);
 } else if (VAR_5->set_sda_hold_time) {
  VAR_5->set_sda_hold_time(VAR_5);
 } else if (VAR_5->sda_hold_time) {
  FUNC_1(VAR_5->dev,
   "Hardware too old to adjust SDA hold time.\n");
  VAR_5->sda_hold_time = 0;
 }

 FUNC_4(VAR_5);

 return 0;
}
