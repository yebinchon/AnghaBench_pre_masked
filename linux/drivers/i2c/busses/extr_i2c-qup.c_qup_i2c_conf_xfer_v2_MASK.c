
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int cur_data; int tx_fifo_free; int is_tx_blk_mode; } ;
struct qup_i2c_dev {int irq; int out_fifo_sz; int xfer; scalar_t__ base; int clk_ctl; int config_run; scalar_t__ is_smbus_read; struct i2c_msg* msg; struct qup_i2c_block blk; } ;
struct i2c_msg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qup_i2c_dev*,int ) ;
 scalar_t__ FUNC_3 (struct i2c_msg*) ;
 int FUNC_4 (struct qup_i2c_block*) ;
 int FUNC_5 (struct qup_i2c_dev*) ;
 int FUNC_6 (struct qup_i2c_dev*,struct i2c_msg*) ;
 int FUNC_7 (struct qup_i2c_dev*) ;
 int FUNC_8 (struct qup_i2c_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(struct qup_i2c_dev *VAR_4, bool VAR_5, bool VAR_6,
       bool VAR_7)
{
 struct qup_i2c_block *VAR_8 = &VAR_4->blk;
 struct i2c_msg *VAR_9 = VAR_4->msg;
 int VAR_10;






 if (FUNC_3(VAR_9)) {
  if (VAR_4->is_smbus_read) {





   VAR_8->cur_data += 1;
   VAR_6 = 0;
  } else {
   VAR_7 = 0;
  }
 }

 VAR_4->config_run = VAR_6 ? 0 : VAR_1;

 FUNC_4(VAR_8);
 FUNC_5(VAR_4);


 if (VAR_6) {
  VAR_10 = FUNC_2(VAR_4, VAR_3);
  if (VAR_10)
   return VAR_10;

  FUNC_10(VAR_4->clk_ctl, VAR_4->base + VAR_0);

  VAR_10 = FUNC_2(VAR_4, VAR_2);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_9(&VAR_4->xfer);
 FUNC_1(VAR_4->irq);




 if (!VAR_8->is_tx_blk_mode) {
  VAR_8->tx_fifo_free = VAR_4->out_fifo_sz;

  if (VAR_5)
   FUNC_7(VAR_4);
  else
   FUNC_8(VAR_4);
 }

 VAR_10 = FUNC_2(VAR_4, VAR_3);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_6(VAR_4, VAR_9);
 if (VAR_10)
  goto err;


 if (VAR_7) {
  VAR_10 = FUNC_2(VAR_4, VAR_2);
  if (VAR_10)
   goto err;
 }

err:
 FUNC_0(VAR_4->irq);
 return VAR_10;
}
