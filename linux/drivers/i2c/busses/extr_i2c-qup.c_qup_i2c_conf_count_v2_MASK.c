
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_block {int total_tx_len; int total_rx_len; scalar_t__ is_rx_blk_mode; scalar_t__ is_tx_blk_mode; } ;
struct qup_i2c_dev {int config_run; scalar_t__ base; struct qup_i2c_block blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qup_i2c_dev *VAR_8)
{
 struct qup_i2c_block *VAR_9 = &VAR_8->blk;
 u32 VAR_10 = VAR_0 | VAR_1;

 if (VAR_9->is_tx_blk_mode)
  FUNC_0(VAR_8->config_run | VAR_9->total_tx_len,
         VAR_8->base + VAR_4);
 else
  FUNC_0(VAR_8->config_run | VAR_9->total_tx_len,
         VAR_8->base + VAR_6);

 if (VAR_9->total_rx_len) {
  if (VAR_9->is_rx_blk_mode)
   FUNC_0(VAR_8->config_run | VAR_9->total_rx_len,
          VAR_8->base + VAR_3);
  else
   FUNC_0(VAR_8->config_run | VAR_9->total_rx_len,
          VAR_8->base + VAR_5);
 } else {
  VAR_10 |= VAR_7;
 }

 FUNC_0(VAR_10, VAR_8->base + VAR_2);
}
