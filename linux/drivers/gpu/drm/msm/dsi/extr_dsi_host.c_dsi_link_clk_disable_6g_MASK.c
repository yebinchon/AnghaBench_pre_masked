
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {scalar_t__ byte_clk; scalar_t__ byte_intf_clk; scalar_t__ pixel_clk; scalar_t__ esc_clk; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct msm_dsi_host *VAR_0)
{
 FUNC_0(VAR_0->esc_clk);
 FUNC_0(VAR_0->pixel_clk);
 if (VAR_0->byte_intf_clk)
  FUNC_0(VAR_0->byte_intf_clk);
 FUNC_0(VAR_0->byte_clk);
}
