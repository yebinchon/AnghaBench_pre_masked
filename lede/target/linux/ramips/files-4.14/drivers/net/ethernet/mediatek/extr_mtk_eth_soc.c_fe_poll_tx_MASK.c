
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sk_buff {scalar_t__ len; } ;
struct device {int dummy; } ;
struct net_device {struct device dev; } ;
struct fe_tx_ring {size_t tx_free_idx; scalar_t__ tx_thresh; struct fe_tx_buf* tx_buf; } ;
struct fe_tx_buf {struct sk_buff* skb; } ;
struct fe_priv {struct fe_tx_ring tx_ring; struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (struct fe_tx_ring*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (struct device*,struct fe_tx_buf*) ;
 int FUNC_5 (struct net_device*,int,unsigned int) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct fe_priv *VAR_3, int VAR_4, u32 VAR_5,
        int *VAR_6)
{
 struct net_device *VAR_7 = VAR_3->netdev;
 struct device *VAR_8 = &VAR_7->dev;
 unsigned int VAR_9 = 0;
 struct sk_buff *VAR_10;
 struct fe_tx_buf *VAR_11;
 int VAR_12 = 0;
 u32 VAR_13, VAR_14;
 struct fe_tx_ring *VAR_15 = &VAR_3->tx_ring;

 VAR_13 = VAR_15->tx_free_idx;
 VAR_14 = FUNC_2(VAR_2);

 while ((VAR_13 != VAR_14) && VAR_4) {
  VAR_11 = &VAR_15->tx_buf[VAR_13];
  VAR_10 = VAR_11->skb;

  if (!VAR_10)
   break;

  if (VAR_10 != (struct sk_buff *)VAR_0) {
   VAR_9 += VAR_10->len;
   VAR_12++;
   VAR_4--;
  }
  FUNC_4(VAR_8, VAR_11);
  VAR_13 = FUNC_0(VAR_13);
 }
 VAR_15->tx_free_idx = VAR_13;

 if (VAR_13 == VAR_14) {

  VAR_14 = FUNC_2(VAR_2);
  if (VAR_13 == VAR_14)
   FUNC_3(VAR_5, VAR_1);
  else
   *VAR_6 = 1;
 } else {
  *VAR_6 = 1;
 }

 if (VAR_12) {
  FUNC_5(VAR_7, VAR_12, VAR_9);
  FUNC_8();
  if (FUNC_9(FUNC_6(VAR_7) &&
        (FUNC_1(VAR_15) > VAR_15->tx_thresh)))
   FUNC_7(VAR_7);
 }

 return VAR_12;
}
