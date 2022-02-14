
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct link_encoder {TYPE_3__* ctx; } ;
struct dpcssys_phy_seq_cfg {int dummy; } ;
struct dcn20_link_encoder {struct dpcssys_phy_seq_cfg phy_seq_cfg; } ;
struct dcn10_link_encoder {int dummy; } ;
struct dc_link_settings {int dummy; } ;
typedef enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct TYPE_4__ {int avoid_vbios_exec_table; } ;
struct TYPE_5__ {TYPE_1__ debug; } ;


 int VAR_0 ;
 struct dcn10_link_encoder* FUNC_0 (struct link_encoder*) ;
 int FUNC_1 (struct link_encoder*,struct dc_link_settings const*,int) ;
 int FUNC_2 (struct link_encoder*,int ) ;
 int FUNC_3 (struct dcn10_link_encoder*,struct dc_link_settings const*) ;
 int FUNC_4 (struct dcn10_link_encoder*,struct dc_link_settings const*,struct dpcssys_phy_seq_cfg*) ;

void FUNC_5(
 struct link_encoder *VAR_1,
 const struct dc_link_settings *VAR_2,
 enum clock_source_id VAR_3)
{
 struct dcn10_link_encoder *VAR_4 = FUNC_0(VAR_1);
 struct dcn20_link_encoder *VAR_5 = (struct dcn20_link_encoder *) VAR_4;
 struct dpcssys_phy_seq_cfg *VAR_6 = &VAR_5->phy_seq_cfg;

 if (!VAR_1->ctx->dc->debug.avoid_vbios_exec_table) {
  FUNC_1(VAR_1, VAR_2, VAR_3);
  return;
 }

 if (!FUNC_4(VAR_4, VAR_2, VAR_6))
  return;

 FUNC_3(VAR_4, VAR_2);

 FUNC_2(VAR_1, VAR_0);

}
