
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int rx_wd; } ;
struct sk_buff {int dummy; } ;
struct hsi_msg {scalar_t__ status; struct sk_buff* context; struct hsi_client* cl; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct ssi_protocol* FUNC_2 (struct hsi_client*) ;
 int FUNC_3 (struct hsi_msg*) ;
 int FUNC_4 (struct hsi_client*) ;
 int FUNC_5 (struct hsi_msg*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct hsi_msg *VAR_1)
{
 struct hsi_client *VAR_2 = VAR_1->cl;
 struct ssi_protocol *VAR_3 = FUNC_2(VAR_2);
 struct sk_buff *VAR_4;

 if (VAR_1->status == VAR_0) {
  FUNC_1(&VAR_2->device, "RX data error\n");
  FUNC_5(VAR_1);
  FUNC_4(VAR_2);
  return;
 }
 FUNC_0(&VAR_3->rx_wd);
 VAR_4 = VAR_1->context;
 FUNC_6(VAR_4);
 FUNC_3(VAR_1);
}
