
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct atmtcp_hdr {int length; void* vci; void* vpi; } ;
struct atmtcp_dev_data {struct atm_vcc* vcc; } ;
struct TYPE_4__ {scalar_t__ traffic_class; } ;
struct TYPE_5__ {TYPE_1__ txtp; } ;
struct atm_vcc {TYPE_3__* stats; int (* push ) (struct atm_vcc*,struct sk_buff*) ;int (* pop ) (struct atm_vcc*,struct sk_buff*) ;int vci; int vpi; int dev; TYPE_2__ qos; } ;
struct TYPE_6__ {int rx; int tx; int tx_err; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct atmtcp_dev_data* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct atm_vcc*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,struct atmtcp_hdr*,int) ;
 struct atmtcp_hdr* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_9 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_10 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_11 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_12 (struct atm_vcc*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct atm_vcc *VAR_5,struct sk_buff *VAR_6)
{
 struct atmtcp_dev_data *VAR_7;
 struct atm_vcc *VAR_8=((void*)0);
 struct sk_buff *VAR_9;
 struct atmtcp_hdr *VAR_10;
 int VAR_11;

 if (VAR_5->qos.txtp.traffic_class == VAR_0) {
  if (VAR_5->pop) VAR_5->pop(VAR_5,VAR_6);
  else FUNC_3(VAR_6);
  return -VAR_1;
 }
 VAR_7 = FUNC_0(VAR_5->dev);
 if (VAR_7) VAR_8 = VAR_7->vcc;
 if (!VAR_7 || !VAR_8) {
  if (VAR_5->pop) VAR_5->pop(VAR_5,VAR_6);
  else FUNC_3(VAR_6);
  if (VAR_7) return 0;
  FUNC_2(&VAR_5->stats->tx_err);
  return -VAR_3;
 }
 VAR_11 = VAR_6->len+sizeof(struct atmtcp_hdr);
 VAR_9 = FUNC_1(VAR_8,VAR_11,VAR_4);
 if (!VAR_9) {
  if (VAR_5->pop) VAR_5->pop(VAR_5,VAR_6);
  else FUNC_3(VAR_6);
  FUNC_2(&VAR_5->stats->tx_err);
  return -VAR_2;
 }
 VAR_10 = FUNC_7(VAR_9, sizeof(struct atmtcp_hdr));
 VAR_10->vpi = FUNC_5(VAR_5->vpi);
 VAR_10->vci = FUNC_5(VAR_5->vci);
 VAR_10->length = FUNC_4(VAR_6->len);
 FUNC_6(VAR_6, FUNC_7(VAR_9, VAR_6->len), VAR_6->len);
 if (VAR_5->pop) VAR_5->pop(VAR_5,VAR_6);
 else FUNC_3(VAR_6);
 VAR_8->push(VAR_8,VAR_9);
 FUNC_2(&VAR_5->stats->tx);
 FUNC_2(&VAR_8->stats->rx);
 return 0;
}
