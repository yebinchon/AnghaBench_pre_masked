
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_block {int rx_bytes_read; scalar_t__ fifo_available; } ;
struct qup_i2c_dev {scalar_t__ pos; scalar_t__ base; struct i2c_msg* msg; struct qup_i2c_block blk; } ;
struct i2c_msg {scalar_t__ len; int* buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qup_i2c_dev *VAR_2)
{
 struct qup_i2c_block *VAR_3 = &VAR_2->blk;
 struct i2c_msg *VAR_4 = VAR_2->msg;
 u32 VAR_5 = 0;
 int VAR_6 = 0;

 while (VAR_3->fifo_available && VAR_2->pos < VAR_4->len) {
  if ((VAR_6 & 1) == 0) {

   VAR_5 = FUNC_0(VAR_2->base + VAR_0);
   VAR_4->buf[VAR_2->pos++] = VAR_5 & 0xFF;
  } else {
   VAR_4->buf[VAR_2->pos++] = VAR_5 >> VAR_1;
  }
  VAR_6++;
  VAR_3->fifo_available--;
 }

 if (VAR_2->pos == VAR_4->len)
  VAR_3->rx_bytes_read = 1;
}
