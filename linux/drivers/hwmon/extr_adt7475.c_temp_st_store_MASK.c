
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct sensor_device_attribute_2 {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* enh_acoustics; int lock; struct i2c_client* client; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 struct adt7475_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct i2c_client*,unsigned char,int) ;
 scalar_t__ FUNC_4 (char const*,int,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
        struct device_attribute *VAR_5, const char *VAR_6,
        size_t VAR_7)
{
 struct sensor_device_attribute_2 *VAR_8 = FUNC_7(VAR_5);
 struct adt7475_data *VAR_9 = FUNC_1(VAR_4);
 struct i2c_client *VAR_10 = VAR_9->client;
 unsigned char VAR_11;
 int VAR_12, VAR_13;
 ulong VAR_14;

 if (FUNC_4(VAR_6, 10, &VAR_14))
  return -VAR_0;

 switch (VAR_8->index) {
 case 0:
  VAR_11 = VAR_1;
  VAR_12 = 0;
  VAR_13 = 0;
  break;
 case 1:
  VAR_11 = VAR_2;
  VAR_12 = 0;
  VAR_13 = 1;
  break;
 case 2:
 default:
  VAR_11 = VAR_2;
  VAR_12 = 4;
  VAR_13 = 1;
  break;
 }

 if (VAR_14 > 0) {
  VAR_14 = FUNC_2(VAR_14, VAR_3,
           FUNC_0(VAR_3));
  VAR_14 |= 0x8;
 }

 FUNC_5(&VAR_9->lock);

 VAR_9->enh_acoustics[VAR_13] &= ~(0xf << VAR_12);
 VAR_9->enh_acoustics[VAR_13] |= (VAR_14 << VAR_12);

 FUNC_3(VAR_10, VAR_11, VAR_9->enh_acoustics[VAR_13]);

 FUNC_6(&VAR_9->lock);

 return VAR_7;
}
