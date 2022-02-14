
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc {TYPE_5__* current_state; } ;
struct TYPE_6__ {int socclk_khz; int fclk_khz; int dppclk_khz; int dispclk_khz; int dcfclk_deep_sleep_khz; int dcfclk_khz; } ;
struct TYPE_7__ {TYPE_1__ clk; } ;
struct TYPE_8__ {TYPE_2__ dcn; } ;
struct TYPE_9__ {TYPE_3__ bw; } ;
struct TYPE_10__ {TYPE_4__ bw_ctx; } ;


 unsigned int FUNC_0 (char*,unsigned int,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct dc *VAR_0, char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = VAR_2;

 VAR_3 = FUNC_0(VAR_1, VAR_2, "dcfclk,dcfclk_deep_sleep,dispclk,"
  "dppclk,fclk,socclk\n"
  "%d,%d,%d,%d,%d,%d\n",
  VAR_0->current_state->bw_ctx.bw.dcn.clk.dcfclk_khz,
  VAR_0->current_state->bw_ctx.bw.dcn.clk.dcfclk_deep_sleep_khz,
  VAR_0->current_state->bw_ctx.bw.dcn.clk.dispclk_khz,
  VAR_0->current_state->bw_ctx.bw.dcn.clk.dppclk_khz,
  VAR_0->current_state->bw_ctx.bw.dcn.clk.fclk_khz,
  VAR_0->current_state->bw_ctx.bw.dcn.clk.socclk_khz);

 VAR_4 -= VAR_3;
 VAR_1 += VAR_3;

 return VAR_2 - VAR_4;
}
