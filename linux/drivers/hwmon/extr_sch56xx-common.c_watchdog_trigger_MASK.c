
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct sch56xx_watchdog_data {int io_lock; int watchdog_preset; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct sch56xx_watchdog_data* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct sch56xx_watchdog_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;


 FUNC_0(VAR_2->io_lock);
 VAR_3 = FUNC_2(VAR_2->addr, VAR_0,
     VAR_2->watchdog_preset);
 FUNC_1(VAR_2->io_lock);

 return VAR_3;
}
