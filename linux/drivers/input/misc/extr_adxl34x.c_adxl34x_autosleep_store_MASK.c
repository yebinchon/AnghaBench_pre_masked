
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int power_mode; } ;
struct adxl34x {int mutex; TYPE_1__ pdata; scalar_t__ opened; int suspended; int disabled; } ;
typedef int ssize_t ;


 int FUNC_0 (struct adxl34x*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct adxl34x* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct adxl34x *VAR_8 = FUNC_1(VAR_4);
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_3(&VAR_8->mutex);

 if (VAR_9)
  VAR_8->pdata.power_mode |= (VAR_0 | VAR_1);
 else
  VAR_8->pdata.power_mode &= ~(VAR_0 | VAR_1);

 if (!VAR_8->disabled && !VAR_8->suspended && VAR_8->opened)
  FUNC_0(VAR_8, VAR_3, VAR_8->pdata.power_mode | VAR_2);

 FUNC_4(&VAR_8->mutex);

 return VAR_7;
}
