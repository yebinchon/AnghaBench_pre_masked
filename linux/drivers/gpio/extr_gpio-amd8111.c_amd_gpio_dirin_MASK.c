
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct amd_gpio {TYPE_1__* pdev; int lock; scalar_t__ pm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,int) ;
 struct amd_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct amd_gpio *VAR_4 = FUNC_2(VAR_2);
 u8 VAR_5;
 unsigned long VAR_6;

 FUNC_5(&VAR_4->lock, VAR_6);
 VAR_5 = FUNC_3(VAR_4->pm + FUNC_0(VAR_3));
 VAR_5 = (VAR_5 & VAR_0) | VAR_1;
 FUNC_4(VAR_5, VAR_4->pm + FUNC_0(VAR_3));
 FUNC_6(&VAR_4->lock, VAR_6);

 FUNC_1(&VAR_4->pdev->dev, "Dirin gpio %d, reg=%02x\n", VAR_3, VAR_5);

 return 0;
}
