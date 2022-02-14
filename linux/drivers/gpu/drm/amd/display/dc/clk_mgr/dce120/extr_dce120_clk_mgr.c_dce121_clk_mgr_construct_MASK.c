
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dc_context {TYPE_2__* dc; } ;
struct TYPE_3__ {int dprefclk_khz; } ;
struct clk_mgr_internal {TYPE_1__ base; } ;
struct TYPE_4__ {int hwseq; } ;


 int FUNC_0 (struct dc_context*,struct clk_mgr_internal*) ;
 int FUNC_1 (struct clk_mgr_internal*) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct dc_context *VAR_0, struct clk_mgr_internal *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_1->base.dprefclk_khz = 625000;





 if (FUNC_2(VAR_0->dc->hwseq))
  FUNC_1(VAR_1);

}
