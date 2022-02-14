
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct dvb_frontend {struct mxl_base* demodulator_priv; int ops; } ;
struct mxl_base {int tuner_in_use; int count; int demod_num; int* xbar; struct dvb_frontend fe; int mxls; int mxl; int mxllist; struct mxl_base* base; int tune_lock; int status_lock; int i2c_lock; int type; int adr; struct i2c_adapter* i2c; int * i2cdev; void* tuner; void* demod; } ;
struct mxl5xx_cfg {int type; int adr; } ;
struct mxl {int tuner_in_use; int count; int demod_num; int* xbar; struct dvb_frontend fe; int mxls; int mxl; int mxllist; struct mxl* base; int tune_lock; int status_lock; int i2c_lock; int type; int adr; struct i2c_adapter* i2c; int * i2cdev; void* tuner; void* demod; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mxl_base*) ;
 struct mxl_base* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct mxl_base* FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct mxl_base*,struct mxl5xx_cfg*) ;
 int FUNC_7 (struct dvb_frontend*,int) ;

struct dvb_frontend *FUNC_8(struct i2c_adapter *VAR_3,
 struct mxl5xx_cfg *VAR_4, u32 VAR_5, u32 VAR_6,
 int (**VAR_7)(struct dvb_frontend *, int))
{
 struct mxl *VAR_8;
 struct mxl_base *VAR_9;

 VAR_8 = FUNC_2(sizeof(struct mxl), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->demod = VAR_5;
 VAR_8->tuner = VAR_6;
 VAR_8->tuner_in_use = 0xffffffff;
 VAR_8->i2cdev = &VAR_3->dev;

 VAR_9 = FUNC_4(VAR_3, VAR_4->adr);
 if (VAR_9) {
  VAR_9->count++;
  if (VAR_9->count > VAR_9->demod_num)
   goto fail;
  VAR_8->base = VAR_9;
 } else {
  VAR_9 = FUNC_2(sizeof(struct mxl_base), VAR_0);
  if (!VAR_9)
   goto fail;
  VAR_9->i2c = VAR_3;
  VAR_9->adr = VAR_4->adr;
  VAR_9->type = VAR_4->type;
  VAR_9->count = 1;
  FUNC_5(&VAR_9->i2c_lock);
  FUNC_5(&VAR_9->status_lock);
  FUNC_5(&VAR_9->tune_lock);
  FUNC_0(&VAR_9->mxls);

  VAR_8->base = VAR_9;
  if (FUNC_6(VAR_8, VAR_4) < 0) {
   FUNC_1(VAR_9);
   goto fail;
  }
  FUNC_3(&VAR_9->mxllist, &VAR_2);
 }
 VAR_8->fe.ops = VAR_1;
 VAR_8->xbar[0] = 4;
 VAR_8->xbar[1] = VAR_5;
 VAR_8->xbar[2] = 8;
 VAR_8->fe.demodulator_priv = VAR_8;
 *VAR_7 = FUNC_7;

 FUNC_3(&VAR_8->mxl, &VAR_9->mxls);
 return &VAR_8->fe;

fail:
 FUNC_1(VAR_8);
 return ((void*)0);
}
