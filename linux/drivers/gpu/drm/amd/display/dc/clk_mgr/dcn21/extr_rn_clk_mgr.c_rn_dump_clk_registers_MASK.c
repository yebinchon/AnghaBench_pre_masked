
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rn_clk_internal {int CLK1_CLK3_CURRENT_CNT; int CLK1_CLK3_DS_CNTL; int CLK1_CLK3_ALLOW_DS; int CLK1_CLK2_CURRENT_CNT; int CLK1_CLK0_CURRENT_CNT; int CLK1_CLK1_CURRENT_CNT; int CLK1_CLK1_BYPASS_CNTL; int CLK1_CLK3_BYPASS_CNTL; int CLK1_CLK0_BYPASS_CNTL; int CLK1_CLK2_BYPASS_CNTL; int member_0; } ;
struct clk_state_registers_and_bypass {int dcfclk; int dcf_deep_sleep_divider; int dcf_deep_sleep_allow; int dprefclk; int dispclk; int dppclk; int dppclk_bypass; int dcfclk_bypass; int dispclk_bypass; int dprefclk_bypass; } ;
struct clk_mgr {int dummy; } ;
struct clk_log_info {unsigned int bufSize; unsigned int pBuf; unsigned int* sum_chars_printed; scalar_t__ enabled; } ;


 int FUNC_0 (struct rn_clk_internal*,struct clk_mgr*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int,char*,...) ;

__attribute__((used)) static void FUNC_2(struct clk_state_registers_and_bypass *VAR_0,
  struct clk_mgr *VAR_1, struct clk_log_info *VAR_2)
{
 struct rn_clk_internal VAR_3 = {0};
 char *VAR_4[5] = {"0x0 DFS", "0x1 REFCLK", "0x2 ERROR", "0x3 400 FCH", "0x4 600 FCH"};
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = VAR_2->bufSize;

 FUNC_0(&VAR_3, VAR_1);

 VAR_0->dcfclk = VAR_3.CLK1_CLK3_CURRENT_CNT / 10;
 VAR_0->dcf_deep_sleep_divider = VAR_3.CLK1_CLK3_DS_CNTL / 10;
 VAR_0->dcf_deep_sleep_allow = VAR_3.CLK1_CLK3_ALLOW_DS;
 VAR_0->dprefclk = VAR_3.CLK1_CLK2_CURRENT_CNT / 10;
 VAR_0->dispclk = VAR_3.CLK1_CLK0_CURRENT_CNT / 10;
 VAR_0->dppclk = VAR_3.CLK1_CLK1_CURRENT_CNT / 10;

 VAR_0->dppclk_bypass = VAR_3.CLK1_CLK1_BYPASS_CNTL & 0x0007;
 if (VAR_0->dppclk_bypass < 0 || VAR_0->dppclk_bypass > 4)
  VAR_0->dppclk_bypass = 0;
 VAR_0->dcfclk_bypass = VAR_3.CLK1_CLK3_BYPASS_CNTL & 0x0007;
 if (VAR_0->dcfclk_bypass < 0 || VAR_0->dcfclk_bypass > 4)
  VAR_0->dcfclk_bypass = 0;
 VAR_0->dispclk_bypass = VAR_3.CLK1_CLK0_BYPASS_CNTL & 0x0007;
 if (VAR_0->dispclk_bypass < 0 || VAR_0->dispclk_bypass > 4)
  VAR_0->dispclk_bypass = 0;
 VAR_0->dprefclk_bypass = VAR_3.CLK1_CLK2_BYPASS_CNTL & 0x0007;
 if (VAR_0->dprefclk_bypass < 0 || VAR_0->dprefclk_bypass > 4)
  VAR_0->dprefclk_bypass = 0;

 if (VAR_2->enabled) {
  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "clk_type,clk_value,deepsleep_cntl,deepsleep_allow,bypass\n");
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "dcfclk,%d,%d,%d,%s\n",
   VAR_0->dcfclk,
   VAR_0->dcf_deep_sleep_divider,
   VAR_0->dcf_deep_sleep_allow,
   VAR_4[(int) VAR_0->dcfclk_bypass]);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "dprefclk,%d,N/A,N/A,%s\n",
   VAR_0->dprefclk,
   VAR_4[(int) VAR_0->dprefclk_bypass]);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "dispclk,%d,N/A,N/A,%s\n",
   VAR_0->dispclk,
   VAR_4[(int) VAR_0->dispclk_bypass]);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;


  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "SPLIT\n");
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;


  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "reg_name,value,clk_type\n");
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK3_CURRENT_CNT,%d,dcfclk\n",
    VAR_3.CLK1_CLK3_CURRENT_CNT);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK3_DS_CNTL,%d,dcf_deep_sleep_divider\n",
     VAR_3.CLK1_CLK3_DS_CNTL);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK3_ALLOW_DS,%d,dcf_deep_sleep_allow\n",
     VAR_3.CLK1_CLK3_ALLOW_DS);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK2_CURRENT_CNT,%d,dprefclk\n",
     VAR_3.CLK1_CLK2_CURRENT_CNT);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK0_CURRENT_CNT,%d,dispclk\n",
     VAR_3.CLK1_CLK0_CURRENT_CNT);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK1_CURRENT_CNT,%d,dppclk\n",
     VAR_3.CLK1_CLK1_CURRENT_CNT);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK3_BYPASS_CNTL,%d,dcfclk_bypass\n",
     VAR_3.CLK1_CLK3_BYPASS_CNTL);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK2_BYPASS_CNTL,%d,dprefclk_bypass\n",
     VAR_3.CLK1_CLK2_BYPASS_CNTL);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK0_BYPASS_CNTL,%d,dispclk_bypass\n",
     VAR_3.CLK1_CLK0_BYPASS_CNTL);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;

  VAR_5 = FUNC_1(VAR_2->pBuf, VAR_6, "CLK1_CLK1_BYPASS_CNTL,%d,dppclk_bypass\n",
     VAR_3.CLK1_CLK1_BYPASS_CNTL);
  VAR_6 -= VAR_5;
  *VAR_2->sum_chars_printed += VAR_5;
  VAR_2->pBuf += VAR_5;
 }
}
