
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
          struct device_attribute *VAR_5,
          const char *VAR_6, size_t VAR_7)
{
 unsigned long VAR_8 = FUNC_1 (VAR_6, ((void*)0), 10);

 if (!FUNC_0(VAR_0))
  return -VAR_2;
 if (VAR_8 != 0)
  return -VAR_1;

 VAR_3 = 0;
 return VAR_7;
}
