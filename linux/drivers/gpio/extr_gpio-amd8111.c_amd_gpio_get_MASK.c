
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct amd_gpio {TYPE_1__* pdev; scalar_t__ pm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,int) ;
 struct amd_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct amd_gpio *VAR_3 = FUNC_2(VAR_1);
 u8 VAR_4;

 VAR_4 = FUNC_3(VAR_3->pm + FUNC_0(VAR_2));

 FUNC_1(&VAR_3->pdev->dev, "Getting gpio %d, reg=%02x\n", VAR_2, VAR_4);

 return (VAR_4 & VAR_0) ? 1 : 0;
}
