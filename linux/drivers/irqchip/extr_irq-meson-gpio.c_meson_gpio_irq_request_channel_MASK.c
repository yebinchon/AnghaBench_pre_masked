
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_gpio_irq_controller {int lock; int * channel_irqs; int channel_map; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct meson_gpio_irq_controller*,unsigned int,int,unsigned long) ;
 int FUNC_4 (char*,unsigned long,unsigned int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct meson_gpio_irq_controller *VAR_2,
          unsigned long VAR_3,
          u32 **VAR_4)
{
 unsigned int VAR_5, VAR_6;

 FUNC_7(&VAR_2->lock);


 VAR_6 = FUNC_1(VAR_2->channel_map, VAR_1);
 if (VAR_6 >= VAR_1) {
  FUNC_8(&VAR_2->lock);
  FUNC_5("No channel available\n");
  return -VAR_0;
 }


 FUNC_6(VAR_6, VAR_2->channel_map);





 VAR_5 = FUNC_2(VAR_6);
 FUNC_3(VAR_2, VAR_5,
       0xff << FUNC_0(VAR_6),
       VAR_3 << FUNC_0(VAR_6));







 *VAR_4 = &(VAR_2->channel_irqs[VAR_6]);

 FUNC_8(&VAR_2->lock);

 FUNC_4("hwirq %lu assigned to channel %d - irq %u\n",
   VAR_3, VAR_6, **VAR_4);

 return 0;
}
