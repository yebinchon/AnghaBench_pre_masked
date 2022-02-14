
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_bios {TYPE_1__* funcs; } ;
struct bp_transmitter_control {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_2__ {int (* transmitter_control ) (struct dc_bios*,struct bp_transmitter_control*) ;} ;


 int FUNC_0 (struct dc_bios*,struct bp_transmitter_control*) ;

__attribute__((used)) static enum bp_result FUNC_1(
  struct dc_bios *VAR_0,
 struct bp_transmitter_control *VAR_1)
{
 enum bp_result VAR_2;

 VAR_2 = VAR_0->funcs->transmitter_control(VAR_0, VAR_1);

 return VAR_2;
}
