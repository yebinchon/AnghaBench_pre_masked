
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct ipoib_pseudo_header {int dummy; } ;
struct ipoib_dev_priv {TYPE_1__* rx_ring; int ca; int max_ib_mtu; } ;
struct TYPE_2__ {struct sk_buff* skb; int * mapping; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct net_device *VAR_2, int VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_5(VAR_2);
 struct sk_buff *VAR_5;
 int VAR_6;
 u64 *VAR_7;

 VAR_6 = FUNC_0(VAR_4->max_ib_mtu);

 VAR_5 = FUNC_1(VAR_6 + VAR_1);
 if (FUNC_7(!VAR_5))
  return ((void*)0);





 FUNC_6(VAR_5, sizeof(struct ipoib_pseudo_header));

 VAR_7 = VAR_4->rx_ring[VAR_3].mapping;
 VAR_7[0] = FUNC_3(VAR_4->ca, VAR_5->data, VAR_6,
           VAR_0);
 if (FUNC_7(FUNC_4(VAR_4->ca, VAR_7[0])))
  goto error;

 VAR_4->rx_ring[VAR_3].skb = VAR_5;
 return VAR_5;
error:
 FUNC_2(VAR_5);
 return ((void*)0);
}
