
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct mcs814x_wdt {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mcs814x_wdt* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_2)
{
 struct mcs814x_wdt *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;

 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3->regs + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_4(VAR_4, VAR_3->regs + VAR_0);
 FUNC_2(&VAR_3->lock);

 return 0;
}
