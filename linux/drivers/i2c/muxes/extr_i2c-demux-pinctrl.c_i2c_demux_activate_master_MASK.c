
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u32 ;
struct pinctrl_state {int dummy; } ;
typedef struct pinctrl_state pinctrl ;
struct TYPE_11__ {int of_node; TYPE_3__* parent; } ;
struct TYPE_13__ {TYPE_4__ dev; int quirks; int timeout; int retries; int class; struct i2c_demux_pinctrl_priv* algo_data; TYPE_2__* algo; int owner; int name; } ;
struct TYPE_9__ {int functionality; void* master_xfer_atomic; void* master_xfer; } ;
struct i2c_demux_pinctrl_priv {size_t cur_chan; TYPE_7__* dev; TYPE_5__* chan; TYPE_6__ cur_adap; TYPE_2__ algo; int bus_name; } ;
struct TYPE_10__ {int parent; } ;
struct i2c_adapter {int quirks; int timeout; int retries; int class; TYPE_3__ dev; TYPE_1__* algo; } ;
struct TYPE_14__ {int of_node; } ;
struct TYPE_12__ {int chgset; struct i2c_adapter* parent_adap; int parent_np; } ;
struct TYPE_8__ {scalar_t__ master_xfer_atomic; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 int FUNC_1 (struct pinctrl_state*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_7__*,char*,size_t,int) ;
 struct pinctrl_state* FUNC_3 (int ) ;
 int FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct i2c_adapter* FUNC_9 (int ) ;
 struct pinctrl_state* FUNC_10 (struct pinctrl_state*,int ) ;
 int FUNC_11 (struct pinctrl_state*,struct pinctrl_state*) ;
 int FUNC_12 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_demux_pinctrl_priv *VAR_5, u32 VAR_6)
{
 struct i2c_adapter *VAR_7;
 struct pinctrl *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_7(&VAR_5->chan[VAR_6].chgset);
 if (VAR_9)
  goto err;

 VAR_7 = FUNC_9(VAR_5->chan[VAR_6].parent_np);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err_with_revert;
 }






 VAR_8 = FUNC_3(VAR_7->dev.parent);
 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);

  if (VAR_9 != -VAR_1)
   goto err_with_put;
 } else {

  struct pinctrl_state *VAR_10 = FUNC_10(VAR_8, VAR_5->bus_name);

  if (FUNC_0(VAR_10)) {
   VAR_9 = FUNC_1(VAR_10);
   goto err_with_put;
  }
  VAR_9 = FUNC_11(VAR_8, VAR_10);
  if (VAR_9 < 0)
   goto err_with_put;
 }

 VAR_5->chan[VAR_6].parent_adap = VAR_7;
 VAR_5->cur_chan = VAR_6;


 VAR_5->algo.master_xfer = VAR_4;
 if (VAR_7->algo->master_xfer_atomic)
  VAR_5->algo.master_xfer_atomic = VAR_4;
 VAR_5->algo.functionality = VAR_3;

 FUNC_12(VAR_5->cur_adap.name, sizeof(VAR_5->cur_adap.name),
   "i2c-demux (master i2c-%d)", FUNC_4(VAR_7));
 VAR_5->cur_adap.owner = VAR_2;
 VAR_5->cur_adap.algo = &VAR_5->algo;
 VAR_5->cur_adap.algo_data = VAR_5;
 VAR_5->cur_adap.dev.parent = &VAR_7->dev;
 VAR_5->cur_adap.class = VAR_7->class;
 VAR_5->cur_adap.retries = VAR_7->retries;
 VAR_5->cur_adap.timeout = VAR_7->timeout;
 VAR_5->cur_adap.quirks = VAR_7->quirks;
 VAR_5->cur_adap.dev.of_node = VAR_5->dev->of_node;
 VAR_9 = FUNC_5(&VAR_5->cur_adap);
 if (VAR_9 < 0)
  goto err_with_put;

 return 0;

 err_with_put:
 FUNC_6(VAR_7);
 err_with_revert:
 FUNC_8(&VAR_5->chan[VAR_6].chgset);
 err:
 FUNC_2(VAR_5->dev, "failed to setup demux-adapter %d (%d)\n", VAR_6, VAR_9);
 VAR_5->cur_chan = -VAR_0;
 return VAR_9;
}
