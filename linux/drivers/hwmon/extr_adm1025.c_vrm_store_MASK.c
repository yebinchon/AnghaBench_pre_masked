
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1025_data {unsigned long vrm; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct adm1025_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct adm1025_data *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 > 255)
  return -VAR_0;

 VAR_5->vrm = VAR_6;
 return VAR_4;
}
