
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bgpio_lock; } ;
struct brcmstb_gpio_bank {TYPE_1__ gc; } ;


 unsigned long FUNC_0 (struct brcmstb_gpio_bank*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_3(struct brcmstb_gpio_bank *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->gc.bgpio_lock, VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->gc.bgpio_lock, VAR_2);

 return VAR_1;
}
