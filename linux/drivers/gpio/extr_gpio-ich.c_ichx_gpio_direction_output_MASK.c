
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {scalar_t__ have_blink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_4, unsigned VAR_5,
     int VAR_6)
{

 if (VAR_5 < 32 && VAR_3.desc->have_blink)
  FUNC_0(VAR_2, VAR_5, 0, 0);


 FUNC_0(VAR_1, VAR_5, VAR_6, 0);





 return FUNC_0(VAR_0, VAR_5, 0, 1);
}
