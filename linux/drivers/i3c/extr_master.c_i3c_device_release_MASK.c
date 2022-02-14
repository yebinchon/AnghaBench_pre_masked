
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct i3c_device {TYPE_1__ dev; int desc; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct i3c_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i3c_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct i3c_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->desc);

 FUNC_3(VAR_1->dev.of_node);
 FUNC_2(VAR_1);
}
