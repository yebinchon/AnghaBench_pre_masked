
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct udphdr {int len; } ;
struct sock {int dummy; } ;
struct sk_buff {struct net_device* dev; } ;
struct rxe_pkt_info {int port_num; scalar_t__ paylen; int mask; int * hdr; struct rxe_dev* rxe; } ;
struct rxe_dev {int ib_dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct rxe_pkt_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*) ;
 struct rxe_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 struct udphdr* FUNC_9 (struct sk_buff*) ;
 struct net_device* FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct udphdr *VAR_3;
 struct net_device *VAR_4 = VAR_2->dev;
 struct net_device *VAR_5 = VAR_4;
 struct rxe_dev *VAR_6 = FUNC_6(VAR_4);
 struct rxe_pkt_info *VAR_7 = FUNC_0(VAR_2);

 if (!VAR_6 && FUNC_3(VAR_5)) {
  VAR_5 = FUNC_10(VAR_4);
  VAR_6 = FUNC_6(VAR_5);
 }
 if (!VAR_6)
  goto drop;

 if (FUNC_8(VAR_2)) {
  FUNC_5("skb_linearize failed\n");
  FUNC_2(&VAR_6->ib_dev);
  goto drop;
 }

 VAR_3 = FUNC_9(VAR_2);
 VAR_7->rxe = VAR_6;
 VAR_7->port_num = 1;
 VAR_7->hdr = (u8 *)(VAR_3 + 1);
 VAR_7->mask = VAR_0;
 VAR_7->paylen = FUNC_1(VAR_3->len) - sizeof(*VAR_3);

 FUNC_7(VAR_2);





 FUNC_2(&VAR_6->ib_dev);

 return 0;
drop:
 FUNC_4(VAR_2);

 return 0;
}
