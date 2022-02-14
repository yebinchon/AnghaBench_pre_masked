
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct dvb_frontend {TYPE_2__ ops; struct stv_base* demodulator_priv; } ;
struct stv_base {int tscfgh; int tsgeneral; int i2crpt; int tsspeed; int nr; int regoff; int search_range; int demod_bits; unsigned int cur_scrambling_code; int single; int count; int extclk; struct dvb_frontend fe; int stvlist; struct stv_base* base; int reg_lock; int i2c_lock; int adr; struct i2c_adapter* i2c; int receive_mode; } ;
struct stv0910_cfg {int parallel; int rptlvl; int tsspeed; int clk; int adr; scalar_t__ single; } ;
struct stv {int tscfgh; int tsgeneral; int i2crpt; int tsspeed; int nr; int regoff; int search_range; int demod_bits; unsigned int cur_scrambling_code; int single; int count; int extclk; struct dvb_frontend fe; int stvlist; struct stv* base; int reg_lock; int i2c_lock; int adr; struct i2c_adapter* i2c; int receive_mode; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stv_base*) ;
 struct stv_base* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 struct stv_base* FUNC_5 (struct i2c_adapter*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct stv_base*) ;
 int FUNC_8 (struct stv_base*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

struct dvb_frontend *FUNC_9(struct i2c_adapter *VAR_4,
        struct stv0910_cfg *VAR_5,
        int VAR_6)
{
 struct stv *VAR_7;
 struct stv_base *VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->tscfgh = 0x20 | (VAR_5->parallel ? 0 : 0x40);
 VAR_7->tsgeneral = (VAR_5->parallel == 2) ? 0x02 : 0x00;
 VAR_7->i2crpt = 0x0A | ((VAR_5->rptlvl & 0x07) << 4);

 VAR_7->tsspeed = (VAR_5->tsspeed ? VAR_5->tsspeed : 0x28);
 VAR_7->nr = VAR_6;
 VAR_7->regoff = VAR_7->nr ? 0 : 0x200;
 VAR_7->search_range = 16000000;
 VAR_7->demod_bits = 0x10;
 VAR_7->receive_mode = VAR_1;
 VAR_7->cur_scrambling_code = (~0U);
 VAR_7->single = VAR_5->single ? 1 : 0;

 VAR_8 = FUNC_5(VAR_4, VAR_5->adr);
 if (VAR_8) {
  VAR_8->count++;
  VAR_7->base = VAR_8;
 } else {
  VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_0);
  if (!VAR_8)
   goto fail;
  VAR_8->i2c = VAR_4;
  VAR_8->adr = VAR_5->adr;
  VAR_8->count = 1;
  VAR_8->extclk = VAR_5->clk ? VAR_5->clk : 30000000;

  FUNC_6(&VAR_8->i2c_lock);
  FUNC_6(&VAR_8->reg_lock);
  VAR_7->base = VAR_8;
  if (FUNC_7(VAR_7) < 0) {
   FUNC_0(&VAR_4->dev, "No demod found at adr %02X on %s\n",
     VAR_5->adr, FUNC_1(&VAR_4->dev));
   FUNC_2(VAR_8);
   goto fail;
  }
  FUNC_4(&VAR_8->stvlist, &VAR_3);
 }
 VAR_7->fe.ops = VAR_2;
 VAR_7->fe.demodulator_priv = VAR_7;
 VAR_7->nr = VAR_6;

 FUNC_0(&VAR_4->dev, "%s demod found at adr %02X on %s\n",
   VAR_7->fe.ops.info.name, VAR_5->adr, FUNC_1(&VAR_4->dev));

 FUNC_8(VAR_7);

 return &VAR_7->fe;

fail:
 FUNC_2(VAR_7);
 return ((void*)0);
}
