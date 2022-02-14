
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zx_gpio {int lock; scalar_t__ base; } ;
struct gpio_chip {unsigned int ngpio; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct zx_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_4, unsigned VAR_5,
  int VAR_6)
{
 struct zx_gpio *VAR_7 = FUNC_1(VAR_4);
 unsigned long VAR_8;
 u16 VAR_9;

 if (VAR_5 >= VAR_4->ngpio)
  return -VAR_0;

 FUNC_2(&VAR_7->lock, VAR_8);
 VAR_9 = FUNC_4(VAR_7->base + VAR_1);
 VAR_9 |= FUNC_0(VAR_5);
 FUNC_5(VAR_9, VAR_7->base + VAR_1);

 if (VAR_6)
  FUNC_5(FUNC_0(VAR_5), VAR_7->base + VAR_3);
 else
  FUNC_5(FUNC_0(VAR_5), VAR_7->base + VAR_2);
 FUNC_3(&VAR_7->lock, VAR_8);

 return 0;
}
