
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int dummy; } ;
struct sch56xx_watchdog_data {int watchdog_output_enable; int io_lock; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct sch56xx_watchdog_data* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2)
{
 struct sch56xx_watchdog_data *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = 0;
 u8 VAR_5;

 VAR_5 = VAR_3->watchdog_output_enable & ~VAR_1;
 FUNC_0(VAR_3->io_lock);
 VAR_4 = FUNC_2(VAR_3->addr,
     VAR_0, VAR_5);
 FUNC_1(VAR_3->io_lock);
 if (VAR_4)
  return VAR_4;

 VAR_3->watchdog_output_enable = VAR_5;
 return 0;
}
