
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;
struct i2c_client {int dummy; } ;
struct hp206c_data {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 struct hp206c_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 struct hp206c_data *VAR_8 = FUNC_2(VAR_5);
 struct i2c_client *VAR_9 = VAR_8->client;

 while (++VAR_7 <= VAR_3) {
  VAR_6 = FUNC_1(VAR_9, VAR_4);
  if (VAR_6 < 0) {
   FUNC_0(&VAR_5->dev, "Failed READ_REG INT_SRC: %d\n", VAR_6);
   return VAR_6;
  }
  if (VAR_6 & VAR_2)
   return 0;
  FUNC_3(VAR_1, VAR_1 * 3 / 2);
 }
 return -VAR_0;
}
