
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct device*,struct device_attribute*,char const*,size_t) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6 = VAR_0;
 ssize_t VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_0 == VAR_6)
  return VAR_7;

 FUNC_2(&VAR_1);
 FUNC_1();
 FUNC_3(&VAR_1);

 return VAR_7;
}
