
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3, 0);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_2, "%llu\n", VAR_3);
}
