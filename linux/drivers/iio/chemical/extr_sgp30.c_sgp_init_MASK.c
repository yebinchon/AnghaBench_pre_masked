
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgp_data {int measure_interval_jiffies; int product_id; int iaq_defval_skip_jiffies; void* measure_gas_signals_cmd; void* measure_iaq_cmd; int iaq_buffer_state; scalar_t__ iaq_init_start_jiffies; int iaq_init_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;

 void* VAR_2 ;
 int VAR_3 ;

 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct sgp_data*) ;

__attribute__((used)) static void FUNC_1(struct sgp_data *VAR_8)
{
 VAR_8->iaq_init_cmd = VAR_6;
 VAR_8->iaq_init_start_jiffies = 0;
 VAR_8->iaq_buffer_state = VAR_1;
 switch (FUNC_0(VAR_8)) {
 case 129:
  VAR_8->measure_interval_jiffies = VAR_3 * VAR_0;
  VAR_8->measure_iaq_cmd = VAR_7;
  VAR_8->measure_gas_signals_cmd = VAR_2;
  VAR_8->product_id = 129;
  VAR_8->iaq_defval_skip_jiffies = 15 * VAR_0;
  break;
 case 128:
  VAR_8->measure_interval_jiffies = VAR_5 * VAR_0;
  VAR_8->measure_iaq_cmd = VAR_4;
  VAR_8->measure_gas_signals_cmd = VAR_4;
  VAR_8->product_id = 128;
  VAR_8->iaq_defval_skip_jiffies =
   43 * VAR_8->measure_interval_jiffies;
  break;
 };
}
