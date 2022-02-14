
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; int ops; } ;
struct lgdt3306a_state {int current_frequency; int current_modulation; struct dvb_frontend frontend; struct i2c_adapter* i2c_adap; struct lgdt3306a_config const* cfg; } ;
struct lgdt3306a_config {int i2c_addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct lgdt3306a_state*) ;
 struct lgdt3306a_state* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_6 (struct lgdt3306a_state*) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (char*,...) ;

struct dvb_frontend *FUNC_9(const struct lgdt3306a_config *VAR_2,
          struct i2c_adapter *VAR_3)
{
 struct lgdt3306a_state *VAR_4 = ((void*)0);
 int VAR_5;
 u8 VAR_6;

 FUNC_0("(%d-%04x)\n",
        VAR_3 ? FUNC_1(VAR_3) : 0,
        VAR_2 ? VAR_2->i2c_addr : 0);

 VAR_4 = FUNC_3(sizeof(struct lgdt3306a_state), VAR_0);
 if (VAR_4 == ((void*)0))
  goto fail;

 VAR_4->cfg = VAR_2;
 VAR_4->i2c_adap = VAR_3;

 FUNC_7(&VAR_4->frontend.ops, &VAR_1,
        sizeof(struct dvb_frontend_ops));
 VAR_4->frontend.demodulator_priv = VAR_4;




 VAR_5 = FUNC_5(VAR_4, 0x0000, &VAR_6);
 if (FUNC_4(VAR_5))
  goto fail;
 if ((VAR_6 & 0x74) != 0x74) {
  FUNC_8("expected 0x74, got 0x%x\n", (VAR_6 & 0x74));




 }
 VAR_5 = FUNC_5(VAR_4, 0x0001, &VAR_6);
 if (FUNC_4(VAR_5))
  goto fail;
 if ((VAR_6 & 0xf6) != 0xc6) {
  FUNC_8("expected 0xc6, got 0x%x\n", (VAR_6 & 0xf6));




 }
 VAR_5 = FUNC_5(VAR_4, 0x0002, &VAR_6);
 if (FUNC_4(VAR_5))
  goto fail;
 if ((VAR_6 & 0x73) != 0x03) {
  FUNC_8("expected 0x03, got 0x%x\n", (VAR_6 & 0x73));




 }

 VAR_4->current_frequency = -1;
 VAR_4->current_modulation = -1;

 FUNC_6(VAR_4);

 return &VAR_4->frontend;

fail:
 FUNC_8("unable to detect LGDT3306A hardware\n");
 FUNC_2(VAR_4);
 return ((void*)0);
}
