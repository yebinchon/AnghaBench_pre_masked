
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int optimize_bandwidth; int prepare_bandwidth; int pipe_control_lock; int enable_display_power_gating; } ;
struct dc {TYPE_1__ hwss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc*) ;
 int VAR_3 ;

void FUNC_1(struct dc *VAR_4)
{
 FUNC_0(VAR_4);

 VAR_4->hwss.enable_display_power_gating = VAR_0;
 VAR_4->hwss.pipe_control_lock = VAR_3;
 VAR_4->hwss.prepare_bandwidth = VAR_2;
 VAR_4->hwss.optimize_bandwidth = VAR_1;
}
