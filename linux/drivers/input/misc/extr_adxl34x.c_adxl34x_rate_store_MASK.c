
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int data_rate; scalar_t__ low_power_mode; } ;
struct adxl34x {int mutex; TYPE_1__ pdata; } ;
typedef int ssize_t ;


 int FUNC_0 (struct adxl34x*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char) ;
 struct adxl34x* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct adxl34x *VAR_6 = FUNC_2(VAR_2);
 unsigned char VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_4, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_4(&VAR_6->mutex);

 VAR_6->pdata.data_rate = FUNC_1(VAR_7);
 FUNC_0(VAR_6, VAR_0,
   VAR_6->pdata.data_rate |
   (VAR_6->pdata.low_power_mode ? VAR_1 : 0));

 FUNC_5(&VAR_6->mutex);

 return VAR_5;
}
