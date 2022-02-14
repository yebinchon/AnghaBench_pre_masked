
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int *) ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver *VAR_1, const char *VAR_2,
       size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_0);
 if (VAR_4)
  return VAR_4;

 return VAR_3;
}
