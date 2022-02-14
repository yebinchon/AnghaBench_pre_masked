
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atscmh_parade_id; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct lg216x_state* demodulator_priv; int ops; } ;
struct lg216x_state {int fic_ver; int parade_id; int current_frequency; struct dvb_frontend frontend; struct i2c_adapter* i2c_adap; struct lg2160_config const* cfg; } ;
struct lg2160_config {int lg_chip; int i2c_addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct i2c_adapter*) ;
 struct lg216x_state* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int) ;

struct dvb_frontend *FUNC_5(const struct lg2160_config *VAR_3,
       struct i2c_adapter *VAR_4)
{
 struct lg216x_state *VAR_5 = ((void*)0);

 FUNC_2("(%d-%04x)\n",
        VAR_4 ? FUNC_0(VAR_4) : 0,
        VAR_3 ? VAR_3->i2c_addr : 0);

 VAR_5 = FUNC_1(sizeof(struct lg216x_state), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->cfg = VAR_3;
 VAR_5->i2c_adap = VAR_4;
 VAR_5->fic_ver = 0xff;
 VAR_5->parade_id = 0xff;

 switch (VAR_3->lg_chip) {
 default:
  FUNC_3("invalid chip requested, defaulting to LG2160");

 case 129:
  FUNC_4(&VAR_5->frontend.ops, &VAR_1,
         sizeof(struct dvb_frontend_ops));
  break;
 case 128:
  FUNC_4(&VAR_5->frontend.ops, &VAR_2,
         sizeof(struct dvb_frontend_ops));
  break;
 }

 VAR_5->frontend.demodulator_priv = VAR_5;
 VAR_5->current_frequency = -1;

 VAR_5->frontend.dtv_property_cache.atscmh_parade_id = 1;

 return &VAR_5->frontend;
}
