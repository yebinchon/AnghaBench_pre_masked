
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct nxt200x_state* demodulator_priv; int ops; } ;
struct nxt200x_state {int demod_chip; struct dvb_frontend frontend; scalar_t__ initialised; struct i2c_adapter* i2c; struct nxt200x_config const* config; } ;
struct nxt200x_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int,int*) ;
 int FUNC_1 (struct nxt200x_state*) ;
 struct nxt200x_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (struct nxt200x_state*,int,int*,int) ;
 int FUNC_5 (char*,int,int*) ;
 int FUNC_6 (char*) ;

struct dvb_frontend* FUNC_7(const struct nxt200x_config* VAR_2,
       struct i2c_adapter* VAR_3)
{
 struct nxt200x_state* VAR_4 = ((void*)0);
 u8 VAR_5 [] = {0,0,0,0,0};


 VAR_4 = FUNC_2(sizeof(struct nxt200x_state), VAR_0);
 if (VAR_4 == ((void*)0))
  goto error;


 VAR_4->config = VAR_2;
 VAR_4->i2c = VAR_3;
 VAR_4->initialised = 0;


 FUNC_4(VAR_4, 0x00, VAR_5, 5);
 FUNC_0("NXT info: %*ph\n", 5, VAR_5);


 switch (VAR_5[0]) {
  case 0x04:
   VAR_4->demod_chip = 129;
   FUNC_6("NXT2002 Detected\n");
   break;
  case 0x05:
   VAR_4->demod_chip = 128;
   FUNC_6("NXT2004 Detected\n");
   break;
  default:
   goto error;
 }


 switch (VAR_4->demod_chip) {
  case 129:
   if (VAR_5[0] != 0x04) goto error;
   if (VAR_5[1] != 0x02) goto error;
   if (VAR_5[2] != 0x11) goto error;
   if (VAR_5[3] != 0x20) goto error;
   if (VAR_5[4] != 0x00) goto error;
   break;
  case 128:
   if (VAR_5[0] != 0x05) goto error;
   break;
  default:
   goto error;
 }


 FUNC_3(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;
 return &VAR_4->frontend;

error:
 FUNC_1(VAR_4);
 FUNC_5("Unknown/Unsupported NXT chip: %*ph\n", 5, VAR_5);
 return ((void*)0);
}
