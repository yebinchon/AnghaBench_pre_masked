
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct adt7470_data* FUNC_1 (struct device*) ;
 int FUNC_2 (long,int ,int ) ;
 unsigned char FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,unsigned char) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_7,
          struct device_attribute *VAR_8,
          const char *VAR_9, size_t VAR_10)
{
 struct adt7470_data *VAR_11 = FUNC_1(VAR_7);
 struct i2c_client *VAR_12 = VAR_11->client;
 long VAR_13;
 int VAR_14;
 int VAR_15 = VAR_0;
 unsigned char VAR_16;

 if (FUNC_5(VAR_9, 10, &VAR_13))
  return -VAR_5;


 VAR_14 = FUNC_2(VAR_13, VAR_6,
        FUNC_0(VAR_6));

 if (VAR_14 >= 8) {
  VAR_14 -= 8;
  VAR_15 = 0;
 }

 FUNC_6(&VAR_11->lock);

 VAR_16 = FUNC_3(VAR_12, VAR_3);
 FUNC_4(VAR_12, VAR_3,
      (VAR_16 & ~VAR_0) | VAR_15);

 VAR_16 = FUNC_3(VAR_12, VAR_4);
 FUNC_4(VAR_12, VAR_4,
  (VAR_16 & ~VAR_1) | (VAR_14 << VAR_2));
 FUNC_7(&VAR_11->lock);

 return VAR_10;
}
