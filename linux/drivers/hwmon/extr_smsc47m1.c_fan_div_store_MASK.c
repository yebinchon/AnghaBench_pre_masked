
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct smsc47m1_data {int* fan_div; int* fan_preload; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 long FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (long,int ,int) ;
 struct smsc47m1_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct smsc47m1_data*,int ) ;
 int FUNC_8 (struct smsc47m1_data*,int ,long) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_4,
        struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct sensor_device_attribute *VAR_8 = FUNC_9(VAR_5);
 struct smsc47m1_data *VAR_9 = FUNC_3(VAR_4);
 int VAR_10 = VAR_8->index;
 long VAR_11;
 int VAR_12;
 long VAR_13;
 u8 VAR_14 = FUNC_1(VAR_9->fan_div[VAR_10]);

 VAR_12 = FUNC_4(VAR_6, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 == VAR_14)
  return VAR_7;

 FUNC_5(&VAR_9->update_lock);
 switch (VAR_11) {
 case 1:
  VAR_9->fan_div[VAR_10] = 0;
  break;
 case 2:
  VAR_9->fan_div[VAR_10] = 1;
  break;
 case 4:
  VAR_9->fan_div[VAR_10] = 2;
  break;
 case 8:
  VAR_9->fan_div[VAR_10] = 3;
  break;
 default:
  FUNC_6(&VAR_9->update_lock);
  return -VAR_0;
 }

 switch (VAR_10) {
 case 0:
 case 1:
  VAR_13 = FUNC_7(VAR_9, VAR_1)
        & ~(0x03 << (4 + 2 * VAR_10));
  VAR_13 |= VAR_9->fan_div[VAR_10] << (4 + 2 * VAR_10);
  FUNC_8(VAR_9, VAR_1, VAR_13);
  break;
 case 2:
  VAR_13 = FUNC_7(VAR_9, VAR_3) & 0xCF;
  VAR_13 |= VAR_9->fan_div[2] << 4;
  FUNC_8(VAR_9, VAR_3, VAR_13);
  break;
 default:
  FUNC_0();
 }


 VAR_13 = 192 - (VAR_14 * (192 - VAR_9->fan_preload[VAR_10])
       + VAR_11 / 2) / VAR_11;
 VAR_9->fan_preload[VAR_10] = FUNC_2(VAR_13, 0, 191);
 FUNC_8(VAR_9, VAR_2[VAR_10],
        VAR_9->fan_preload[VAR_10]);
 FUNC_6(&VAR_9->update_lock);

 return VAR_7;
}
