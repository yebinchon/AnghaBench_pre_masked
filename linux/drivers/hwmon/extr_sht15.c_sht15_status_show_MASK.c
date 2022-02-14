
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sht15_data {int val_status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct sht15_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sht15_data*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3;
 struct sht15_data *VAR_4 = FUNC_0(VAR_0);
 u8 VAR_5 = FUNC_3(VAR_1)->index;

 VAR_3 = FUNC_1(VAR_4);

 return VAR_3 ? VAR_3 : FUNC_2(VAR_2, "%d\n", !!(VAR_4->val_status & VAR_5));
}
