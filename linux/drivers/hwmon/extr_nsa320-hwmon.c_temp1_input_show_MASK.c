
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s32 ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 s32 VAR_3 = FUNC_0(VAR_0);

 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2, "%d\n", (VAR_3 & 0xffff) * 100);
}
