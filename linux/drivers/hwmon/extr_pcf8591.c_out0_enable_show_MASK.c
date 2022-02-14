
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8591_data {int control; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pcf8591_data* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct pcf8591_data *VAR_4 = FUNC_0(FUNC_2(VAR_1));
 return FUNC_1(VAR_3, "%u\n", !(!(VAR_4->control & VAR_0)));
}
