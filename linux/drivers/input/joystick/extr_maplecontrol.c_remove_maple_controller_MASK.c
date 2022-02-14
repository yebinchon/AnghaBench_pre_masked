
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {int * callback; } ;
struct device {int dummy; } ;
struct dc_pad {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dc_pad*) ;
 struct dc_pad* FUNC_2 (struct maple_device*) ;
 int FUNC_3 (struct maple_device*,int *) ;
 struct maple_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct maple_device *VAR_1 = FUNC_4(VAR_0);
 struct dc_pad *VAR_2 = FUNC_2(VAR_1);

 VAR_1->callback = ((void*)0);
 FUNC_0(VAR_2->dev);
 FUNC_3(VAR_1, ((void*)0));
 FUNC_1(VAR_2);

 return 0;
}
