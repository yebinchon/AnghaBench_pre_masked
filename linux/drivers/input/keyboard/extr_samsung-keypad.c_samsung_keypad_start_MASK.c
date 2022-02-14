
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_keypad {int stopped; TYPE_1__* pdev; scalar_t__ base; int clk; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct samsung_keypad *VAR_4)
{
 unsigned int VAR_5;

 FUNC_1(&VAR_4->pdev->dev);


 VAR_4->stopped = 0;

 FUNC_0(VAR_4->clk);


 VAR_5 = FUNC_3(VAR_4->base + VAR_1);
 VAR_5 |= VAR_2 | VAR_3;
 FUNC_4(VAR_5, VAR_4->base + VAR_1);


 FUNC_4(0, VAR_4->base + VAR_0);

 FUNC_2(&VAR_4->pdev->dev);
}
