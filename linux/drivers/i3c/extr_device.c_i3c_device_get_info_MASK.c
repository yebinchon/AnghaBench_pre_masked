
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_device_info {int dummy; } ;
struct i3c_device {int bus; TYPE_1__* desc; } ;
struct TYPE_2__ {struct i3c_device_info info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct i3c_device *VAR_0,
    struct i3c_device_info *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_0->bus);
 if (VAR_0->desc)
  *VAR_1 = VAR_0->desc->info;
 FUNC_1(VAR_0->bus);
}
