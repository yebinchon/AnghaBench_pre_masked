
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda998x_priv {int edid_mutex; TYPE_1__* hdmi; struct gpio_desc* calib; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct gpio_desc*,int) ;
 int FUNC_4 (struct gpio_desc*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tda998x_priv*,int) ;

__attribute__((used)) static void FUNC_11(struct tda998x_priv *VAR_0)
{
 struct gpio_desc *VAR_1 = VAR_0->calib;

 FUNC_8(&VAR_0->edid_mutex);
 if (VAR_0->hdmi->irq > 0)
  FUNC_0(VAR_0->hdmi->irq);
 FUNC_3(VAR_1, 1);
 FUNC_10(VAR_0, 1);

 FUNC_5();
 FUNC_4(VAR_1, 0);
 FUNC_7(10);
 FUNC_4(VAR_1, 1);
 FUNC_6();

 FUNC_10(VAR_0, 0);
 FUNC_2(VAR_1);
 if (VAR_0->hdmi->irq > 0)
  FUNC_1(VAR_0->hdmi->irq);
 FUNC_9(&VAR_0->edid_mutex);
}
