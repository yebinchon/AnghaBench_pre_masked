
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int gpio2; } ;
struct atxp1_data {TYPE_1__ reg; } ;
typedef int ssize_t ;


 struct atxp1_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 int VAR_3;
 struct atxp1_data *VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 VAR_3 = FUNC_1(VAR_2, "0x%02x\n", VAR_4->reg.gpio2);

 return VAR_3;
}
