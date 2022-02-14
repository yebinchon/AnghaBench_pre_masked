
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct amd_gpio {scalar_t__ pm; int * orig; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,int ) ;
 struct amd_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct amd_gpio *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_2->pdev->dev, "Freed gpio %d, data %x\n", VAR_1, VAR_2->orig[VAR_1]);

 FUNC_3(VAR_2->orig[VAR_1], VAR_2->pm + FUNC_0(VAR_1));
}
