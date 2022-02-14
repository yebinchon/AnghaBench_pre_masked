
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf610_gpio_port {scalar_t__ gpio_base; TYPE_1__* sdata; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ have_paddr; } ;


 unsigned long FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct vf610_gpio_port* FUNC_1 (struct gpio_chip*) ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct vf610_gpio_port *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6 = FUNC_0(VAR_4);
 unsigned long VAR_7 = VAR_1;

 if (VAR_5->sdata && VAR_5->sdata->have_paddr) {
  VAR_6 &= FUNC_2(VAR_5->gpio_base + VAR_0);
  if (VAR_6)
   VAR_7 = VAR_2;
 }

 return !!(FUNC_2(VAR_5->gpio_base + VAR_7) & FUNC_0(VAR_4));
}
