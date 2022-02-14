
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct cx24117_state* demodulator_priv; int ops; } ;
struct cx24117_state {int demod; struct dvb_frontend frontend; struct cx24117_priv* priv; } ;
struct cx24117_priv {struct i2c_adapter* i2c; int fe_lock; int demod_address; } ;
struct cx24117_config {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24117_priv**,struct i2c_adapter*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cx24117_priv*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ,int) ;
 struct cx24117_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;

struct dvb_frontend *FUNC_7(const struct cx24117_config *VAR_3,
 struct i2c_adapter *VAR_4)
{
 struct cx24117_state *VAR_5 = ((void*)0);
 struct cx24117_priv *VAR_6 = ((void*)0);
 int VAR_7 = 0;


 VAR_7 = FUNC_0(&VAR_6, VAR_4, VAR_3->demod_address);

 switch (VAR_7) {
 case 0:
  FUNC_2(&VAR_4->dev,
   "%s: Error attaching frontend %d\n",
   VAR_1, VAR_7);
  goto error1;
  break;
 case 1:

  VAR_6->i2c = VAR_4;
  VAR_6->demod_address = VAR_3->demod_address;
  FUNC_6(&VAR_6->fe_lock);
  break;
 default:

  break;
 }


 VAR_5 = FUNC_4(sizeof(struct cx24117_state), VAR_0);
 if (VAR_5 == ((void*)0))
  goto error2;

 VAR_5->demod = VAR_7 - 1;
 VAR_5->priv = VAR_6;

 FUNC_3(&VAR_5->priv->i2c->dev,
  "%s: Attaching frontend %d\n",
  VAR_1, VAR_5->demod);


 FUNC_5(&VAR_5->frontend.ops, &VAR_2,
  sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;
 return &VAR_5->frontend;

error2:
 FUNC_1(VAR_6);
error1:
 return ((void*)0);
}
