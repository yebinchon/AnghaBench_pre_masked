
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sht3x_data {int data_lock; int * temperature_limits; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct sht3x_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (struct device*,size_t,size_t,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4,
         size_t VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 struct sht3x_data *VAR_8 = FUNC_1(VAR_2);
 u8 VAR_9 = FUNC_6(VAR_3)->index;

 VAR_7 = FUNC_2(VAR_4, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_0(VAR_6, VAR_1, VAR_0);
 FUNC_4(&VAR_8->data_lock);
 VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_9, VAR_8->temperature_limits[VAR_9],
     VAR_6);
 FUNC_5(&VAR_8->data_lock);

 return VAR_7;
}
