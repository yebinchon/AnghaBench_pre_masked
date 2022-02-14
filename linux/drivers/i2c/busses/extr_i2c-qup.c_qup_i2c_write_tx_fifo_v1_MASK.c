
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_block {scalar_t__ tx_fifo_free; } ;
struct qup_i2c_dev {int pos; scalar_t__ base; struct i2c_msg* msg; struct qup_i2c_block blk; } ;
struct i2c_msg {int len; int* buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct qup_i2c_dev *VAR_5)
{
 struct qup_i2c_block *VAR_6 = &VAR_5->blk;
 struct i2c_msg *VAR_7 = VAR_5->msg;
 u32 VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9;
 int VAR_10;
 u32 VAR_11;

 if (VAR_5->pos == 0) {
  VAR_11 = VAR_3 | VAR_8;
  VAR_10 = 1;
  VAR_6->tx_fifo_free--;
 } else {
  VAR_11 = 0;
  VAR_10 = 0;
 }

 while (VAR_6->tx_fifo_free && VAR_5->pos < VAR_7->len) {
  if (VAR_5->pos == VAR_7->len - 1)
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_2;

  if (VAR_10 & 1)
   VAR_11 |= (VAR_9 | VAR_7->buf[VAR_5->pos]) << VAR_0;
  else
   VAR_11 = VAR_9 | VAR_7->buf[VAR_5->pos];


  if (VAR_10 & 1 || VAR_5->pos == VAR_7->len - 1)
   FUNC_1(VAR_11, VAR_5->base + VAR_1);

  VAR_5->pos++;
  VAR_10++;
  VAR_6->tx_fifo_free--;
 }
}
