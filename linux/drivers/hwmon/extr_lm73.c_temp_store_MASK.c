
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm73_data {int client; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long,int ,int ) ;
 struct lm73_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ,int ,short) ;
 int FUNC_3 (char const*,int,long*) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_4(VAR_3);
 struct lm73_data *VAR_7 = FUNC_1(VAR_2);
 long VAR_8;
 short VAR_9;
 s32 VAR_10;

 int VAR_11 = FUNC_3(VAR_4, 10, &VAR_8);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_9 = FUNC_0(VAR_8 / 250, VAR_1, VAR_0) << 5;
 VAR_10 = FUNC_2(VAR_7->client, VAR_6->index, VAR_9);
 return (VAR_10 < 0) ? VAR_10 : VAR_5;
}
