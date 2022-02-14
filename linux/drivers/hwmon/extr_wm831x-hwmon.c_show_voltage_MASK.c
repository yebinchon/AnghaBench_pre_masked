
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm831x {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int,int) ;
 struct wm831x* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;
 int FUNC_4 (struct wm831x*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct wm831x *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_3(VAR_1)->index;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_2, "%d\n", FUNC_0(VAR_5, 1000));
}
