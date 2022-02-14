
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dimm_info {char* label; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char const*,size_t) ;
 struct dimm_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3,
       size_t VAR_4)
{
 struct dimm_info *VAR_5 = FUNC_1(VAR_1);
 size_t VAR_6 = VAR_4;

 if (VAR_4 == 0)
  return -VAR_0;

 if (VAR_3[VAR_4 - 1] == '\0' || VAR_3[VAR_4 - 1] == '\n')
  VAR_6 -= 1;

 if (VAR_6 == 0 || VAR_6 >= sizeof(VAR_5->label))
  return -VAR_0;

 FUNC_0(VAR_5->label, VAR_3, VAR_6);
 VAR_5->label[VAR_6] = '\0';

 return VAR_4;
}
