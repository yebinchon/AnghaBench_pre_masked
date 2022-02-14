
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {int dummy; } ;
struct device {int dummy; } ;
struct dc_kbd {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dc_kbd*) ;
 struct dc_kbd* FUNC_2 (struct maple_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct maple_device*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct maple_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1)
{
 struct maple_device *VAR_2 = FUNC_6(VAR_1);
 struct dc_kbd *VAR_3 = FUNC_2(VAR_2);

 FUNC_4(&VAR_0);

 FUNC_0(VAR_3->dev);
 FUNC_1(VAR_3);

 FUNC_3(VAR_2, ((void*)0));

 FUNC_5(&VAR_0);
 return 0;
}
