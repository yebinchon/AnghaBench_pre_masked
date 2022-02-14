
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int* temp1_auto_point_temp; int* temp2_auto_point_temp; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 int VAR_0 ;
 struct amc6821_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2)->index;
 int VAR_5 = FUNC_3(VAR_2)->nr;
 struct amc6821_data *VAR_6 = FUNC_0(VAR_1);
 switch (VAR_5) {
 case 1:
  return FUNC_2(VAR_3, "%d\n",
   VAR_6->temp1_auto_point_temp[VAR_4] * 1000);
 case 2:
  return FUNC_2(VAR_3, "%d\n",
   VAR_6->temp2_auto_point_temp[VAR_4] * 1000);
 default:
  FUNC_1(VAR_1, "Unknown attr->nr (%d).\n", VAR_5);
  return -VAR_0;
 }
}
