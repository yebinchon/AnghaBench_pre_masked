
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm665_data {int conversion_time; struct i2c_client* cmdreg; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct smm665_data *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = VAR_3->cmdreg;
 int VAR_6;
 int VAR_7;
 VAR_6 = FUNC_1(VAR_5, VAR_4 << 3);
 if (VAR_6 != -VAR_1) {





  FUNC_0(&VAR_5->dev,
   "Unexpected return code %d when setting ADC index", VAR_6);
  return (VAR_6 < 0) ? VAR_6 : -VAR_0;
 }

 FUNC_3(VAR_3->conversion_time);
 VAR_6 = FUNC_2(VAR_5, 0);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev, "Failed to read ADC value: error %d", VAR_6);
  return VAR_6;
 }



 VAR_7 = (VAR_6 >> 11) & 0x0f;
 if (VAR_7 != VAR_4) {
  FUNC_0(&VAR_5->dev, "Unexpected RADC: Expected %d got %d",
   VAR_4, VAR_7);
  return -VAR_0;
 }

 return VAR_6 & VAR_2;
}
