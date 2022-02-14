
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ value; scalar_t__ addr; } ;
struct st_sensor_settings {TYPE_1__ sim; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_device*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_0,
        struct st_sensor_settings *VAR_1)
{
 if (VAR_1->sim.addr) {
  u8 VAR_2[] = {
   VAR_1->sim.addr,
   VAR_1->sim.value
  };

  return FUNC_0(VAR_0, VAR_2, 2);
 }

 return 0;
}
