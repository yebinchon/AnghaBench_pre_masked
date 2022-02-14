
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssi_protocol {scalar_t__ main_state; scalar_t__ rxid; int netdev; int lock; int send_state; } ;
struct sk_buff {int dev; } ;
struct hsi_msg {int complete; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct hsi_client*,struct hsi_msg*) ;
 struct ssi_protocol* FUNC_6 (struct hsi_client*) ;
 struct sk_buff* FUNC_7 (int ,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct hsi_msg* FUNC_11 (struct ssi_protocol*,struct sk_buff*,int ) ;
 int FUNC_12 (struct hsi_client*) ;
 int VAR_3 ;
 int FUNC_13 (struct ssi_protocol*,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct hsi_client *VAR_4, u32 VAR_5)
{
 struct ssi_protocol *VAR_6 = FUNC_6(VAR_4);
 struct sk_buff *VAR_7;
 struct hsi_msg *VAR_8;
 int VAR_9 = FUNC_1(VAR_5);

 FUNC_2(&VAR_4->device, "RX strans: %d frames\n", VAR_9);
 FUNC_9(&VAR_6->lock);
 if (FUNC_14(VAR_6->main_state != VAR_0)) {
  FUNC_3(&VAR_4->device, "START TRANS wrong state: S(%d) M(%d)\n",
     VAR_6->send_state, VAR_6->main_state);
  FUNC_10(&VAR_6->lock);
  return;
 }
 FUNC_13(VAR_6, VAR_2);
 if (FUNC_14(FUNC_0(VAR_5) != VAR_6->rxid)) {
  FUNC_3(&VAR_4->device, "START TRANS id %d expected %d\n",
     FUNC_0(VAR_5), VAR_6->rxid);
  FUNC_10(&VAR_6->lock);
  goto out1;
 }
 VAR_6->rxid++;
 FUNC_10(&VAR_6->lock);
 VAR_7 = FUNC_7(VAR_6->netdev, VAR_9 * 4);
 if (FUNC_14(!VAR_7)) {
  FUNC_3(&VAR_4->device, "No memory for rx skb\n");
  goto out1;
 }
 VAR_7->dev = VAR_6->netdev;
 FUNC_8(VAR_7, VAR_9 * 4);
 VAR_8 = FUNC_11(VAR_6, VAR_7, VAR_1);
 if (FUNC_14(!VAR_8)) {
  FUNC_3(&VAR_4->device, "No memory for RX data msg\n");
  goto out2;
 }
 VAR_8->complete = VAR_3;
 FUNC_5(VAR_4, VAR_8);

 return;
out2:
 FUNC_4(VAR_7);
out1:
 FUNC_12(VAR_4);
}
