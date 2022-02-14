
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rn_clk_internal {void* CLK1_CLK0_BYPASS_CNTL; void* CLK1_CLK0_CURRENT_CNT; void* CLK1_CLK2_BYPASS_CNTL; void* CLK1_CLK2_CURRENT_CNT; void* CLK1_CLK1_BYPASS_CNTL; void* CLK1_CLK1_CURRENT_CNT; void* CLK1_CLK3_ALLOW_DS; void* CLK1_CLK3_DS_CNTL; void* CLK1_CLK3_BYPASS_CNTL; void* CLK1_CLK3_CURRENT_CNT; } ;
struct clk_mgr_internal {int dummy; } ;
struct clk_mgr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 struct clk_mgr_internal* FUNC_1 (struct clk_mgr*) ;

__attribute__((used)) static void FUNC_2(struct rn_clk_internal *VAR_10, struct clk_mgr *VAR_11)
{
 struct clk_mgr_internal *VAR_12 = FUNC_1(VAR_11);

 VAR_10->CLK1_CLK3_CURRENT_CNT = FUNC_0(VAR_8);
 VAR_10->CLK1_CLK3_BYPASS_CNTL = FUNC_0(VAR_7);

 VAR_10->CLK1_CLK3_DS_CNTL = FUNC_0(VAR_9);
 VAR_10->CLK1_CLK3_ALLOW_DS = FUNC_0(VAR_6);

 VAR_10->CLK1_CLK1_CURRENT_CNT = FUNC_0(VAR_3);
 VAR_10->CLK1_CLK1_BYPASS_CNTL = FUNC_0(VAR_2);

 VAR_10->CLK1_CLK2_CURRENT_CNT = FUNC_0(VAR_5);
 VAR_10->CLK1_CLK2_BYPASS_CNTL = FUNC_0(VAR_4);

 VAR_10->CLK1_CLK0_CURRENT_CNT = FUNC_0(VAR_1);
 VAR_10->CLK1_CLK0_BYPASS_CNTL = FUNC_0(VAR_0);
}
