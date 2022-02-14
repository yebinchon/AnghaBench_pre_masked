
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mga_i2c_chan {int clock; TYPE_1__* dev; } ;
struct mga_device {int dummy; } ;
struct TYPE_2__ {struct mga_device* dev_private; } ;


 int FUNC_0 (struct mga_device*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct mga_i2c_chan *VAR_1 = VAR_0;
 struct mga_device *VAR_2 = VAR_1->dev->dev_private;
 return (FUNC_0(VAR_2) & VAR_1->clock) ? 1 : 0;
}
