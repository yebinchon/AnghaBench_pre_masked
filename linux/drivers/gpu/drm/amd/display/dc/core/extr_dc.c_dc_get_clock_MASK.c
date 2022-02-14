
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_clock_config {int dummy; } ;
struct TYPE_2__ {int (* get_clock ) (struct dc*,int,struct dc_clock_config*) ;} ;
struct dc {TYPE_1__ hwss; } ;
typedef enum dc_clock_type { ____Placeholder_dc_clock_type } dc_clock_type ;


 int FUNC_0 (struct dc*,int,struct dc_clock_config*) ;

void FUNC_1(struct dc *VAR_0, enum dc_clock_type VAR_1, struct dc_clock_config *VAR_2)
{
 if (VAR_0->hwss.get_clock)
  VAR_0->hwss.get_clock(VAR_0, VAR_1, VAR_2);
}
