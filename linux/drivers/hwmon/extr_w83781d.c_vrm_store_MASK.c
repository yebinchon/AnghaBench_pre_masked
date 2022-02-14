
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int vrm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,int ,int) ;
 struct w83781d_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2,
   size_t VAR_3)
{
 struct w83781d_data *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_4->vrm = FUNC_0(VAR_5, 0, 255);

 return VAR_3;
}
