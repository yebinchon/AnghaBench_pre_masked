
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct cx24120_state* demodulator_priv; int ops; } ;
struct cx24120_state {struct dvb_frontend frontend; scalar_t__ cold_init; struct i2c_adapter* i2c; struct cx24120_config const* config; } ;
struct cx24120_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx24120_state*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct cx24120_state*) ;
 struct cx24120_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;

struct dvb_frontend *FUNC_6(const struct cx24120_config *VAR_3,
        struct i2c_adapter *VAR_4)
{
 struct cx24120_state *VAR_5;
 int VAR_6;

 FUNC_2("Conexant cx24120/cx24118 - DVBS/S2 Satellite demod/tuner\n");
 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_1("Unable to allocate memory for cx24120_state\n");
  goto error;
 }


 VAR_5->config = VAR_3;
 VAR_5->i2c = VAR_4;


 VAR_6 = FUNC_0(VAR_5, VAR_0);
 switch (VAR_6) {
 case 0x07:
  FUNC_2("Demod cx24120 rev. 0x07 detected.\n");
  break;
 case 0x05:
  FUNC_2("Demod cx24120 rev. 0x05 detected.\n");
  break;
 default:
  FUNC_1("Unsupported demod revision: 0x%x detected.\n", VAR_6);
  goto error;
 }


 VAR_5->cold_init = 0;
 FUNC_5(&VAR_5->frontend.ops, &VAR_2,
        sizeof(struct dvb_frontend_ops));
 VAR_5->frontend.demodulator_priv = VAR_5;

 FUNC_2("Conexant cx24120/cx24118 attached.\n");
 return &VAR_5->frontend;

error:
 FUNC_3(VAR_5);
 return ((void*)0);
}
