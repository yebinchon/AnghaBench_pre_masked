
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct amd_gpio {int* orig; TYPE_1__* pdev; scalar_t__ pm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,int) ;
 struct amd_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct amd_gpio *VAR_5 = FUNC_2(VAR_3);

 VAR_5->orig[VAR_4] = FUNC_3(VAR_5->pm + FUNC_0(VAR_4)) &
  (VAR_0 | VAR_1 | VAR_2);

 FUNC_1(&VAR_5->pdev->dev, "Requested gpio %d, data %x\n", VAR_4, VAR_5->orig[VAR_4]);

 return 0;
}
