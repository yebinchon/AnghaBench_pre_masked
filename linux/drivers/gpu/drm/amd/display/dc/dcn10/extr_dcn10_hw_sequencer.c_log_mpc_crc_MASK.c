
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_hwseq {int dummy; } ;
struct dc_log_buffer_ctx {int dummy; } ;
struct dc_context {int dummy; } ;
struct dc {struct dce_hwseq* hwseq; struct dc_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dc *VAR_5,
 struct dc_log_buffer_ctx *VAR_6)
{
 struct dc_context *VAR_7 = VAR_5->ctx;
 struct dce_hwseq *VAR_8 = VAR_5->hwseq;

 if (FUNC_1(VAR_4))
  FUNC_0("MPC_CRC_RESULT_GB:%d MPC_CRC_RESULT_C:%d MPC_CRC_RESULT_AR:%d\n",
  FUNC_2(VAR_4), FUNC_2(VAR_3), FUNC_2(VAR_2));
 if (FUNC_1(VAR_0))
  FUNC_0("DPP_TOP0_DPP_CRC_VAL_B_A:%d DPP_TOP0_DPP_CRC_VAL_R_G:%d\n",
  FUNC_2(VAR_0), FUNC_2(VAR_1));
}
