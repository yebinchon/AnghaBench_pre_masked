
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct afe440x_attr {int table_size; size_t field; TYPE_1__* val_table; } ;
struct afe4404_data {int * fields; } ;
typedef int ssize_t ;
struct TYPE_2__ {int integer; int fract; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct afe4404_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char const*,int,int*,int*) ;
 int FUNC_3 (int ,int) ;
 struct afe440x_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_1);
 struct afe4404_data *VAR_6 = FUNC_1(VAR_5);
 struct afe440x_attr *VAR_7 = FUNC_4(VAR_2);
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = FUNC_2(VAR_3, 100000, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_7->table_size; VAR_8++)
  if (VAR_7->val_table[VAR_8].integer == VAR_9 &&
      VAR_7->val_table[VAR_8].fract == VAR_10)
   break;
 if (VAR_8 == VAR_7->table_size)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_6->fields[VAR_7->field], VAR_8);
 if (VAR_11)
  return VAR_11;

 return VAR_4;
}
