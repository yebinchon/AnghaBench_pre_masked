
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sensor_device_attribute {int index; } ;
struct ltc4215_data {int* regs; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct ltc4215_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
      struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_2(VAR_3);
 struct ltc4215_data *VAR_6 = FUNC_0(VAR_2);
 const u8 VAR_7 = VAR_6->regs[VAR_0];
 const u32 VAR_8 = VAR_5->index;

 return FUNC_1(VAR_4, VAR_1, "%u\n", !!(VAR_7 & VAR_8));
}
