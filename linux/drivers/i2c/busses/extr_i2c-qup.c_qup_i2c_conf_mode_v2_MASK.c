
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_block {scalar_t__ is_rx_blk_mode; scalar_t__ is_tx_blk_mode; } ;
struct qup_i2c_dev {scalar_t__ base; struct qup_i2c_block blk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qup_i2c_dev *VAR_8)
{
 struct qup_i2c_block *VAR_9 = &VAR_8->blk;
 u32 VAR_10 = VAR_7;

 if (VAR_9->is_tx_blk_mode) {
  VAR_10 |= VAR_6;
  FUNC_0(0, VAR_8->base + VAR_5);
 } else {
  FUNC_0(0, VAR_8->base + VAR_3);
 }

 if (VAR_9->is_rx_blk_mode) {
  VAR_10 |= VAR_0;
  FUNC_0(0, VAR_8->base + VAR_4);
 } else {
  FUNC_0(0, VAR_8->base + VAR_2);
 }

 FUNC_0(VAR_10, VAR_8->base + VAR_1);
}
