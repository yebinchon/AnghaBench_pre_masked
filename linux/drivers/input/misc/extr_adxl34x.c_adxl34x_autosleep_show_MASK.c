
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int power_mode; } ;
struct adxl34x {TYPE_1__ pdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct adxl34x* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct adxl34x *VAR_5 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4, "%u\n",
  VAR_5->pdata.power_mode & (VAR_0 | VAR_1) ? 1 : 0);
}
