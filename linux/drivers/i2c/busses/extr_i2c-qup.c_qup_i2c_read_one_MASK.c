
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qup_i2c_block {int total_tx_len; int total_rx_len; } ;
struct qup_i2c_dev {TYPE_1__* msg; scalar_t__ pos; struct qup_i2c_block blk; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (struct qup_i2c_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct qup_i2c_dev *VAR_0)
{
 struct qup_i2c_block *VAR_1 = &VAR_0->blk;

 VAR_0->pos = 0;
 VAR_1->total_tx_len = 2;
 VAR_1->total_rx_len = VAR_0->msg->len;

 return FUNC_0(VAR_0, 1);
}
