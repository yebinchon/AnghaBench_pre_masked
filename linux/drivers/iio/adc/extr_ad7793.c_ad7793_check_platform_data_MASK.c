
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7793_state {TYPE_1__* chip_info; } ;
struct ad7793_platform_data {scalar_t__ current_source_direction; scalar_t__ exitation_current; scalar_t__ clock_src; scalar_t__ refsel; scalar_t__ bias_voltage; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_0(struct ad7793_state *VAR_13,
 const struct ad7793_platform_data *VAR_14)
{
 if ((VAR_14->current_source_direction == VAR_6 ||
  VAR_14->current_source_direction == VAR_7) &&
  ((VAR_14->exitation_current != VAR_8) &&
  (VAR_14->exitation_current != VAR_9)))
  return -VAR_12;

 if (!(VAR_13->chip_info->flags & VAR_2) &&
  VAR_14->clock_src != VAR_1)
  return -VAR_12;

 if (!(VAR_13->chip_info->flags & VAR_3) &&
  VAR_14->refsel != VAR_11)
  return -VAR_12;

 if (!(VAR_13->chip_info->flags & VAR_4) &&
  VAR_14->bias_voltage != VAR_0)
  return -VAR_12;

 if (!(VAR_13->chip_info->flags & VAR_5) &&
  VAR_14->exitation_current != VAR_10)
  return -VAR_12;

 return 0;
}
