
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int hwmon_dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct vt1211_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct vt1211_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->hwmon_dev);
 FUNC_2(VAR_0);

 return 0;
}
