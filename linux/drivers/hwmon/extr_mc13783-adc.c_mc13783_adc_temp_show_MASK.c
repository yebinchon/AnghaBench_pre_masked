
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int kernel_ulong_t ;
struct TYPE_2__ {int driver_data; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,struct device_attribute*,unsigned int*) ;
 TYPE_1__* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (char*,char*,int) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 unsigned int VAR_4;
 struct platform_device *VAR_5 = FUNC_4(VAR_1);
 kernel_ulong_t VAR_6 = FUNC_2(VAR_5)->driver_data;
 int VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_4);

 if (VAR_7)
  return VAR_7;

 if (VAR_6 & VAR_0) {





  VAR_7 = FUNC_0(-2635920 + VAR_4 * 4244, 10);
 } else {





  VAR_7 = 346480 - 1140 * VAR_4;
 }

 return FUNC_3(VAR_3, "%d\n", VAR_7);
}
