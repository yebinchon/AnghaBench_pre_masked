
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qup_i2c_block {scalar_t__ total_rx_len; scalar_t__ total_tx_len; } ;
struct qup_i2c_dev {scalar_t__ pos; struct qup_i2c_block blk; struct i2c_msg* msg; } ;
struct i2c_msg {scalar_t__ len; } ;


 int FUNC_0 (struct qup_i2c_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct qup_i2c_dev *VAR_0)
{
 struct i2c_msg *VAR_1 = VAR_0->msg;
 struct qup_i2c_block *VAR_2 = &VAR_0->blk;

 VAR_0->pos = 0;
 VAR_2->total_tx_len = VAR_1->len + 1;
 VAR_2->total_rx_len = 0;

 return FUNC_0(VAR_0, 0);
}
