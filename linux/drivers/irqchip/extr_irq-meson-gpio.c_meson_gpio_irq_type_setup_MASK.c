
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct meson_gpio_irq_controller {int lock; TYPE_1__* params; } ;
struct TYPE_2__ {int support_edge_both; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct meson_gpio_irq_controller*,int *) ;
 int FUNC_5 (struct meson_gpio_irq_controller*,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct meson_gpio_irq_controller *VAR_7,
         unsigned int VAR_8,
         u32 *VAR_9)
{
 u32 VAR_10 = 0;
 unsigned int VAR_11;

 VAR_11 = FUNC_4(VAR_7, VAR_9);
 VAR_8 &= VAR_5;





 if (VAR_8 == VAR_1) {
  if (!VAR_7->params->support_edge_both)
   return -VAR_0;

  VAR_10 |= FUNC_0(VAR_11);
 } else {
  if (VAR_8 & (VAR_3 | VAR_2))
   VAR_10 |= FUNC_1(VAR_11);

  if (VAR_8 & (VAR_4 | VAR_2))
   VAR_10 |= FUNC_2(VAR_11);
 }

 FUNC_6(&VAR_7->lock);

 FUNC_5(VAR_7, VAR_6,
       FUNC_3(VAR_11), VAR_10);

 FUNC_7(&VAR_7->lock);

 return 0;
}
