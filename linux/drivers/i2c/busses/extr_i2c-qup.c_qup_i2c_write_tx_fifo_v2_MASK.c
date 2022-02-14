
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int tx_tags_sent; int send_last_word; int tx_fifo_data; scalar_t__ tx_fifo_free; int tx_fifo_data_pos; int cur_blk_len; int cur_data; int tx_tag_len; int cur_tx_tags; } ;
struct qup_i2c_dev {scalar_t__ base; struct qup_i2c_block blk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qup_i2c_dev*,int *,int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qup_i2c_dev *VAR_1)
{
 struct qup_i2c_block *VAR_2 = &VAR_1->blk;

 if (!VAR_2->tx_tags_sent) {
  FUNC_0(VAR_1, &VAR_2->cur_tx_tags,
           &VAR_2->tx_tag_len);
  VAR_2->tx_tags_sent = 1;
 }

 if (VAR_2->send_last_word)
  goto send_last_word;

 FUNC_0(VAR_1, &VAR_2->cur_data, &VAR_2->cur_blk_len);
 if (!VAR_2->cur_blk_len) {
  if (!VAR_2->tx_fifo_data_pos)
   return;

  if (VAR_2->tx_fifo_free)
   goto send_last_word;

  VAR_2->send_last_word = 1;
 }

 return;

send_last_word:
 FUNC_1(VAR_2->tx_fifo_data, VAR_1->base + VAR_0);
}
