
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
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,int,int) ;
 struct amd_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_4, unsigned VAR_5, int VAR_6)
{
 struct amd_gpio *VAR_7 = FUNC_2(VAR_4);
 u8 VAR_8;
 unsigned long VAR_9;

 FUNC_5(&VAR_7->lock, VAR_9);
 VAR_8 = FUNC_3(VAR_7->pm + FUNC_0(VAR_5));
 VAR_8 = (VAR_8 & VAR_0) | VAR_1 | (VAR_6 ? VAR_2 : VAR_3);
 FUNC_4(VAR_8, VAR_7->pm + FUNC_0(VAR_5));
 FUNC_6(&VAR_7->lock, VAR_9);

 FUNC_1(&VAR_7->pdev->dev, "Dirout gpio %d, value %d, reg=%02x\n", VAR_5, !!VAR_6, VAR_8);

 return 0;
}
