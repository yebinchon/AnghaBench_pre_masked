
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {int* use_sel_ignore; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct gpio_chip*,unsigned int) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_4, unsigned VAR_5)
{
 if (!FUNC_1(VAR_4, VAR_5))
  return -VAR_1;







 if (VAR_3.desc->use_sel_ignore[VAR_5 / 32] & FUNC_0(VAR_5 & 0x1f))
  return 0;

 return FUNC_2(VAR_2, VAR_5) ? 0 : -VAR_0;
}
