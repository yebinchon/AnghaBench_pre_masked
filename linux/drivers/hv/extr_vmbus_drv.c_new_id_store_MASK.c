
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_driver {int dummy; } ;
struct device_driver {int dummy; } ;
typedef size_t ssize_t ;
typedef int guid_t ;


 size_t VAR_0 ;
 struct hv_driver* FUNC_0 (struct device_driver*) ;
 size_t FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (struct hv_driver*,int *) ;
 size_t FUNC_3 (struct hv_driver*,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device_driver *VAR_1, const char *VAR_2,
       size_t VAR_3)
{
 struct hv_driver *VAR_4 = FUNC_0(VAR_1);
 guid_t VAR_5;
 ssize_t VAR_6;

 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (FUNC_2(VAR_4, &VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;
 return VAR_3;
}
