
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i2c_msg {int flags; int len; int buf; } ;
struct i2c_dev_desc {int dummy; } ;
struct dw_i3c_xfer {int ret; int comp; struct dw_i3c_cmd* cmds; } ;
struct TYPE_2__ {int cmdfifodepth; unsigned int datafifodepth; } ;
struct dw_i3c_master {TYPE_1__ caps; } ;
struct dw_i3c_i2c_dev_data {int index; } ;
struct dw_i3c_cmd {int cmd_hi; int cmd_lo; int tx_len; int tx_buf; int rx_len; int rx_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dw_i3c_xfer* FUNC_4 (struct dw_i3c_master*,int) ;
 int FUNC_5 (struct dw_i3c_master*,struct dw_i3c_xfer*) ;
 int FUNC_6 (struct dw_i3c_master*,struct dw_i3c_xfer*) ;
 int FUNC_7 (struct dw_i3c_xfer*) ;
 struct i3c_master_controller* FUNC_8 (struct i2c_dev_desc*) ;
 struct dw_i3c_i2c_dev_data* FUNC_9 (struct i2c_dev_desc*) ;
 struct dw_i3c_master* FUNC_10 (struct i3c_master_controller*) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_dev_desc *VAR_8,
       const struct i2c_msg *VAR_9,
       int VAR_10)
{
 struct dw_i3c_i2c_dev_data *VAR_11 = FUNC_9(VAR_8);
 struct i3c_master_controller *VAR_12 = FUNC_8(VAR_8);
 struct dw_i3c_master *VAR_13 = FUNC_10(VAR_12);
 unsigned int VAR_14 = 0, VAR_15 = 0;
 struct dw_i3c_xfer *VAR_16;
 int VAR_17, VAR_18 = 0;

 if (!VAR_10)
  return 0;

 if (VAR_10 > VAR_13->caps.cmdfifodepth)
  return -VAR_5;

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
  if (VAR_9[VAR_17].flags & VAR_6)
   VAR_14 += FUNC_3(VAR_9[VAR_17].len, 4);
  else
   VAR_15 += FUNC_3(VAR_9[VAR_17].len, 4);
 }

 if (VAR_15 > VAR_13->caps.datafifodepth ||
     VAR_14 > VAR_13->caps.datafifodepth)
  return -VAR_5;

 VAR_16 = FUNC_4(VAR_13, VAR_10);
 if (!VAR_16)
  return -VAR_4;

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
  struct dw_i3c_cmd *VAR_19 = &VAR_16->cmds[VAR_17];

  VAR_19->cmd_hi = FUNC_0(VAR_9[VAR_17].len) |
   VAR_3;

  VAR_19->cmd_lo = FUNC_2(VAR_17) |
         FUNC_1(VAR_11->index) |
         VAR_1;

  if (VAR_9[VAR_17].flags & VAR_6) {
   VAR_19->cmd_lo |= VAR_0;
   VAR_19->rx_buf = VAR_9[VAR_17].buf;
   VAR_19->rx_len = VAR_9[VAR_17].len;
  } else {
   VAR_19->tx_buf = VAR_9[VAR_17].buf;
   VAR_19->tx_len = VAR_9[VAR_17].len;
  }

  if (VAR_17 == (VAR_10 - 1))
   VAR_19->cmd_lo |= VAR_2;
 }

 FUNC_6(VAR_13, VAR_16);
 if (!FUNC_11(&VAR_16->comp, VAR_7))
  FUNC_5(VAR_13, VAR_16);

 VAR_18 = VAR_16->ret;
 FUNC_7(VAR_16);

 return VAR_18;
}
