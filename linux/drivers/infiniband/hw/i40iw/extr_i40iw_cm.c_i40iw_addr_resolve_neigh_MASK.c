
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtable {int dst; } ;
struct net_device {int dummy; } ;
struct neighbour {int nud_state; int ha; } ;
struct i40iw_device {TYPE_1__* arp_table; struct net_device* netdev; } ;
typedef int __be32 ;
struct TYPE_2__ {int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_3 ;
 struct neighbour* FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i40iw_device*,int *,int,int *,int ) ;
 int FUNC_5 (struct i40iw_device*,int ,int *,int,int ) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 struct rtable* FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (struct rtable*) ;
 int FUNC_9 (struct neighbour*,int *) ;
 int FUNC_10 (struct neighbour*) ;
 struct net_device* FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct i40iw_device *VAR_5,
        u32 VAR_6,
        u32 VAR_7,
        int VAR_8)
{
 struct rtable *VAR_9;
 struct neighbour *VAR_10;
 int VAR_11 = VAR_8;
 struct net_device *VAR_12 = VAR_5->netdev;
 __be32 VAR_13 = FUNC_3(VAR_7);
 __be32 VAR_14 = FUNC_3(VAR_6);

 VAR_9 = FUNC_7(&VAR_4, VAR_13, VAR_14, 0, 0);
 if (FUNC_0(VAR_9)) {
  FUNC_6("ip_route_output\n");
  return VAR_11;
 }

 if (FUNC_12(VAR_12))
  VAR_12 = FUNC_11(VAR_12);

 VAR_10 = FUNC_1(&VAR_9->dst, &VAR_13);

 FUNC_13();
 if (VAR_10) {
  if (VAR_10->nud_state & VAR_3) {
   if (VAR_8 >= 0) {
    if (FUNC_2(VAR_5->arp_table[VAR_8].mac_addr,
           VAR_10->ha))

     goto resolve_neigh_exit;
    FUNC_5(VAR_5,
             VAR_5->arp_table[VAR_8].mac_addr,
             &VAR_7,
             1,
             VAR_1);
   }

   FUNC_5(VAR_5, VAR_10->ha, &VAR_7, 1, VAR_0);
   VAR_11 = FUNC_4(VAR_5, &VAR_7, 1, ((void*)0), VAR_2);
  } else {
   FUNC_9(VAR_10, ((void*)0));
  }
 }
 resolve_neigh_exit:

 FUNC_14();
 if (VAR_10)
  FUNC_10(VAR_10);

 FUNC_8(VAR_9);
 return VAR_11;
}
