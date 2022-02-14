
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsi_msg {struct cs_hsi_iface* context; void* destructor; int channel; } ;
struct cs_hsi_iface {struct hsi_msg* data_tx_msg; struct hsi_msg* data_rx_msg; } ;
struct TYPE_2__ {int channel_id_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 void* VAR_3 ;
 struct hsi_msg* FUNC_0 (int,int ) ;
 int FUNC_1 (struct hsi_msg*) ;

__attribute__((used)) static int FUNC_2(struct cs_hsi_iface *VAR_4)
{
 struct hsi_msg *VAR_5, *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(1, VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out1;
 }
 VAR_6->channel = VAR_2.channel_id_data;
 VAR_6->destructor = VAR_3;
 VAR_6->context = VAR_4;

 VAR_5 = FUNC_0(1, VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto out2;
 }
 VAR_5->channel = VAR_2.channel_id_data;
 VAR_5->destructor = VAR_3;
 VAR_5->context = VAR_4;

 VAR_4->data_rx_msg = VAR_6;
 VAR_4->data_tx_msg = VAR_5;

 return 0;

out2:
 FUNC_1(VAR_6);
out1:
 return VAR_7;
}
