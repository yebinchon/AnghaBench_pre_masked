
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83781d_data {int* fan_min; int* fan_div; scalar_t__ type; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 unsigned long FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct w83781d_data* FUNC_5 (struct device*) ;
 int FUNC_6 (char const*,int,unsigned long*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (struct w83781d_data*,int ) ;
 int FUNC_11 (struct w83781d_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_5, struct device_attribute *VAR_6,
  const char *VAR_7, size_t VAR_8)
{
 struct sensor_device_attribute *VAR_9 = FUNC_9(VAR_6);
 struct w83781d_data *VAR_10 = FUNC_5(VAR_5);
 unsigned long VAR_11;
 int VAR_12 = VAR_9->index;
 u8 VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_15 = FUNC_6(VAR_7, 10, &VAR_14);
 if (VAR_15)
  return VAR_15;

 FUNC_7(&VAR_10->update_lock);


 VAR_11 = FUNC_2(VAR_10->fan_min[VAR_12],
      FUNC_0(VAR_10->fan_div[VAR_12]));

 VAR_10->fan_div[VAR_12] = FUNC_1(VAR_14, VAR_10->type);

 VAR_13 = (FUNC_10(VAR_10, VAR_12 == 2 ?
      VAR_0 : VAR_2)
  & (VAR_12 == 0 ? 0xcf : 0x3f))
       | ((VAR_10->fan_div[VAR_12] & 0x03) << (VAR_12 == 0 ? 4 : 6));
 FUNC_11(VAR_10, VAR_12 == 2 ?
       VAR_0 : VAR_2, VAR_13);


 if (VAR_10->type != VAR_4 && VAR_10->type != VAR_3) {
  VAR_13 = (FUNC_10(VAR_10, VAR_1)
         & ~(1 << (5 + VAR_12)))
      | ((VAR_10->fan_div[VAR_12] & 0x04) << (3 + VAR_12));
  FUNC_11(VAR_10, VAR_1, VAR_13);
 }


 VAR_10->fan_min[VAR_12] = FUNC_3(VAR_11, FUNC_0(VAR_10->fan_div[VAR_12]));
 FUNC_11(VAR_10, FUNC_4(VAR_12), VAR_10->fan_min[VAR_12]);

 FUNC_8(&VAR_10->update_lock);
 return VAR_8;
}
