
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {int tx_fifo_free; int is_tx_blk_mode; } ;
struct qup_i2c_dev {int irq; int msg; int out_fifo_sz; int xfer; scalar_t__ base; int clk_ctl; struct qup_i2c_block blk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qup_i2c_dev*,int ) ;
 int FUNC_3 (struct qup_i2c_dev*,int ) ;
 int FUNC_4 (struct qup_i2c_block*) ;
 int FUNC_5 (struct qup_i2c_dev*) ;
 int FUNC_6 (struct qup_i2c_dev*,int ) ;
 int FUNC_7 (struct qup_i2c_dev*) ;
 int FUNC_8 (struct qup_i2c_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct qup_i2c_dev *VAR_4, bool VAR_5)
{
 struct qup_i2c_block *VAR_6 = &VAR_4->blk;
 int VAR_7;

 FUNC_4(VAR_6);
 FUNC_5(VAR_4);
 VAR_7 = FUNC_3(VAR_4, VAR_3);
 if (VAR_7)
  return VAR_7;

 FUNC_10(VAR_4->clk_ctl, VAR_4->base + VAR_1);

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (VAR_7)
  return VAR_7;

 FUNC_9(&VAR_4->xfer);
 FUNC_1(VAR_4->irq);
 if (!VAR_6->is_tx_blk_mode) {
  VAR_6->tx_fifo_free = VAR_4->out_fifo_sz;

  if (VAR_5)
   FUNC_7(VAR_4);
  else
   FUNC_8(VAR_4);
 }

 VAR_7 = FUNC_3(VAR_4, VAR_3);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_6(VAR_4, VAR_4->msg);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_2(VAR_4, VAR_0);

err:
 FUNC_0(VAR_4->irq);
 return VAR_7;
}
