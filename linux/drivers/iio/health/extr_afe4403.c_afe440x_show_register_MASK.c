
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct afe440x_attr {size_t field; unsigned int table_size; TYPE_1__* val_table; } ;
struct afe4403_data {int * fields; } ;
typedef int ssize_t ;
struct TYPE_2__ {int integer; int fract; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,int,int*) ;
 struct afe4403_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,unsigned int*) ;
 struct afe440x_attr* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
         struct device_attribute *VAR_3,
         char *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_0(VAR_2);
 struct afe4403_data *VAR_6 = FUNC_2(VAR_5);
 struct afe440x_attr *VAR_7 = FUNC_4(VAR_3);
 unsigned int VAR_8;
 int VAR_9[2];
 int VAR_10;

 VAR_10 = FUNC_3(VAR_6->fields[VAR_7->field], &VAR_8);
 if (VAR_10)
  return VAR_10;

 if (VAR_8 >= VAR_7->table_size)
  return -VAR_0;

 VAR_9[0] = VAR_7->val_table[VAR_8].integer;
 VAR_9[1] = VAR_7->val_table[VAR_8].fract;

 return FUNC_1(VAR_4, VAR_1, 2, VAR_9);
}
