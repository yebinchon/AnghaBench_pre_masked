
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lane_count; } ;
struct dc_link {scalar_t__ type; TYPE_1__ cur_link_settings; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dc_link const*) ;

__attribute__((used)) static bool FUNC_1(const struct dc_link *VAR_2)
{







 if ((VAR_2->cur_link_settings.lane_count != VAR_0) ||
  (VAR_2->type == VAR_1) ||
  FUNC_0(VAR_2))
  return 1;

 return 0;
}
