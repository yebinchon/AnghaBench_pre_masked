
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sg_cnt; } ;
struct TYPE_3__ {scalar_t__ sg_cnt; } ;
struct qup_i2c_dev {int clk_ctl; int is_last; scalar_t__ max_xfer_sg_len; struct i2c_msg* msg; int irq; TYPE_2__ brx; TYPE_1__ btx; scalar_t__ base; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct qup_i2c_dev* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct qup_i2c_dev*) ;
 int FUNC_4 (struct qup_i2c_dev*,struct i2c_msg*) ;
 int FUNC_5 (struct qup_i2c_dev*) ;
 int FUNC_6 (struct qup_i2c_dev*,int ) ;
 int FUNC_7 (struct qup_i2c_dev*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_8, struct i2c_msg *VAR_9,
       int VAR_10)
{
 struct qup_i2c_dev *VAR_11 = FUNC_2(VAR_8);
 int VAR_12 = 0;
 int VAR_13 = 0;

 FUNC_1(VAR_11->irq);
 VAR_12 = FUNC_7(VAR_11);

 if (VAR_12)
  goto out;

 FUNC_8(0, VAR_11->base + VAR_3);
 FUNC_8(0, VAR_11->base + VAR_4);


 FUNC_8(VAR_6 | VAR_0, VAR_11->base + VAR_2);


 FUNC_8((0x3 << 8), VAR_11->base + VAR_5);


 VAR_12 = FUNC_6(VAR_11, VAR_7);
 if (VAR_12)
  goto out;

 FUNC_8(VAR_11->clk_ctl, VAR_11->base + VAR_1);
 FUNC_3(VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  VAR_11->msg = VAR_9 + VAR_13;
  VAR_11->is_last = VAR_13 == (VAR_10 - 1);

  VAR_12 = FUNC_4(VAR_11, VAR_11->msg);
  if (VAR_12)
   break;
  if (VAR_11->btx.sg_cnt > VAR_11->max_xfer_sg_len ||
      VAR_11->brx.sg_cnt > VAR_11->max_xfer_sg_len ||
      VAR_11->is_last) {
   VAR_12 = FUNC_5(VAR_11);
   if (VAR_12)
    break;

   FUNC_3(VAR_11);
  }
 }

out:
 FUNC_0(VAR_11->irq);

 VAR_11->msg = ((void*)0);
 return VAR_12;
}
