
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int dummy; } ;
struct sch56xx_watchdog_data {int watchdog_preset; int watchdog_output_enable; int io_lock; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 struct sch56xx_watchdog_data* FUNC_5 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_3)
{
 struct sch56xx_watchdog_data *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 u8 VAR_6;
 FUNC_1(VAR_4->io_lock);


 VAR_5 = FUNC_4(VAR_4->addr, VAR_1,
     VAR_4->watchdog_preset);
 if (VAR_5)
  goto leave;


 VAR_6 = VAR_4->watchdog_output_enable | VAR_2;
 VAR_5 = FUNC_4(VAR_4->addr,
     VAR_0, VAR_6);
 if (VAR_5)
  goto leave;

 VAR_4->watchdog_output_enable = VAR_6;


 VAR_6 = FUNC_0(VAR_4->addr + 9);
 if (VAR_6 & 0x01)
  FUNC_3(0x01, VAR_4->addr + 9);

leave:
 FUNC_2(VAR_4->io_lock);
 return VAR_5;
}
