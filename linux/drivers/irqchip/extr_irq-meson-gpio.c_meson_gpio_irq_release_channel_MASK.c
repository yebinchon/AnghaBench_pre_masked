
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_gpio_irq_controller {int channel_map; } ;


 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (struct meson_gpio_irq_controller*,int *) ;

__attribute__((used)) static void
FUNC_2(struct meson_gpio_irq_controller *VAR_0,
          u32 *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2, VAR_0->channel_map);
}
