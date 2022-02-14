
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hsi_port {int device; } ;
struct TYPE_7__ {int num_channels; struct hsi_client* channels; } ;
struct TYPE_8__ {int archdata; int platform_data; int release; int * parent; int * bus; } ;
struct TYPE_6__ {int num_channels; struct hsi_client* channels; } ;
struct hsi_client {TYPE_2__ tx_cfg; TYPE_3__ device; TYPE_1__ rx_cfg; } ;
struct hsi_board_info {int name; int * archdata; int platform_data; TYPE_1__ rx_cfg; TYPE_2__ tx_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hsi_client*) ;
 void* FUNC_3 (struct hsi_client*,size_t,int ) ;
 struct hsi_client* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_3__*) ;

struct hsi_client *FUNC_7(struct hsi_port *VAR_3,
      struct hsi_board_info *VAR_4)
{
 struct hsi_client *VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto err;

 VAR_5->tx_cfg = VAR_4->tx_cfg;
 if (VAR_5->tx_cfg.channels) {
  VAR_6 = VAR_5->tx_cfg.num_channels * sizeof(*VAR_5->tx_cfg.channels);
  VAR_5->tx_cfg.channels = FUNC_3(VAR_4->tx_cfg.channels, VAR_6,
           VAR_0);
  if (!VAR_5->tx_cfg.channels)
   goto err_tx;
 }

 VAR_5->rx_cfg = VAR_4->rx_cfg;
 if (VAR_5->rx_cfg.channels) {
  VAR_6 = VAR_5->rx_cfg.num_channels * sizeof(*VAR_5->rx_cfg.channels);
  VAR_5->rx_cfg.channels = FUNC_3(VAR_4->rx_cfg.channels, VAR_6,
           VAR_0);
  if (!VAR_5->rx_cfg.channels)
   goto err_rx;
 }

 VAR_5->device.bus = &VAR_1;
 VAR_5->device.parent = &VAR_3->device;
 VAR_5->device.release = VAR_2;
 FUNC_0(&VAR_5->device, "%s", VAR_4->name);
 VAR_5->device.platform_data = VAR_4->platform_data;
 if (VAR_4->archdata)
  VAR_5->device.archdata = *VAR_4->archdata;
 if (FUNC_1(&VAR_5->device) < 0) {
  FUNC_5("hsi: failed to register client: %s\n", VAR_4->name);
  FUNC_6(&VAR_5->device);
 }

 return VAR_5;
err_rx:
 FUNC_2(VAR_5->tx_cfg.channels);
err_tx:
 FUNC_2(VAR_5);
err:
 return ((void*)0);
}
