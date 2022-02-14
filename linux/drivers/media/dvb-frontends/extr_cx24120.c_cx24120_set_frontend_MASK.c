
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dtv_frontend_properties {int delivery_system; int symbol_rate; int pilot; int fec_inner; int modulation; int inversion; int frequency; } ;
struct dvb_frontend {struct cx24120_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_6__ {int frequency; int pilot; int pilot_val; int symbol_rate; int clkdiv; int ratediv; int fec_mask; int fec_val; int inversion; int inversion_val; int fec; int modulation; int delsys; } ;
struct TYPE_4__ {int delsys; int pilot; int frequency; int modulation; } ;
struct cx24120_state {int need_clock_set; TYPE_3__ dcur; TYPE_2__* i2c; TYPE_1__ dnxt; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_2 (struct cx24120_state*,int ) ;
 int FUNC_3 (struct cx24120_state*,int ,int ) ;
 int FUNC_4 (struct cx24120_state*,int ) ;
 int FUNC_5 (struct cx24120_state*,int ) ;
 int FUNC_6 (struct cx24120_state*,int ) ;
 int FUNC_7 (struct cx24120_state*,int ,int) ;
 int FUNC_8 (int *,char*,...) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_5)
{
 struct dtv_frontend_properties *VAR_6 = &VAR_5->dtv_property_cache;
 struct cx24120_state *VAR_7 = VAR_5->demodulator_priv;
 struct cx24120_cmd VAR_8;
 int VAR_9;

 switch (VAR_6->delivery_system) {
 case 128:
  FUNC_8(&VAR_7->i2c->dev, "DVB-S2\n");
  break;
 case 129:
  FUNC_8(&VAR_7->i2c->dev, "DVB-S\n");
  break;
 default:
  FUNC_8(&VAR_7->i2c->dev,
   "delivery system(%d) not supported\n",
   VAR_6->delivery_system);
  return -VAR_4;
 }

 VAR_7->dnxt.delsys = VAR_6->delivery_system;
 VAR_7->dnxt.modulation = VAR_6->modulation;
 VAR_7->dnxt.frequency = VAR_6->frequency;
 VAR_7->dnxt.pilot = VAR_6->pilot;

 VAR_9 = FUNC_4(VAR_7, VAR_6->inversion);
 if (VAR_9 != 0)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_6->modulation, VAR_6->fec_inner);
 if (VAR_9 != 0)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_7, VAR_6->pilot);
 if (VAR_9 != 0)
  return VAR_9;

 VAR_9 = FUNC_6(VAR_7, VAR_6->symbol_rate);
 if (VAR_9 != 0)
  return VAR_9;


 FUNC_0(VAR_5);

 FUNC_8(&VAR_7->i2c->dev,
  "delsys      = %d\n", VAR_7->dcur.delsys);
 FUNC_8(&VAR_7->i2c->dev,
  "modulation  = %d\n", VAR_7->dcur.modulation);
 FUNC_8(&VAR_7->i2c->dev,
  "frequency   = %d\n", VAR_7->dcur.frequency);
 FUNC_8(&VAR_7->i2c->dev,
  "pilot       = %d (val = 0x%02x)\n",
  VAR_7->dcur.pilot, VAR_7->dcur.pilot_val);
 FUNC_8(&VAR_7->i2c->dev,
  "symbol_rate = %d (clkdiv/ratediv = 0x%02x/0x%02x)\n",
   VAR_7->dcur.symbol_rate,
   VAR_7->dcur.clkdiv, VAR_7->dcur.ratediv);
 FUNC_8(&VAR_7->i2c->dev,
  "FEC         = %d (mask/val = 0x%02x/0x%02x)\n",
  VAR_7->dcur.fec, VAR_7->dcur.fec_mask, VAR_7->dcur.fec_val);
 FUNC_8(&VAR_7->i2c->dev,
  "Inversion   = %d (val = 0x%02x)\n",
  VAR_7->dcur.inversion, VAR_7->dcur.inversion_val);


 VAR_7->need_clock_set = 1;


 VAR_8.id = VAR_0;
 VAR_8.len = 15;
 VAR_8.arg[0] = 0;
 VAR_8.arg[1] = (VAR_7->dcur.frequency & 0xff0000) >> 16;
 VAR_8.arg[2] = (VAR_7->dcur.frequency & 0x00ff00) >> 8;
 VAR_8.arg[3] = (VAR_7->dcur.frequency & 0x0000ff);
 VAR_8.arg[4] = ((VAR_7->dcur.symbol_rate / 1000) & 0xff00) >> 8;
 VAR_8.arg[5] = ((VAR_7->dcur.symbol_rate / 1000) & 0x00ff);
 VAR_8.arg[6] = VAR_7->dcur.inversion;
 VAR_8.arg[7] = VAR_7->dcur.fec_val | VAR_7->dcur.pilot_val;
 VAR_8.arg[8] = VAR_3 >> 8;
 VAR_8.arg[9] = VAR_3 & 0xff;
 VAR_8.arg[10] = 0;
 VAR_8.arg[11] = VAR_7->dcur.fec_mask;
 VAR_8.arg[12] = VAR_7->dcur.ratediv;
 VAR_8.arg[13] = VAR_7->dcur.clkdiv;
 VAR_8.arg[14] = 0;


 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9 != 0)
  return VAR_9;


 VAR_9 = FUNC_7(VAR_7, VAR_1, VAR_7->dcur.clkdiv);
 VAR_9 = FUNC_2(VAR_7, VAR_2);
 VAR_9 &= 0xfffffff0;
 VAR_9 |= VAR_7->dcur.ratediv;
 VAR_9 = FUNC_7(VAR_7, VAR_2, VAR_9);

 return 0;
}
