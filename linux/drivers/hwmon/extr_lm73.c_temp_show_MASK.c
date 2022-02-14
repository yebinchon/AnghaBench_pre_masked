
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm73_data {int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ s32 ;
typedef int s16 ;


 int VAR_0 ;
 struct lm73_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,int ,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct lm73_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 s32 VAR_7 = FUNC_1(VAR_5->client, VAR_4->index);
 if (VAR_7 < 0)
  return VAR_7;



 VAR_6 = (((s16) VAR_7) * 250) / 32;
 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_6);
}
