
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_len; } ;
struct qup_i2c_dev {int blk_xfer_limit; TYPE_1__ blk; } ;



__attribute__((used)) static int FUNC_0(struct qup_i2c_dev *VAR_0)
{
 int VAR_1;

 if (VAR_0->blk.data_len > VAR_0->blk_xfer_limit)
  VAR_1 = VAR_0->blk_xfer_limit;
 else
  VAR_1 = VAR_0->blk.data_len;

 return VAR_1;
}
