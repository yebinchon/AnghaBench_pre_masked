
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int iccl; int icch; int pos; scalar_t__ dma_buf; struct i2c_msg* msg; scalar_t__ sr; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct i2c_msg*,int) ;
 int FUNC_1 (struct sh_mobile_i2c_data*,int ,int) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static void FUNC_3(struct sh_mobile_i2c_data *VAR_10, struct i2c_msg *VAR_11,
       bool VAR_12)
{
 if (VAR_12) {

  FUNC_1(VAR_10, VAR_2, VAR_4);


  FUNC_1(VAR_10, VAR_2, VAR_3 | VAR_4);


  FUNC_1(VAR_10, VAR_1, VAR_10->iccl & 0xff);
  FUNC_1(VAR_10, VAR_0, VAR_10->icch & 0xff);
 }

 VAR_10->msg = VAR_11;
 VAR_10->pos = -1;
 VAR_10->sr = 0;

 VAR_10->dma_buf = FUNC_0(VAR_10->msg, 8);
 if (VAR_10->dma_buf)
  FUNC_2(VAR_10);


 FUNC_1(VAR_10, VAR_5, VAR_7 | VAR_9 | VAR_6 | VAR_8);
}
