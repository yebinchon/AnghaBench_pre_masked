
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int msg; int param1; int param2; } ;
struct xgene_hwmon_dev {int resp_pending; int mbox_idx; int rd_mutex; int mbox_chan; TYPE_1__ sync_msg; int dev; int usecs_lat; int rd_complete; struct acpi_pcct_shared_memory* pcc_comm_addr; } ;
struct slimpro_resp_msg {int dummy; } ;
struct acpi_pcct_shared_memory {int signature; int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct xgene_hwmon_dev *VAR_6, u32 *VAR_7)
{
 struct acpi_pcct_shared_memory *VAR_8 = VAR_6->pcc_comm_addr;
 u32 *VAR_9 = (void *)(VAR_8 + 1);
 int VAR_10, VAR_11;
 u16 VAR_12;

 FUNC_10(&VAR_6->rd_mutex);
 FUNC_6(&VAR_6->rd_complete);
 VAR_6->resp_pending = 1;


 FUNC_2(VAR_8->signature,
     FUNC_4(VAR_5 | VAR_6->mbox_idx));


 FUNC_2(VAR_8->command,
     FUNC_3(FUNC_0(VAR_7[0]) | VAR_3));


 VAR_12 = FUNC_7(FUNC_1(VAR_8->status));
 VAR_12 &= ~VAR_4;
 FUNC_2(VAR_8->status, FUNC_3(VAR_12));


 for (VAR_11 = 0; VAR_11 < sizeof(struct slimpro_resp_msg) / 4; VAR_11++)
  FUNC_2(VAR_9[VAR_11], FUNC_4(VAR_7[VAR_11]));


 VAR_10 = FUNC_9(VAR_6->mbox_chan, VAR_7);
 if (VAR_10 < 0) {
  FUNC_5(VAR_6->dev, "Mailbox send error %d\n", VAR_10);
  goto err;
 }
 if (!FUNC_13(&VAR_6->rd_complete,
      FUNC_12(VAR_6->usecs_lat))) {
  FUNC_5(VAR_6->dev, "Mailbox operation timed out\n");
  VAR_10 = -VAR_1;
  goto err;
 }


 if (FUNC_0(VAR_6->sync_msg.msg) == VAR_2) {
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_7[0] = VAR_6->sync_msg.msg;
 VAR_7[1] = VAR_6->sync_msg.param1;
 VAR_7[2] = VAR_6->sync_msg.param2;

err:
 FUNC_8(VAR_6->mbox_chan, 0);
 VAR_6->resp_pending = 0;
 FUNC_11(&VAR_6->rd_mutex);
 return VAR_10;
}
