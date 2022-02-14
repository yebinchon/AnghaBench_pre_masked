
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_gpio {size_t ioh; int spinlock; TYPE_1__* reg; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int pm; int po; } ;


 int* VAR_0 ;
 struct pch_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1, unsigned VAR_2,
         int VAR_3)
{
 struct pch_gpio *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_4->spinlock, VAR_7);

 VAR_6 = FUNC_1(&VAR_4->reg->po);
 if (VAR_3)
  VAR_6 |= (1 << VAR_2);
 else
  VAR_6 &= ~(1 << VAR_2);
 FUNC_2(VAR_6, &VAR_4->reg->po);

 VAR_5 = FUNC_1(&VAR_4->reg->pm) & ((1 << VAR_0[VAR_4->ioh]) - 1);
 VAR_5 |= (1 << VAR_2);
 FUNC_2(VAR_5, &VAR_4->reg->pm);

 FUNC_4(&VAR_4->spinlock, VAR_7);

 return 0;
}
