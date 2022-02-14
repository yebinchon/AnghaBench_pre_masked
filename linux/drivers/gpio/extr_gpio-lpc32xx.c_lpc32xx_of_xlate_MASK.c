
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct of_phandle_args {size_t* args; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct gpio_chip chip; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_2,
       const struct of_phandle_args *VAR_3, u32 *VAR_4)
{

 u32 VAR_5 = VAR_3->args[0];
 if ((VAR_5 >= FUNC_0(VAR_1) ||
     (VAR_2 != &VAR_1[VAR_5].chip)))
  return -VAR_0;

 if (VAR_4)
  *VAR_4 = VAR_3->args[2];
 return VAR_3->args[1];
}
