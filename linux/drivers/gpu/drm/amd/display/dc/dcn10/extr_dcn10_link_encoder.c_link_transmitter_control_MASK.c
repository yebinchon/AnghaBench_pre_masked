
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ctx; } ;
struct dcn10_link_encoder {TYPE_2__ base; } ;
struct dc_bios {TYPE_3__* funcs; } ;
struct bp_transmitter_control {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_6__ {int (* transmitter_control ) (struct dc_bios*,struct bp_transmitter_control*) ;} ;
struct TYPE_4__ {struct dc_bios* dc_bios; } ;


 int FUNC_0 (struct dc_bios*,struct bp_transmitter_control*) ;

__attribute__((used)) static enum bp_result FUNC_1(
 struct dcn10_link_encoder *VAR_0,
 struct bp_transmitter_control *VAR_1)
{
 enum bp_result VAR_2;
 struct dc_bios *VAR_3 = VAR_0->base.ctx->dc_bios;

 VAR_2 = VAR_3->funcs->transmitter_control(VAR_3, VAR_1);

 return VAR_2;
}
