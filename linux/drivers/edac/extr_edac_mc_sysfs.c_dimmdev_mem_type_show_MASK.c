
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dimm_info {size_t mtype; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct dimm_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct dimm_info *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, "%s\n", VAR_0[VAR_4->mtype]);
}
