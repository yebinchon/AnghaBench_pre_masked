
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ads7828_data {unsigned int lsb_resol; int regmap; int cmd_byte; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ,int ) ;
 struct ads7828_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_5(VAR_1);
 struct ads7828_data *VAR_4 = FUNC_2(VAR_0);
 u8 VAR_5 = FUNC_1(VAR_4->cmd_byte, VAR_3->index);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4->regmap, VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_4(VAR_2, "%d\n",
         FUNC_0(VAR_6 * VAR_4->lsb_resol, 1000));
}
