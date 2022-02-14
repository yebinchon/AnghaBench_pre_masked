
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_keypad {int stopped; TYPE_1__* pdev; int irq; int clk; scalar_t__ base; int wait; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct samsung_keypad *VAR_4)
{
 unsigned int VAR_5;

 FUNC_3(&VAR_4->pdev->dev);


 VAR_4->stopped = 1;
 FUNC_6(&VAR_4->wait);
 FUNC_1(VAR_4->irq);


 FUNC_7(~0x0, VAR_4->base + VAR_3);


 VAR_5 = FUNC_5(VAR_4->base + VAR_0);
 VAR_5 &= ~(VAR_1 | VAR_2);
 FUNC_7(VAR_5, VAR_4->base + VAR_0);

 FUNC_0(VAR_4->clk);





 FUNC_2(VAR_4->irq);

 FUNC_4(&VAR_4->pdev->dev);
}
