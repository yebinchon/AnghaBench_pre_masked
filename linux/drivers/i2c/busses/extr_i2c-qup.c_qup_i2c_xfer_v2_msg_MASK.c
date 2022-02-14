
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qup_i2c_block {unsigned int count; unsigned int pos; unsigned int cur_blk_len; int* cur_data; int rx_tag_len; unsigned int total_rx_len; int data_len; scalar_t__ tx_tag_len; scalar_t__ total_tx_len; int cur_tx_tags; int tags; } ;
struct qup_i2c_dev {int is_smbus_read; scalar_t__ blk_xfer_limit; int is_last; struct i2c_msg* msg; struct qup_i2c_block blk; } ;
struct i2c_msg {int* buf; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (struct qup_i2c_dev*,int,int,int) ;
 unsigned int FUNC_2 (struct qup_i2c_dev*) ;
 int FUNC_3 (struct qup_i2c_dev*,struct i2c_msg*) ;
 scalar_t__ FUNC_4 (int ,struct qup_i2c_dev*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_5(struct qup_i2c_dev *VAR_4, int VAR_5, bool VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8, VAR_9;
 struct i2c_msg *VAR_10 = VAR_4->msg;
 struct qup_i2c_block *VAR_11 = &VAR_4->blk;
 u8 *VAR_12 = VAR_10->buf;

 VAR_4->blk_xfer_limit = VAR_6 ? VAR_3 : VAR_2;
 FUNC_3(VAR_4, VAR_10);

 for (VAR_9 = 0; VAR_9 < VAR_11->count; VAR_9++) {
  VAR_8 = FUNC_2(VAR_4);
  VAR_11->pos = VAR_9;
  VAR_11->cur_tx_tags = VAR_11->tags;
  VAR_11->cur_blk_len = VAR_8;
  VAR_11->tx_tag_len =
   FUNC_4(VAR_11->cur_tx_tags, VAR_4, VAR_4->msg);

  VAR_11->cur_data = VAR_12;

  if (VAR_6) {
   VAR_11->total_tx_len = VAR_11->tx_tag_len;
   VAR_11->rx_tag_len = 2;
   VAR_11->total_rx_len = VAR_11->rx_tag_len + VAR_8;
  } else {
   VAR_11->total_tx_len = VAR_11->tx_tag_len + VAR_8;
   VAR_11->total_rx_len = 0;
  }

  VAR_7 = FUNC_1(VAR_4, VAR_6, !VAR_5 && !VAR_9,
        !VAR_4->is_last || VAR_9 < VAR_11->count - 1);
  if (VAR_7)
   return VAR_7;


  if (FUNC_0(VAR_10) && VAR_10->len == 1 &&
      !VAR_4->is_smbus_read) {
   if (VAR_10->buf[0] > VAR_1)
    return -VAR_0;

   VAR_10->len = VAR_10->buf[0];
   VAR_4->is_smbus_read = 1;
   VAR_7 = FUNC_5(VAR_4, VAR_5, 1);
   VAR_4->is_smbus_read = 0;
   if (VAR_7)
    return VAR_7;

   VAR_10->len += 1;
  }

  VAR_12 += VAR_8;
  VAR_11->data_len -= VAR_4->blk_xfer_limit;
 }

 return VAR_7;
}
