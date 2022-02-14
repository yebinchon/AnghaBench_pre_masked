
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct ltc4261_data {int* regs; int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct ltc4261_data*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ltc4261_data*) ;
 int FUNC_2 (int ,size_t,int) ;
 struct ltc4261_data* FUNC_3 (struct device*) ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_3);
 struct ltc4261_data *VAR_6 = FUNC_3(VAR_2);
 u8 VAR_7;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = VAR_6->regs[VAR_0] & VAR_5->index;
 if (VAR_7)
  FUNC_2(VAR_6->client, VAR_0, ~VAR_7);

 return FUNC_4(VAR_4, VAR_1, "%d\n", VAR_7 ? 1 : 0);
}
