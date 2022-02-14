
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct sensor_device_attribute_2 {int nr; size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int config5; long** temp; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;



 int VAR_0 ;
 size_t VAR_1 ;




 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (size_t) ;
 unsigned char FUNC_1 (size_t) ;
 unsigned char FUNC_2 (size_t) ;
 unsigned char FUNC_3 (size_t) ;
 unsigned char FUNC_4 (size_t) ;

 int FUNC_5 (unsigned char) ;
 int FUNC_6 (struct i2c_client*) ;
 long FUNC_7 (long,int,int) ;
 struct adt7475_data* FUNC_8 (struct device*) ;
 int FUNC_9 (struct i2c_client*,unsigned char,long) ;
 scalar_t__ FUNC_10 (char const*,int,long*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct adt7475_data*,int) ;
 long FUNC_14 (struct adt7475_data*,long) ;
 struct sensor_device_attribute_2* FUNC_15 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_5, struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct sensor_device_attribute_2 *VAR_9 = FUNC_15(VAR_6);
 struct adt7475_data *VAR_10 = FUNC_8(VAR_5);
 struct i2c_client *VAR_11 = VAR_10->client;
 unsigned char VAR_12 = 0;
 u8 VAR_13;
 int VAR_14;
 long VAR_15;

 if (FUNC_10(VAR_7, 10, &VAR_15))
  return -VAR_1;

 FUNC_11(&VAR_10->lock);


 VAR_10->config5 = FUNC_5(VAR_2);

 switch (VAR_9->nr) {
 case 129:
  if (VAR_10->config5 & VAR_0) {
   VAR_15 = FUNC_7(VAR_15, -63000, 127000);
   VAR_13 = VAR_10->temp[129][VAR_9->index] = VAR_15 / 1000;
  } else {
   VAR_15 = FUNC_7(VAR_15, -63000, 64000);
   VAR_13 = VAR_10->temp[129][VAR_9->index] = VAR_15 / 500;
  }
  break;

 case 132:






  VAR_10->temp[128][VAR_9->index] =
   FUNC_5(FUNC_3(VAR_9->index)) << 2;
  FUNC_6(VAR_11);

  VAR_14 = FUNC_13(VAR_10, VAR_10->temp[128][VAR_9->index]);
  VAR_15 = FUNC_7(VAR_15, VAR_14 - 15000, VAR_14);
  VAR_15 = (VAR_14 - VAR_15) / 1000;

  if (VAR_9->index != 1) {
   VAR_10->temp[132][VAR_9->index] &= 0xF0;
   VAR_10->temp[132][VAR_9->index] |= (VAR_15 & 0xF) << 4;
  } else {
   VAR_10->temp[132][VAR_9->index] &= 0x0F;
   VAR_10->temp[132][VAR_9->index] |= (VAR_15 & 0xF);
  }

  VAR_13 = VAR_10->temp[132][VAR_9->index];
  break;

 default:
  VAR_10->temp[VAR_9->nr][VAR_9->index] = FUNC_14(VAR_10, VAR_15);





  VAR_13 = (u8) (VAR_10->temp[VAR_9->nr][VAR_9->index] >> 2);
 }

 switch (VAR_9->nr) {
 case 130:
  VAR_12 = FUNC_1(VAR_9->index);
  break;
 case 131:
  VAR_12 = FUNC_0(VAR_9->index);
  break;
 case 129:
  VAR_12 = FUNC_2(VAR_9->index);
  break;
 case 133:
  VAR_12 = FUNC_4(VAR_9->index);
  break;
 case 128:
  VAR_12 = FUNC_3(VAR_9->index);
  break;
 case 132:
  if (VAR_9->index != 2)
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_4;

  break;
 }

 FUNC_9(VAR_11, VAR_12, VAR_13);

 FUNC_12(&VAR_10->lock);
 return VAR_8;
}
