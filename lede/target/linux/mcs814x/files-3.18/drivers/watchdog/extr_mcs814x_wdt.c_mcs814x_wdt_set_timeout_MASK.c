
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct mcs814x_wdt {int lock; scalar_t__ regs; int clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mcs814x_wdt* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_2,
    unsigned int VAR_3)
{
 struct mcs814x_wdt *VAR_4 = FUNC_3(VAR_2);

 FUNC_1(&VAR_4->lock);



 FUNC_4(VAR_1 - (VAR_3 * FUNC_0(VAR_4->clk)),
  VAR_4->regs + VAR_0);
 FUNC_2(&VAR_4->lock);

 return 0;
}
