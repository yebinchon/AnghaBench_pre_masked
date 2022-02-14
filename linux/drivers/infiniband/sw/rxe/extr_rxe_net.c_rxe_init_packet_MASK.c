
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct sk_buff {void* protocol; struct net_device const* dev; } ;
struct rxe_pkt_info {int port_num; int mask; int hdr; struct rxe_dev* rxe; } ;
struct rxe_dev {int ib_dev; } ;
struct TYPE_2__ {int sgid_index; } ;
struct rxe_av {scalar_t__ network_type; TYPE_1__ grh; } ;
typedef struct net_device const net_device ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
typedef struct net_device ib_gid_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct net_device* FUNC_6 (int *,int const,int ) ;
 int FUNC_7 (struct net_device const*) ;
 struct net_device* FUNC_8 (struct net_device const*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

struct sk_buff *FUNC_12(struct rxe_dev *VAR_6, struct rxe_av *VAR_7,
    int VAR_8, struct rxe_pkt_info *VAR_9)
{
 unsigned int VAR_10;
 struct sk_buff *VAR_11 = ((void*)0);
 struct net_device *VAR_12;
 const struct ib_gid_attr *VAR_13;
 const int VAR_14 = 1;

 VAR_13 = FUNC_6(&VAR_6->ib_dev, VAR_14, VAR_7->grh.sgid_index);
 if (FUNC_0(VAR_13))
  return ((void*)0);

 if (VAR_7->network_type == VAR_4)
  VAR_10 = VAR_0 + sizeof(struct udphdr) +
   sizeof(struct iphdr);
 else
  VAR_10 = VAR_0 + sizeof(struct udphdr) +
   sizeof(struct ipv6hdr);

 FUNC_4();
 VAR_12 = FUNC_8(VAR_13);
 if (FUNC_0(VAR_12)) {
  FUNC_5();
  goto out;
 }
 VAR_11 = FUNC_2(VAR_8 + VAR_10 + FUNC_1(VAR_12),
   VAR_3);

 if (FUNC_11(!VAR_11)) {
  FUNC_5();
  goto out;
 }

 FUNC_10(VAR_11, VAR_10 + FUNC_1(VAR_12));


 VAR_11->dev = VAR_12;
 FUNC_5();

 if (VAR_7->network_type == VAR_4)
  VAR_11->protocol = FUNC_3(VAR_1);
 else
  VAR_11->protocol = FUNC_3(VAR_2);

 VAR_9->rxe = VAR_6;
 VAR_9->port_num = VAR_14;
 VAR_9->hdr = FUNC_9(VAR_11, VAR_8);
 VAR_9->mask |= VAR_5;

out:
 FUNC_7(VAR_13);
 return VAR_11;
}
