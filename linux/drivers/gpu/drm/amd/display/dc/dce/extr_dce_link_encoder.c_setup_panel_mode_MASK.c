
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {struct dc_context* ctx; } ;
struct dce110_link_encoder {TYPE_1__ base; } ;
struct dc_context {TYPE_3__* dc; } ;
typedef enum dp_panel_mode { ____Placeholder_dp_panel_mode } dp_panel_mode ;
struct TYPE_5__ {scalar_t__ psp_setup_panel_mode; } ;
struct TYPE_6__ {TYPE_2__ caps; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(
 struct dce110_link_encoder *VAR_1,
 enum dp_panel_mode VAR_2)
{
 uint32_t VAR_3;
 struct dc_context *VAR_4 = VAR_1->base.ctx;


 if (VAR_4->dc->caps.psp_setup_panel_mode)
  return;

 FUNC_0(FUNC_1(VAR_0));
 VAR_3 = FUNC_2(VAR_0);

 switch (VAR_2) {
 case 129:
  VAR_3 = 0x1;
  break;
 case 128:
  VAR_3 = 0x11;
  break;
 default:
  VAR_3 = 0x0;
  break;
 }

 FUNC_3(VAR_0, VAR_3);
}
