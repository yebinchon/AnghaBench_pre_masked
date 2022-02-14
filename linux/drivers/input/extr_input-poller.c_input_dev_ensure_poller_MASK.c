
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ parent; } ;
struct input_dev {TYPE_1__ dev; int poller; } ;


 int FUNC_0 (TYPE_1__*,char*) ;

__attribute__((used)) static bool FUNC_1(struct input_dev *VAR_0)
{
 if (!VAR_0->poller) {
  FUNC_0(VAR_0->dev.parent ?: &VAR_0->dev,
   "poller structure has not been set up\n");
  return 0;
 }

 return 1;
}
