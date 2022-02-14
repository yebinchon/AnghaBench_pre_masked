
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nsh {int type; int len; scalar_t__ zero; } ;
struct TYPE_2__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; } ;
struct dtl1_info {int txq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct dtl1_info*) ;
 struct dtl1_info* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,struct nsh*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int *,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct dtl1_info *VAR_6 = FUNC_2(VAR_4);
 struct sk_buff *VAR_7;
 struct nsh VAR_8;

 switch (FUNC_3(VAR_5)) {
 case 129:
  VAR_4->stat.cmd_tx++;
  VAR_8.type = 0x81;
  break;
 case 130:
  VAR_4->stat.acl_tx++;
  VAR_8.type = 0x82;
  break;
 case 128:
  VAR_4->stat.sco_tx++;
  VAR_8.type = 0x83;
  break;
 default:
  return -VAR_0;
 }

 VAR_8.zero = 0;
 VAR_8.len = VAR_5->len;

 VAR_7 = FUNC_0(VAR_3 + VAR_5->len + 1, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_11(VAR_7, VAR_3);
 FUNC_6(VAR_5, FUNC_8(VAR_7, VAR_5->len), VAR_5->len);
 if (VAR_5->len & 0x0001)
  FUNC_9(VAR_7, 0);


 FUNC_5(FUNC_7(VAR_7, VAR_3), &VAR_8, VAR_3);
 FUNC_10(&(VAR_6->txq), VAR_7);

 FUNC_1(VAR_6);

 FUNC_4(VAR_5);

 return 0;
}
