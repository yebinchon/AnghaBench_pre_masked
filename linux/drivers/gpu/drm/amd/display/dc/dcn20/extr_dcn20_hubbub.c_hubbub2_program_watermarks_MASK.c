
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct hubbub {TYPE_8__* ctx; } ;
struct dcn_watermark_set {int dummy; } ;
struct TYPE_13__ {TYPE_4__* ctx; } ;
struct dcn20_hubbub {TYPE_5__ base; } ;
struct TYPE_16__ {TYPE_7__* dc; } ;
struct TYPE_14__ {int disable_stutter; } ;
struct TYPE_15__ {TYPE_6__ debug; } ;
struct TYPE_12__ {TYPE_3__* dc; } ;
struct TYPE_11__ {TYPE_2__* clk_mgr; } ;
struct TYPE_9__ {int prev_p_state_change_support; int p_state_change_support; } ;
struct TYPE_10__ {TYPE_1__ clks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 struct dcn20_hubbub* FUNC_2 (struct hubbub*) ;
 int FUNC_3 (struct hubbub*,int) ;
 int FUNC_4 (struct hubbub*,struct dcn_watermark_set*,unsigned int,int) ;
 int FUNC_5 (struct hubbub*,struct dcn_watermark_set*,unsigned int,int) ;
 int FUNC_6 (struct hubbub*,struct dcn_watermark_set*,unsigned int,int) ;

__attribute__((used)) static void FUNC_7(
  struct hubbub *VAR_3,
  struct dcn_watermark_set *VAR_4,
  unsigned int VAR_5,
  bool VAR_6)
{
 struct dcn20_hubbub *VAR_7 = FUNC_2(VAR_3);




 FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);






 if (VAR_7->base.ctx->dc->clk_mgr->clks.prev_p_state_change_support == 1 &&
  VAR_7->base.ctx->dc->clk_mgr->clks.p_state_change_support == 0)
  VAR_6 = 1;

 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_2, 0,
   VAR_2, 60 * VAR_5);
 FUNC_1(VAR_0, VAR_1, 180);

 FUNC_3(VAR_3, !VAR_3->ctx->dc->debug.disable_stutter);
}
