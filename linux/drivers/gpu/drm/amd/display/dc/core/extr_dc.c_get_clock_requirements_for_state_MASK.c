
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ phyclk_khz; scalar_t__ fclk_khz; scalar_t__ dcfclk_deep_sleep_khz; scalar_t__ socclk_khz; scalar_t__ dppclk_khz; scalar_t__ max_supported_dppclk_khz; scalar_t__ dramclk_khz; scalar_t__ dcfclk_khz; scalar_t__ dispclk_khz; } ;
struct TYPE_6__ {TYPE_1__ clk; } ;
struct TYPE_7__ {TYPE_2__ dcn; } ;
struct TYPE_8__ {TYPE_3__ bw; } ;
struct dc_state {TYPE_4__ bw_ctx; } ;
struct AsicStateEx {unsigned int displayClock; unsigned int engineClock; unsigned int memoryClock; unsigned int maxSupportedDppClock; unsigned int dppClock; unsigned int socClock; unsigned int dcfClockDeepSleep; unsigned int fClock; unsigned int phyClock; } ;



void FUNC_0(struct dc_state *VAR_0, struct AsicStateEx *VAR_1)
{
 VAR_1->displayClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.dispclk_khz;
 VAR_1->engineClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.dcfclk_khz;
 VAR_1->memoryClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.dramclk_khz;
 VAR_1->maxSupportedDppClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.max_supported_dppclk_khz;
 VAR_1->dppClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.dppclk_khz;
 VAR_1->socClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.socclk_khz;
 VAR_1->dcfClockDeepSleep = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.dcfclk_deep_sleep_khz;
 VAR_1->fClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.fclk_khz;
 VAR_1->phyClock = (unsigned int)VAR_0->bw_ctx.bw.dcn.clk.phyclk_khz;
}
