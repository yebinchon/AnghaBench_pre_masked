
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mem_ctl_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct mem_ctl_info*,int ) ;
 scalar_t__ FUNC_1 (char const*,int,int *) ;
 struct mem_ctl_info* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct mem_ctl_info *VAR_5 = FUNC_2(VAR_1);
 u8 VAR_6;

 if (FUNC_1(VAR_3, 16, &VAR_6))
  return -VAR_0;

 FUNC_0(VAR_5, VAR_6);

 return VAR_4;
}
