
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_adma_desc_slot {struct iop3xx_desc_aau* hw_desc; } ;
struct iop3xx_aau_desc_ctrl {int zero_result_err; scalar_t__ zero_result_en; scalar_t__ tx_complete; } ;
struct iop3xx_desc_aau {struct iop3xx_aau_desc_ctrl desc_ctrl_field; } ;
typedef enum sum_check_flags { ____Placeholder_sum_check_flags } sum_check_flags ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline enum sum_check_flags
FUNC_1(struct iop_adma_desc_slot *VAR_1)
{
 struct iop3xx_desc_aau *VAR_2 = VAR_1->hw_desc;
 struct iop3xx_aau_desc_ctrl VAR_3 = VAR_2->desc_ctrl_field;

 FUNC_0(!(VAR_3.tx_complete && VAR_3.zero_result_en));
 return VAR_3.zero_result_err << VAR_0;
}
