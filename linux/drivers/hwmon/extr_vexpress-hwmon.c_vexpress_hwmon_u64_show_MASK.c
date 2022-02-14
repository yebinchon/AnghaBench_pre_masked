
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vexpress_hwmon_data {int reg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 struct vexpress_hwmon_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct vexpress_hwmon_data *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 u32 VAR_6, VAR_7;

 VAR_5 = FUNC_2(VAR_4->reg, 0, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4->reg, 1, &VAR_6);
 if (VAR_5)
  return VAR_5;

 return FUNC_3(VAR_3, VAR_0, "%llu\n",
   FUNC_1(((u64)VAR_6 << 32) | VAR_7,
   FUNC_4(VAR_2)->index));
}
