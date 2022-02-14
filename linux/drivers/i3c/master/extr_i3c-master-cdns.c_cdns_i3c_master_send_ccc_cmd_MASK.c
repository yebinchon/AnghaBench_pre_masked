
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i3c_master_controller {int dummy; } ;
struct i3c_ccc_cmd {int id; int err; TYPE_2__* dests; scalar_t__ rnw; } ;
struct cdns_i3c_xfer {int ret; struct cdns_i3c_cmd* cmds; int comp; } ;
struct cdns_i3c_master {int dummy; } ;
struct cdns_i3c_cmd {int cmd0; int tx_len; int tx_buf; int rx_len; int rx_buf; int cmd1; } ;
struct TYPE_3__ {int len; int data; } ;
struct TYPE_4__ {TYPE_1__ payload; int addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct cdns_i3c_cmd*) ;
 struct cdns_i3c_xfer* FUNC_4 (struct cdns_i3c_master*,int) ;
 int FUNC_5 (struct cdns_i3c_xfer*) ;
 int FUNC_6 (struct cdns_i3c_master*,struct cdns_i3c_xfer*) ;
 int FUNC_7 (struct cdns_i3c_master*,struct cdns_i3c_xfer*) ;
 int FUNC_8 (int) ;
 struct cdns_i3c_master* FUNC_9 (struct i3c_master_controller*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct i3c_master_controller *VAR_4,
     struct i3c_ccc_cmd *VAR_5)
{
 struct cdns_i3c_master *VAR_6 = FUNC_9(VAR_4);
 struct cdns_i3c_xfer *VAR_7;
 struct cdns_i3c_cmd *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_6, 1);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = VAR_7->cmds;
 VAR_8->cmd1 = FUNC_2(VAR_5->id);
 VAR_8->cmd0 = VAR_0 |
       FUNC_1(VAR_5->dests[0].payload.len);

 if (VAR_5->id & VAR_3)
  VAR_8->cmd0 |= FUNC_0(VAR_5->dests[0].addr);

 if (VAR_5->rnw) {
  VAR_8->cmd0 |= VAR_1;
  VAR_8->rx_buf = VAR_5->dests[0].payload.data;
  VAR_8->rx_len = VAR_5->dests[0].payload.len;
 } else {
  VAR_8->tx_buf = VAR_5->dests[0].payload.data;
  VAR_8->tx_len = VAR_5->dests[0].payload.len;
 }

 FUNC_6(VAR_6, VAR_7);
 if (!FUNC_10(&VAR_7->comp, FUNC_8(1000)))
  FUNC_7(VAR_6, VAR_7);

 VAR_9 = VAR_7->ret;
 VAR_5->err = FUNC_3(&VAR_7->cmds[0]);
 FUNC_5(VAR_7);

 return VAR_9;
}
