
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int lock; int pm_base; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct gpio_chip*,unsigned int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;





 if (VAR_3 < 16) {
  if (!VAR_1.pm_base)
   return -VAR_0;

  FUNC_4(&VAR_1.lock, VAR_4);


  FUNC_2(FUNC_0(16 + VAR_3), 0, VAR_1.pm_base);
  VAR_5 = FUNC_1(0, VAR_1.pm_base);

  FUNC_5(&VAR_1.lock, VAR_4);

  return !!((VAR_5 >> 16) & FUNC_0(VAR_3));
 } else {
  return FUNC_3(VAR_2, VAR_3);
 }
}
