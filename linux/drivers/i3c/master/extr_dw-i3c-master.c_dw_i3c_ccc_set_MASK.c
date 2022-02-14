
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_ccc_cmd {int id; int err; TYPE_2__* dests; } ;
struct dw_i3c_xfer {int ret; struct dw_i3c_cmd* cmds; int comp; } ;
struct dw_i3c_master {int dummy; } ;
struct dw_i3c_cmd {int cmd_hi; int cmd_lo; scalar_t__ error; int tx_len; int tx_buf; } ;
struct TYPE_3__ {int len; int data; } ;
struct TYPE_4__ {TYPE_1__ payload; int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct dw_i3c_xfer* FUNC_3 (struct dw_i3c_master*,int) ;
 int FUNC_4 (struct dw_i3c_master*,struct dw_i3c_xfer*) ;
 int FUNC_5 (struct dw_i3c_master*,struct dw_i3c_xfer*) ;
 int FUNC_6 (struct dw_i3c_xfer*) ;
 int FUNC_7 (struct dw_i3c_master*,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct dw_i3c_master *VAR_9,
     struct i3c_ccc_cmd *VAR_10)
{
 struct dw_i3c_xfer *VAR_11;
 struct dw_i3c_cmd *VAR_12;
 int VAR_13, VAR_14 = 0;

 if (VAR_10->id & VAR_5) {
  VAR_14 = FUNC_7(VAR_9, VAR_10->dests[0].addr);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_11 = FUNC_3(VAR_9, 1);
 if (!VAR_11)
  return -VAR_4;

 VAR_12 = VAR_11->cmds;
 VAR_12->tx_buf = VAR_10->dests[0].payload.data;
 VAR_12->tx_len = VAR_10->dests[0].payload.len;

 VAR_12->cmd_hi = FUNC_0(VAR_10->dests[0].payload.len) |
        VAR_3;

 VAR_12->cmd_lo = VAR_0 |
        FUNC_2(VAR_14) |
        FUNC_1(VAR_10->id) |
        VAR_2 |
        VAR_1;

 FUNC_5(VAR_9, VAR_11);
 if (!FUNC_8(&VAR_11->comp, VAR_8))
  FUNC_4(VAR_9, VAR_11);

 VAR_13 = VAR_11->ret;
 if (VAR_11->cmds[0].error == VAR_7)
  VAR_10->err = VAR_6;

 FUNC_6(VAR_11);

 return VAR_13;
}
