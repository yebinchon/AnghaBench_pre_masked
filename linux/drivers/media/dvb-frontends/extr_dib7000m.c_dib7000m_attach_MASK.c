
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {int ops; struct dib7000m_state* demodulator_priv; } ;
struct dib7000m_state {int revision; int i2c_addr; struct i2c_adapter* i2c_adap; int i2c_master; int timf_default; int i2c_buffer_lock; struct dvb_frontend demod; int cfg; } ;
struct dib7000m_config {TYPE_1__* bw; } ;
struct TYPE_2__ {int timf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dib7000m_state*) ;
 scalar_t__ FUNC_1 (struct dib7000m_state*) ;
 struct dib7000m_config VAR_3 ;
 int FUNC_2 (int *,int ,struct i2c_adapter*,int ) ;
 int FUNC_3 (struct dib7000m_state*) ;
 struct dib7000m_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct dib7000m_config*,int) ;
 int FUNC_6 (int *) ;

struct dvb_frontend * FUNC_7(struct i2c_adapter *VAR_4, u8 VAR_5, struct dib7000m_config *VAR_6)
{
 struct dvb_frontend *VAR_7;
 struct dib7000m_state *VAR_8;
 VAR_8 = FUNC_4(sizeof(struct dib7000m_state), VAR_2);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 FUNC_5(&VAR_8->cfg, VAR_6, sizeof(struct dib7000m_config));
 VAR_8->i2c_adap = VAR_4;
 VAR_8->i2c_addr = VAR_5;

 VAR_7 = &VAR_8->demod;
 VAR_7->demodulator_priv = VAR_8;
 FUNC_5(&VAR_8->demod.ops, &VAR_3, sizeof(struct dvb_frontend_ops));
 FUNC_6(&VAR_8->i2c_buffer_lock);

 VAR_8->timf_default = VAR_6->bw->timf;

 if (FUNC_1(VAR_8) != 0)
  goto error;

 if (VAR_8->revision == 0x4000)
  FUNC_2(&VAR_8->i2c_master, VAR_0, VAR_8->i2c_adap, VAR_8->i2c_addr);
 else
  FUNC_2(&VAR_8->i2c_master, VAR_1, VAR_8->i2c_adap, VAR_8->i2c_addr);

 FUNC_0(VAR_8);

 return VAR_7;

error:
 FUNC_3(VAR_8);
 return ((void*)0);
}
