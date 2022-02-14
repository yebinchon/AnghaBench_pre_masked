
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct i2c_msg {int addr; int len; scalar_t__* buf; int flags; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct dvb_pll_priv {int pll_i2c_address; int nr; struct dvb_pll_desc const* pll_desc; struct i2c_adapter* i2c; } ;
struct dvb_pll_desc {int name; int sleepdata; int initdata; int max; int min; } ;
struct TYPE_4__ {int frequency_max_hz; int frequency_min_hz; int name; } ;
struct TYPE_6__ {int * sleep; int * init; TYPE_1__ info; } ;
struct TYPE_5__ {TYPE_3__ tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {struct dvb_pll_priv* tuner_priv; TYPE_2__ ops; } ;


 unsigned int FUNC_0 (struct dvb_pll_desc**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,size_t,...) ;
 int VAR_5 ;
 int FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct i2c_adapter*,struct i2c_msg*,int) ;
 unsigned int* VAR_6 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (scalar_t__*) ;
 scalar_t__* FUNC_8 (int,int ) ;
 struct dvb_pll_priv* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_3__*,int *,int) ;
 int VAR_7 ;
 struct dvb_pll_desc** VAR_8 ;
 int FUNC_11 (char*,unsigned int,int,...) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct dvb_frontend*,int) ;
 int FUNC_14 (struct dvb_frontend*,int) ;

struct dvb_frontend *FUNC_15(struct dvb_frontend *VAR_9, int VAR_10,
        struct i2c_adapter *VAR_11,
        unsigned int VAR_12)
{
 u8 *VAR_13;
 struct i2c_msg VAR_14 = { .addr = VAR_10, .flags = VAR_3, .len = 1 };
 struct dvb_pll_priv *VAR_15 = ((void*)0);
 int VAR_16;
 const struct dvb_pll_desc *VAR_17;
 int VAR_18;

 VAR_13 = FUNC_8(1, VAR_2);
 if (!VAR_13)
  return ((void*)0);

 VAR_13[0] = 0;
 VAR_14.buf = VAR_13;

 VAR_18 = FUNC_5(&VAR_7, 0, VAR_0, VAR_2);
 if (VAR_18 < 0) {
  FUNC_7(VAR_13);
  return ((void*)0);
 }

 if (VAR_6[VAR_18] > VAR_1 && VAR_6[VAR_18] < FUNC_0(VAR_8))
  VAR_12 = VAR_6[VAR_18];

 FUNC_1(VAR_12 < 1 || VAR_12 >= FUNC_0(VAR_8));

 VAR_17 = VAR_8[VAR_12];

 if (VAR_11 != ((void*)0)) {
  if (VAR_9->ops.i2c_gate_ctrl)
   VAR_9->ops.i2c_gate_ctrl(VAR_9, 1);

  VAR_16 = FUNC_4 (VAR_11, &VAR_14, 1);
  if (VAR_16 != 1)
   goto out;
  if (VAR_9->ops.i2c_gate_ctrl)
        VAR_9->ops.i2c_gate_ctrl(VAR_9, 0);
 }

 VAR_15 = FUNC_9(sizeof(struct dvb_pll_priv), VAR_2);
 if (!VAR_15)
  goto out;

 VAR_15->pll_i2c_address = VAR_10;
 VAR_15->i2c = VAR_11;
 VAR_15->pll_desc = VAR_17;
 VAR_15->nr = VAR_18;

 FUNC_10(&VAR_9->ops.tuner_ops, &VAR_5,
        sizeof(struct dvb_tuner_ops));

 FUNC_12(VAR_9->ops.tuner_ops.info.name, VAR_17->name,
  sizeof(VAR_9->ops.tuner_ops.info.name));

 VAR_9->ops.tuner_ops.info.frequency_min_hz = VAR_17->min;
 VAR_9->ops.tuner_ops.info.frequency_max_hz = VAR_17->max;

 FUNC_2("%s tuner, frequency range: %u...%u\n",
  VAR_17->name, VAR_17->min, VAR_17->max);

 if (!VAR_17->initdata)
  VAR_9->ops.tuner_ops.init = ((void*)0);
 if (!VAR_17->sleepdata)
  VAR_9->ops.tuner_ops.sleep = ((void*)0);

 VAR_9->tuner_priv = VAR_15;

 if ((VAR_4) || (VAR_6[VAR_15->nr] == VAR_12)) {
  FUNC_2("dvb-pll[%d]", VAR_15->nr);
  if (VAR_11 != ((void*)0))
   FUNC_11(" %d-%04x", FUNC_3(VAR_11), VAR_10);
  FUNC_11(": id# %d (%s) attached, %s\n", VAR_12, VAR_17->name,
         VAR_6[VAR_15->nr] == VAR_12 ?
    "insmod option" : "autodetected");
 }

 FUNC_7(VAR_13);

 return VAR_9;
out:
 FUNC_7(VAR_13);
 FUNC_6(&VAR_7, VAR_18);

 return ((void*)0);
}
