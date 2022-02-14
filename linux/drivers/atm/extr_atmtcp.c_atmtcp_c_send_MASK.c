
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct atmtcp_hdr {scalar_t__ length; int vci; int vpi; } ;
struct atmtcp_control {int dummy; } ;
struct atm_vcc {int (* pop ) (struct atm_vcc*,struct sk_buff*) ;TYPE_1__* stats; int (* push ) (struct atm_vcc*,struct sk_buff*) ;struct atm_dev* dev_data; } ;
struct atm_dev {int dummy; } ;
struct TYPE_2__ {int rx; int tx; int tx_err; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct atm_vcc*,int ,int ) ;
 int FUNC_2 (struct atmtcp_control*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 struct atm_vcc* FUNC_5 (struct atm_dev*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_13 (struct atm_vcc*,struct sk_buff*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_14(struct atm_vcc *VAR_5,struct sk_buff *VAR_6)
{
 struct atm_dev *VAR_7;
 struct atmtcp_hdr *VAR_8;
 struct atm_vcc *VAR_9;
 struct sk_buff *VAR_10;
 int VAR_11 = 0;

 if (!VAR_6->len) return 0;
 VAR_7 = VAR_5->dev_data;
 VAR_8 = (struct atmtcp_hdr *) VAR_6->data;
 if (VAR_8->length == VAR_0) {
  VAR_11 = FUNC_2(
      (struct atmtcp_control *) VAR_6->data);
  goto done;
 }
 FUNC_7(&VAR_4);
 VAR_9 = FUNC_5(VAR_7, FUNC_6(VAR_8->vpi), FUNC_6(VAR_8->vci));
 FUNC_8(&VAR_4);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  FUNC_3(&VAR_5->stats->tx_err);
  goto done;
 }
 FUNC_10(VAR_6,sizeof(struct atmtcp_hdr));
 VAR_10 = FUNC_1(VAR_9,VAR_6->len,VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto done;
 }
 FUNC_0(VAR_10);
 FUNC_9(VAR_6, FUNC_11(VAR_10, VAR_6->len), VAR_6->len);
 VAR_9->push(VAR_9,VAR_10);
 FUNC_3(&VAR_5->stats->tx);
 FUNC_3(&VAR_9->stats->rx);
done:
 if (VAR_5->pop) VAR_5->pop(VAR_5,VAR_6);
 else FUNC_4(VAR_6);
 return VAR_11;
}
