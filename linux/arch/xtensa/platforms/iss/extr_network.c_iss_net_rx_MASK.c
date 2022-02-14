
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int protocol; struct net_device* dev; } ;
struct net_device {scalar_t__ mtu; } ;
struct TYPE_4__ {int rx_packets; int rx_bytes; int rx_dropped; } ;
struct TYPE_3__ {scalar_t__ (* poll ) (struct iss_net_private*) ;int (* read ) (struct iss_net_private*,struct sk_buff**) ;int (* protocol ) (struct sk_buff*) ;} ;
struct iss_net_private {TYPE_2__ stats; TYPE_1__ tp; } ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 struct iss_net_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct iss_net_private*) ;
 int FUNC_9 (struct iss_net_private*,struct sk_buff**) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 struct iss_net_private *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;
 struct sk_buff *VAR_4;



 if (VAR_2->tp.poll(VAR_2) == 0)
  return 0;



 VAR_4 = FUNC_0(VAR_1->mtu + 2 + VAR_0);
 if (VAR_4 == ((void*)0)) {
  VAR_2->stats.rx_dropped++;
  return 0;
 }

 FUNC_5(VAR_4, 2);



 VAR_4->dev = VAR_1;
 FUNC_6(VAR_4);
 VAR_3 = VAR_2->tp.read(VAR_2, &VAR_4);
 FUNC_4(VAR_4, VAR_3);

 if (VAR_3 > 0) {
  FUNC_7(VAR_4, VAR_3);
  VAR_4->protocol = VAR_2->tp.protocol(VAR_4);

  VAR_2->stats.rx_bytes += VAR_4->len;
  VAR_2->stats.rx_packets++;
  FUNC_3(VAR_4);
  return VAR_3;
 }
 FUNC_1(VAR_4);
 return VAR_3;
}
