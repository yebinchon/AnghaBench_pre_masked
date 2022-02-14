
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8350 {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct wm8350* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;
 int FUNC_4 (struct wm8350*,int,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct wm8350 *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_3(VAR_2)->index;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_5, 0, 0) * VAR_0;
 VAR_6 = FUNC_0(VAR_6, 1000);

 return FUNC_2(VAR_3, "%d\n", VAR_6);
}
