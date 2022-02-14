
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int out; int in; } ;
struct i3c_priv_xfer {scalar_t__ len; int err; TYPE_3__ data; scalar_t__ rnw; } ;
struct i3c_master_controller {int dummy; } ;
struct TYPE_5__ {int dyn_addr; } ;
struct i3c_dev_desc {TYPE_2__ info; } ;
struct cdns_i3c_xfer {int ret; struct cdns_i3c_cmd* cmds; int comp; } ;
struct TYPE_4__ {int cmdfifodepth; int cmdrfifodepth; int rxfifodepth; int txfifodepth; } ;
struct cdns_i3c_master {TYPE_1__ caps; } ;
struct cdns_i3c_cmd {int cmd0; scalar_t__ rx_len; scalar_t__ tx_len; int tx_buf; int rx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct cdns_i3c_cmd*) ;
 struct cdns_i3c_xfer* FUNC_5 (struct cdns_i3c_master*,int) ;
 int FUNC_6 (struct cdns_i3c_xfer*) ;
 int FUNC_7 (struct cdns_i3c_master*,struct cdns_i3c_xfer*) ;
 int FUNC_8 (struct cdns_i3c_master*,struct cdns_i3c_xfer*) ;
 struct i3c_master_controller* FUNC_9 (struct i3c_dev_desc*) ;
 int FUNC_10 (int) ;
 struct cdns_i3c_master* FUNC_11 (struct i3c_master_controller*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct i3c_dev_desc *VAR_7,
          struct i3c_priv_xfer *VAR_8,
          int VAR_9)
{
 struct i3c_master_controller *VAR_10 = FUNC_9(VAR_7);
 struct cdns_i3c_master *VAR_11 = FUNC_11(VAR_10);
 int VAR_12 = 0, VAR_13 = 0, VAR_14, VAR_15;
 struct cdns_i3c_xfer *VAR_16;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  if (VAR_8[VAR_14].len > VAR_1)
   return -VAR_5;
 }

 if (!VAR_9)
  return 0;

 if (VAR_9 > VAR_11->caps.cmdfifodepth ||
     VAR_9 > VAR_11->caps.cmdrfifodepth)
  return -VAR_5;





 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  if (VAR_8[VAR_14].rnw)
   VAR_13 += FUNC_3(VAR_8[VAR_14].len, 4);
  else
   VAR_12 += FUNC_3(VAR_8[VAR_14].len, 4);
 }

 if (VAR_13 > VAR_11->caps.rxfifodepth ||
     VAR_12 > VAR_11->caps.txfifodepth)
  return -VAR_5;

 VAR_16 = FUNC_5(VAR_11, VAR_9);
 if (!VAR_16)
  return -VAR_4;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  struct cdns_i3c_cmd *VAR_17 = &VAR_16->cmds[VAR_14];
  u32 VAR_18 = VAR_8[VAR_14].len;

  VAR_17->cmd0 = FUNC_0(VAR_7->info.dyn_addr) |
   FUNC_2(VAR_6);

  if (VAR_8[VAR_14].rnw) {
   VAR_17->cmd0 |= VAR_2;
   VAR_17->rx_buf = VAR_8[VAR_14].data.in;
   VAR_17->rx_len = VAR_8[VAR_14].len;
   VAR_18++;
  } else {
   VAR_17->tx_buf = VAR_8[VAR_14].data.out;
   VAR_17->tx_len = VAR_8[VAR_14].len;
  }

  VAR_17->cmd0 |= FUNC_1(VAR_18);

  if (VAR_14 < VAR_9 - 1)
   VAR_17->cmd0 |= VAR_3;

  if (!VAR_14)
   VAR_17->cmd0 |= VAR_0;
 }

 FUNC_7(VAR_11, VAR_16);
 if (!FUNC_12(&VAR_16->comp,
      FUNC_10(1000)))
  FUNC_8(VAR_11, VAR_16);

 VAR_15 = VAR_16->ret;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  VAR_8[VAR_14].err = FUNC_4(&VAR_16->cmds[VAR_14]);

 FUNC_6(VAR_16);

 return VAR_15;
}
