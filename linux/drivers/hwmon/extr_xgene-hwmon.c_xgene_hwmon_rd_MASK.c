
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int param2; int param1; int msg; } ;
struct xgene_hwmon_dev {int resp_pending; int rd_mutex; TYPE_1__ sync_msg; int dev; int rd_complete; int mbox_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct xgene_hwmon_dev *VAR_4, u32 *VAR_5)
{
 int VAR_6;

 FUNC_5(&VAR_4->rd_mutex);
 FUNC_2(&VAR_4->rd_complete);
 VAR_4->resp_pending = 1;

 VAR_6 = FUNC_3(VAR_4->mbox_chan, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev, "Mailbox send error %d\n", VAR_6);
  goto err;
 }

 if (!FUNC_7(&VAR_4->rd_complete,
      FUNC_4(VAR_2))) {
  FUNC_1(VAR_4->dev, "Mailbox operation timed out\n");
  VAR_6 = -VAR_1;
  goto err;
 }


 if (FUNC_0(VAR_4->sync_msg.msg) == VAR_3) {
  VAR_6 = -VAR_0;
  goto err;
 }

 VAR_5[0] = VAR_4->sync_msg.msg;
 VAR_5[1] = VAR_4->sync_msg.param1;
 VAR_5[2] = VAR_4->sync_msg.param2;

err:
 VAR_4->resp_pending = 0;
 FUNC_6(&VAR_4->rd_mutex);
 return VAR_6;
}
