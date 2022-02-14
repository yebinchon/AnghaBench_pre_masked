
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_vibrator {int vcc_on; int gpio; int vcc; TYPE_2__* input; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_vibrator *VAR_0)
{
 struct device *VAR_1 = VAR_0->input->dev.parent;
 int VAR_2;

 if (!VAR_0->vcc_on) {
  VAR_2 = FUNC_2(VAR_0->vcc);
  if (VAR_2) {
   FUNC_0(VAR_1, "failed to enable regulator: %d\n", VAR_2);
   return VAR_2;
  }
  VAR_0->vcc_on = 1;
 }

 FUNC_1(VAR_0->gpio, 1);

 return 0;
}
