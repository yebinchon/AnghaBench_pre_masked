
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dimm_info {char* label; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,char*) ;
 struct dimm_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct dimm_info *VAR_3 = FUNC_1(VAR_0);


 if (!VAR_3->label[0])
  return 0;

 return FUNC_0(VAR_2, sizeof(VAR_3->label) + 1, "%s\n", VAR_3->label);
}
