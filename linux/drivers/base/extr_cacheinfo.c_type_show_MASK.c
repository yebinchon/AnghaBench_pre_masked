
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cacheinfo {int type; } ;
typedef int ssize_t ;





 int VAR_0 ;
 struct cacheinfo* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct cacheinfo *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_4->type) {
 case 130:
  return FUNC_1(VAR_3, "Data\n");
 case 129:
  return FUNC_1(VAR_3, "Instruction\n");
 case 128:
  return FUNC_1(VAR_3, "Unified\n");
 default:
  return -VAR_0;
 }
}
