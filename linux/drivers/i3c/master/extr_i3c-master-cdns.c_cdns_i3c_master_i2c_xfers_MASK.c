
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i2c_msg {scalar_t__ len; int flags; int buf; int addr; } ;
struct i2c_dev_desc {int dummy; } ;
struct cdns_i3c_xfer {int ret; int comp; struct cdns_i3c_cmd* cmds; } ;
struct TYPE_2__ {int cmdfifodepth; unsigned int txfifodepth; unsigned int rxfifodepth; } ;
struct cdns_i3c_master {TYPE_1__ caps; } ;
struct cdns_i3c_cmd {int cmd0; scalar_t__ rx_len; scalar_t__ tx_len; int tx_buf; int rx_buf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct cdns_i3c_xfer* FUNC_4 (struct cdns_i3c_master*,int) ;
 int FUNC_5 (struct cdns_i3c_xfer*) ;
 int FUNC_6 (struct cdns_i3c_master*,struct cdns_i3c_xfer*) ;
 int FUNC_7 (struct cdns_i3c_master*,struct cdns_i3c_xfer*) ;
 struct i3c_master_controller* FUNC_8 (struct i2c_dev_desc*) ;
 int FUNC_9 (int) ;
 struct cdns_i3c_master* FUNC_10 (struct i3c_master_controller*) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_dev_desc *VAR_8,
         const struct i2c_msg *VAR_9, int VAR_10)
{
 struct i3c_master_controller *VAR_11 = FUNC_8(VAR_8);
 struct cdns_i3c_master *VAR_12 = FUNC_10(VAR_11);
 unsigned int VAR_13 = 0, VAR_14 = 0;
 struct cdns_i3c_xfer *VAR_15;
 int VAR_16, VAR_17 = 0;

 if (VAR_10 > VAR_12->caps.cmdfifodepth)
  return -VAR_4;

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  if (VAR_9[VAR_16].len > VAR_1)
   return -VAR_4;

  if (VAR_9[VAR_16].flags & VAR_5)
   VAR_13 += FUNC_3(VAR_9[VAR_16].len, 4);
  else
   VAR_14 += FUNC_3(VAR_9[VAR_16].len, 4);
 }

 if (VAR_14 > VAR_12->caps.txfifodepth ||
     VAR_13 > VAR_12->caps.rxfifodepth)
  return -VAR_4;

 VAR_15 = FUNC_4(VAR_12, VAR_10);
 if (!VAR_15)
  return -VAR_3;

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  struct cdns_i3c_cmd *VAR_18 = &VAR_15->cmds[VAR_16];

  VAR_18->cmd0 = FUNC_0(VAR_9[VAR_16].addr) |
   FUNC_1(VAR_9[VAR_16].len) |
   FUNC_2(VAR_7);

  if (VAR_9[VAR_16].flags & VAR_6)
   VAR_18->cmd0 |= VAR_0;

  if (VAR_9[VAR_16].flags & VAR_5) {
   VAR_18->cmd0 |= VAR_2;
   VAR_18->rx_buf = VAR_9[VAR_16].buf;
   VAR_18->rx_len = VAR_9[VAR_16].len;
  } else {
   VAR_18->tx_buf = VAR_9[VAR_16].buf;
   VAR_18->tx_len = VAR_9[VAR_16].len;
  }
 }

 FUNC_6(VAR_12, VAR_15);
 if (!FUNC_11(&VAR_15->comp, FUNC_9(1000)))
  FUNC_7(VAR_12, VAR_15);

 VAR_17 = VAR_15->ret;
 FUNC_5(VAR_15);

 return VAR_17;
}
