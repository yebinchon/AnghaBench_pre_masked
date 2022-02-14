
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int data_len; scalar_t__ pos; } ;
struct qup_i2c_dev {int blk_xfer_limit; TYPE_1__ blk; } ;
struct i2c_msg {int len; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct qup_i2c_dev *VAR_0,
     struct i2c_msg *VAR_1)
{
 VAR_0->blk.pos = 0;
 VAR_0->blk.data_len = VAR_1->len;
 VAR_0->blk.count = FUNC_0(VAR_1->len, VAR_0->blk_xfer_limit);
}
