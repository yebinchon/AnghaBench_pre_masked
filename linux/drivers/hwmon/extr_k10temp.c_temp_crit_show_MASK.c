
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sensor_device_attribute {int index; } ;
struct k10temp_data {int pdev; int (* read_htcreg ) (int ,int*) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct k10temp_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int*) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct k10temp_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = VAR_3->index;
 u32 VAR_6;
 int VAR_7;

 VAR_4->read_htcreg(VAR_4->pdev, &VAR_6);
 VAR_7 = ((VAR_6 >> 16) & 0x7f) * 500 + 52000;
 if (VAR_5)
  VAR_7 -= ((VAR_6 >> 24) & 0xf) * 500;
 return FUNC_1(VAR_2, "%d\n", VAR_7);
}
