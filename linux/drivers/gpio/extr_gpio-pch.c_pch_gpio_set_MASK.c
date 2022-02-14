
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_gpio {int spinlock; TYPE_1__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int po; } ;


 struct pch_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 u32 VAR_3;
 struct pch_gpio *VAR_4 = FUNC_0(VAR_0);
 unsigned long VAR_5;

 FUNC_3(&VAR_4->spinlock, VAR_5);
 VAR_3 = FUNC_1(&VAR_4->reg->po);
 if (VAR_2)
  VAR_3 |= (1 << VAR_1);
 else
  VAR_3 &= ~(1 << VAR_1);

 FUNC_2(VAR_3, &VAR_4->reg->po);
 FUNC_4(&VAR_4->spinlock, VAR_5);
}
