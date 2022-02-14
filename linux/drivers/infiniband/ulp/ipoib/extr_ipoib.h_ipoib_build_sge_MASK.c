
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
struct sk_buff {int dummy; } ;
struct ipoib_tx_buf {void** mapping; struct sk_buff* skb; } ;
struct TYPE_6__ {int num_sge; } ;
struct TYPE_7__ {TYPE_2__ wr; } ;
struct ipoib_dev_priv {TYPE_3__ tx_wr; TYPE_1__* tx_sge; } ;
typedef int skb_frag_t ;
struct TYPE_8__ {int nr_frags; int * frags; } ;
struct TYPE_5__ {scalar_t__ length; void* addr; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_3(struct ipoib_dev_priv *VAR_0,
       struct ipoib_tx_buf *VAR_1)
{
 int VAR_2, VAR_3;
 struct sk_buff *VAR_4 = VAR_1->skb;
 skb_frag_t *VAR_5 = FUNC_2(VAR_4)->frags;
 int VAR_6 = FUNC_2(VAR_4)->nr_frags;
 u64 *VAR_7 = VAR_1->mapping;

 if (FUNC_1(VAR_4)) {
  VAR_0->tx_sge[0].addr = VAR_7[0];
  VAR_0->tx_sge[0].length = FUNC_1(VAR_4);
  VAR_3 = 1;
 } else
  VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_6; ++VAR_2) {
  VAR_0->tx_sge[VAR_2 + VAR_3].addr = VAR_7[VAR_2 + VAR_3];
  VAR_0->tx_sge[VAR_2 + VAR_3].length = FUNC_0(&VAR_5[VAR_2]);
 }
 VAR_0->tx_wr.wr.num_sge = VAR_6 + VAR_3;
}
