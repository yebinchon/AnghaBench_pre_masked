
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int data_rate; } ;
struct adxl34x {TYPE_1__ pdata; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct adxl34x* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct adxl34x *VAR_3 = FUNC_1(VAR_0);

 return FUNC_2(VAR_2, "%u\n", FUNC_0(VAR_3->pdata.data_rate));
}
