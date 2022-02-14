
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf610_gpio_port {scalar_t__ gpio_base; TYPE_1__* sdata; } ;
struct gpio_chip {unsigned int base; } ;
struct TYPE_2__ {scalar_t__ have_paddr; } ;


 unsigned long FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 struct vf610_gpio_port* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2,
           int VAR_3)
{
 struct vf610_gpio_port *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->sdata && VAR_4->sdata->have_paddr)
  FUNC_4(VAR_5, VAR_4->gpio_base + VAR_0);

 FUNC_3(VAR_1, VAR_2, VAR_3);

 return FUNC_2(VAR_1->base + VAR_2);
}
