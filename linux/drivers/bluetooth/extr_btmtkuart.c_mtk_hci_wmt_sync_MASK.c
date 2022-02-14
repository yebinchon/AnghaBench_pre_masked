
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mtk_wmt_hdr {int dir; int op; int flag; int dlen; } ;
struct mtk_hci_wmt_cmd {int data; } ;
struct hci_dev {int dummy; } ;
struct btmtkuart_dev {TYPE_2__* evt_skb; int tx_state; } ;
struct btmtk_hci_wmt_params {int dlen; int op; int* status; int data; int flag; } ;
struct btmtk_hci_wmt_evt_funcc {int status; } ;
struct TYPE_3__ {int op; int flag; } ;
struct btmtk_hci_wmt_evt {TYPE_1__ whdr; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int VAR_12 ;
 int FUNC_0 (struct hci_dev*,int,int,struct mtk_hci_wmt_cmd*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 struct btmtkuart_dev* FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct hci_dev *VAR_13,
       struct btmtk_hci_wmt_params *VAR_14)
{
 struct btmtkuart_dev *VAR_15 = FUNC_5(VAR_13);
 struct btmtk_hci_wmt_evt_funcc *VAR_16;
 u32 VAR_17, VAR_18 = VAR_1;
 struct btmtk_hci_wmt_evt *VAR_19;
 struct mtk_hci_wmt_cmd VAR_20;
 struct mtk_wmt_hdr *VAR_21;
 int VAR_22;

 VAR_17 = sizeof(*VAR_21) + VAR_14->dlen;
 if (VAR_17 > 255)
  return -VAR_8;

 VAR_21 = (struct mtk_wmt_hdr *)&VAR_20;
 VAR_21->dir = 1;
 VAR_21->op = VAR_14->op;
 VAR_21->dlen = FUNC_4(VAR_14->dlen + 1);
 VAR_21->flag = VAR_14->flag;
 FUNC_7(VAR_20.data, VAR_14->data, VAR_14->dlen);

 FUNC_8(VAR_0, &VAR_15->tx_state);

 VAR_22 = FUNC_0(VAR_13, 0xfc6f, VAR_17, &VAR_20);
 if (VAR_22 < 0) {
  FUNC_3(VAR_0, &VAR_15->tx_state);
  return VAR_22;
 }
 VAR_22 = FUNC_9(&VAR_15->tx_state, VAR_0,
      VAR_12, VAR_11);
 if (VAR_22 == -VAR_7) {
  FUNC_2(VAR_13, "Execution of wmt command interrupted");
  FUNC_3(VAR_0, &VAR_15->tx_state);
  return VAR_22;
 }

 if (VAR_22) {
  FUNC_2(VAR_13, "Execution of wmt command timed out");
  FUNC_3(VAR_0, &VAR_15->tx_state);
  return -VAR_10;
 }


 VAR_19 = (struct btmtk_hci_wmt_evt *)VAR_15->evt_skb->data;
 if (VAR_19->whdr.op != VAR_21->op) {
  FUNC_2(VAR_13, "Wrong op received %d expected %d",
      VAR_19->whdr.op, VAR_21->op);
  VAR_22 = -VAR_9;
  goto err_free_skb;
 }

 switch (VAR_19->whdr.op) {
 case 128:
  if (VAR_19->whdr.flag == 2)
   VAR_18 = VAR_6;
  else
   VAR_18 = VAR_5;
  break;
 case 129:
  VAR_16 = (struct btmtk_hci_wmt_evt_funcc *)VAR_19;
  if (FUNC_1(VAR_16->status) == 0x404)
   VAR_18 = VAR_2;
  else if (FUNC_1(VAR_16->status) == 0x420)
   VAR_18 = VAR_3;
  else
   VAR_18 = VAR_4;
  break;
 }

 if (VAR_14->status)
  *VAR_14->status = VAR_18;

err_free_skb:
 FUNC_6(VAR_15->evt_skb);
 VAR_15->evt_skb = ((void*)0);

 return VAR_22;
}
