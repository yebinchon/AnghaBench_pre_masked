
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mga_i2c_chan {int clock; TYPE_1__* dev; } ;
struct mga_device {int dummy; } ;
struct TYPE_2__ {struct mga_device* dev_private; } ;


 int FUNC_0 (struct mga_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 struct mga_i2c_chan *VAR_2 = VAR_0;
 struct mga_device *VAR_3 = VAR_2->dev->dev_private;
 FUNC_0(VAR_3, VAR_2->clock, VAR_1);
}
