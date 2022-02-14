
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix_clk_100hz; scalar_t__ timing_3d_format; } ;
struct dc_stream_state {int phy_pix_clk; TYPE_1__ timing; int signal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct dc_stream_state *VAR_1)
{

 if (FUNC_0(VAR_1->signal))
  VAR_1->phy_pix_clk = FUNC_1(
   &VAR_1->timing) / 10;
 else
  VAR_1->phy_pix_clk =
   VAR_1->timing.pix_clk_100hz / 10;

 if (VAR_1->timing.timing_3d_format == VAR_0)
  VAR_1->phy_pix_clk *= 2;
}
