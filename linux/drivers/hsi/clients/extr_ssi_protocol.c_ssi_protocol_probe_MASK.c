
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ssi_protocol {int channel_id_cmd; int channel_id_data; TYPE_1__* netdev; int link; int work; struct hsi_client* cl; int tx_usecnt; int cmdqueue; int txqueue; int keep_alive; int tx_wd; int rx_wd; int lock; } ;
struct hsi_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int max_mtu; int min_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int ,char const*,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct device*,char*,int,int) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct hsi_client*,struct ssi_protocol*) ;
 void* FUNC_9 (struct hsi_client*,char*) ;
 int FUNC_10 (struct ssi_protocol*) ;
 struct ssi_protocol* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ssi_protocol*) ;
 int FUNC_17 (struct ssi_protocol*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_18 (int *,int ,int ) ;
 struct hsi_client* FUNC_19 (struct device*) ;

__attribute__((used)) static int FUNC_20(struct device *VAR_12)
{
 static const char VAR_13[] = "phonet%d";
 struct hsi_client *VAR_14 = FUNC_19(VAR_12);
 struct ssi_protocol *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_11(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 FUNC_15(&VAR_15->lock);
 FUNC_18(&VAR_15->rx_wd, VAR_9, VAR_5);
 FUNC_18(&VAR_15->tx_wd, VAR_10, VAR_5);
 FUNC_18(&VAR_15->keep_alive, VAR_6, 0);
 FUNC_0(&VAR_15->txqueue);
 FUNC_0(&VAR_15->cmdqueue);
 FUNC_4(&VAR_15->tx_usecnt, 0);
 FUNC_8(VAR_14, VAR_15);
 VAR_15->cl = VAR_14;
 FUNC_1(&VAR_15->work, VAR_11);

 VAR_15->channel_id_cmd = FUNC_9(VAR_14, "mcsaab-control");
 if (VAR_15->channel_id_cmd < 0) {
  VAR_16 = VAR_15->channel_id_cmd;
  FUNC_6(VAR_12, "Could not get cmd channel (%d)\n", VAR_16);
  goto out;
 }

 VAR_15->channel_id_data = FUNC_9(VAR_14, "mcsaab-data");
 if (VAR_15->channel_id_data < 0) {
  VAR_16 = VAR_15->channel_id_data;
  FUNC_6(VAR_12, "Could not get data channel (%d)\n", VAR_16);
  goto out;
 }

 VAR_16 = FUNC_16(VAR_15);
 if (VAR_16 < 0) {
  FUNC_6(VAR_12, "No memory for commands\n");
  goto out;
 }

 VAR_15->netdev = FUNC_3(0, VAR_13, VAR_2, VAR_8);
 if (!VAR_15->netdev) {
  FUNC_6(VAR_12, "No memory for netdev\n");
  VAR_16 = -VAR_0;
  goto out1;
 }


 VAR_15->netdev->min_mtu = VAR_3;
 VAR_15->netdev->max_mtu = VAR_4;

 FUNC_2(VAR_15->netdev, VAR_12);
 FUNC_13(VAR_15->netdev);
 VAR_16 = FUNC_14(VAR_15->netdev);
 if (VAR_16 < 0) {
  FUNC_6(VAR_12, "Register netdev failed (%d)\n", VAR_16);
  goto out2;
 }

 FUNC_12(&VAR_15->link, &VAR_7);

 FUNC_5(VAR_12, "channel configuration: cmd=%d, data=%d\n",
  VAR_15->channel_id_cmd, VAR_15->channel_id_data);

 return 0;
out2:
 FUNC_7(VAR_15->netdev);
out1:
 FUNC_17(VAR_15);
out:
 FUNC_10(VAR_15);

 return VAR_16;
}
