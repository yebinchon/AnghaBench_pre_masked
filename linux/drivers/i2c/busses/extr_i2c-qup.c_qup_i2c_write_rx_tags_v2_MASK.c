
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int tx_fifo_data; scalar_t__ tx_fifo_data_pos; int tx_tag_len; int cur_tx_tags; } ;
struct qup_i2c_dev {scalar_t__ base; struct qup_i2c_block blk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qup_i2c_dev*,int *,int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qup_i2c_dev *VAR_1)
{
 struct qup_i2c_block *VAR_2 = &VAR_1->blk;

 FUNC_0(VAR_1, &VAR_2->cur_tx_tags, &VAR_2->tx_tag_len);
 if (VAR_2->tx_fifo_data_pos)
  FUNC_1(VAR_2->tx_fifo_data, VAR_1->base + VAR_0);
}
