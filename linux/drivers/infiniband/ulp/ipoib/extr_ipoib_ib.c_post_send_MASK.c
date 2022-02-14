
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ipoib_tx_buf {struct sk_buff* skb; } ;
struct TYPE_6__ {unsigned int wr_id; int opcode; } ;
struct TYPE_4__ {int hlen; TYPE_3__ wr; void* header; int mss; struct ib_ah* ah; int remote_qpn; } ;
struct ipoib_dev_priv {TYPE_1__ tx_wr; int qp; } ;
struct ib_ah {int dummy; } ;
struct TYPE_5__ {int gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*,int *) ;
 int FUNC_1 (struct ipoib_dev_priv*,struct ipoib_tx_buf*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct ipoib_dev_priv *VAR_2,
       unsigned int VAR_3,
       struct ib_ah *VAR_4, u32 VAR_5,
       struct ipoib_tx_buf *VAR_6,
       void *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9 = VAR_6->skb;

 FUNC_1(VAR_2, VAR_6);

 VAR_2->tx_wr.wr.wr_id = VAR_3;
 VAR_2->tx_wr.remote_qpn = VAR_5;
 VAR_2->tx_wr.ah = VAR_4;

 if (VAR_7) {
  VAR_2->tx_wr.mss = FUNC_2(VAR_9)->gso_size;
  VAR_2->tx_wr.header = VAR_7;
  VAR_2->tx_wr.hlen = VAR_8;
  VAR_2->tx_wr.wr.opcode = VAR_0;
 } else
  VAR_2->tx_wr.wr.opcode = VAR_1;

 return FUNC_0(VAR_2->qp, &VAR_2->tx_wr.wr, ((void*)0));
}
