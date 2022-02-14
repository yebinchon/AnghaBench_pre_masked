
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct srf08_data {unsigned int range_mm; int lock; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct srf08_data *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 struct i2c_client *VAR_5 = VAR_2->client;
 unsigned int VAR_6;
 u8 VAR_7;

 VAR_4 = VAR_3 / 43 - 1;
 VAR_6 = VAR_3 % 43;

 if (VAR_6 || (VAR_4 < 0) || (VAR_4 > 255))
  return -VAR_0;

 VAR_7 = VAR_4;

 FUNC_2(&VAR_2->lock);

 VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_7);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_5->dev, "write_range - err: %d\n", VAR_4);
  FUNC_3(&VAR_2->lock);
  return VAR_4;
 }

 VAR_2->range_mm = VAR_3;

 FUNC_3(&VAR_2->lock);

 return 0;
}
