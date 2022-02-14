
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int sensor_num; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct cros_ec_sensors_core_state {scalar_t__ type; TYPE_2__ param; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static unsigned int FUNC_0(
     struct cros_ec_sensors_core_state *VAR_4,
     unsigned int VAR_5)
{




 if (VAR_4->type == VAR_3)
  return VAR_1 + sizeof(u16) *
   (1 + VAR_5 + VAR_4->param.info.sensor_num *
    VAR_0);

 return VAR_2 + sizeof(u16) * VAR_5;
}
