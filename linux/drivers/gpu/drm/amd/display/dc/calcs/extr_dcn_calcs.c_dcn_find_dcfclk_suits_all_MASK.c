
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_clocks {int dcfclk_khz; int fclk_khz; int dppclk_khz; int phyclk_khz; int dispclk_khz; } ;
struct dc {TYPE_1__* dcn_soc; } ;
struct TYPE_2__ {int dcfclkv_max0p9; int dcfclkv_nom0p8; int dcfclkv_mid0p72; int dcfclkv_min0p65; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_3 (struct dc const*,int ,int ) ;

unsigned int FUNC_4(
 const struct dc *VAR_9,
 struct dc_clocks *VAR_10)
{
 unsigned VAR_11, VAR_12;
 unsigned VAR_13;


 VAR_11 = FUNC_3(
  VAR_9, VAR_2, VAR_10->dispclk_khz);
 VAR_12 = FUNC_3(
  VAR_9, VAR_1, VAR_10->phyclk_khz);

 VAR_11 = FUNC_2(VAR_11, VAR_12);
 VAR_12 = FUNC_3(
  VAR_9, VAR_3, VAR_10->dppclk_khz);
 VAR_11 = FUNC_2(VAR_11, VAR_12);

 VAR_12 = FUNC_3(
  VAR_9, VAR_4, VAR_10->fclk_khz);
 VAR_11 = FUNC_2(VAR_11, VAR_12);
 VAR_12 = FUNC_3(
  VAR_9, VAR_0, VAR_10->dcfclk_khz);


 VAR_11 = FUNC_2(VAR_11, VAR_12);
 if (VAR_11 == VAR_6) {
  FUNC_0();
  VAR_13 = VAR_9->dcn_soc->dcfclkv_max0p9*1000;
 } else if (VAR_11 == VAR_5)
  VAR_13 = VAR_9->dcn_soc->dcfclkv_max0p9*1000;
 else if (VAR_11 == VAR_8)
  VAR_13 = VAR_9->dcn_soc->dcfclkv_nom0p8*1000;
 else if (VAR_11 == VAR_7)
  VAR_13 = VAR_9->dcn_soc->dcfclkv_mid0p72*1000;
 else
  VAR_13 = VAR_9->dcn_soc->dcfclkv_min0p65*1000;

 FUNC_1("\tdcf_clk for voltage = %d\n", VAR_13);
 return VAR_13;
}
