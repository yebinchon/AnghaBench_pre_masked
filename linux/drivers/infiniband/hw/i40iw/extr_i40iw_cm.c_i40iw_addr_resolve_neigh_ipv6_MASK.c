
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int u6_addr32; } ;
struct TYPE_5__ {TYPE_1__ in6_u; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; void* sin6_family; } ;
struct net_device {int dummy; } ;
struct neighbour {int nud_state; int ha; } ;
struct i40iw_device {TYPE_3__* arp_table; int sc_dev; struct net_device* netdev; } ;
struct dst_entry {scalar_t__ error; } ;
typedef int src_addr ;
typedef int dst_addr ;
struct TYPE_6__ {int mac_addr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct neighbour* FUNC_0 (struct dst_entry*,int ) ;
 int FUNC_1 (struct dst_entry*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i40iw_device*,int *,int,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 struct dst_entry* FUNC_6 (struct sockaddr_in6*,struct sockaddr_in6*) ;
 int FUNC_7 (struct i40iw_device*,int ,int *,int,int ) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (struct sockaddr_in6*,int ,int) ;
 int FUNC_10 (struct neighbour*,int *) ;
 int FUNC_11 (struct neighbour*) ;
 struct net_device* FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (struct net_device*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct i40iw_device *VAR_6,
      u32 *VAR_7,
      u32 *VAR_8,
      int VAR_9)
{
 struct neighbour *VAR_10;
 int VAR_11 = VAR_9;
 struct net_device *VAR_12 = VAR_6->netdev;
 struct dst_entry *VAR_13;
 struct sockaddr_in6 VAR_14;
 struct sockaddr_in6 VAR_15;

 FUNC_9(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.sin6_family = VAR_0;
 FUNC_4(VAR_14.sin6_addr.in6_u.u6_addr32, VAR_8);
 FUNC_9(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.sin6_family = VAR_0;
 FUNC_4(VAR_15.sin6_addr.in6_u.u6_addr32, VAR_7);
 VAR_13 = FUNC_6(&VAR_15, &VAR_14);
 if (!VAR_13 || VAR_13->error) {
  if (VAR_13) {
   FUNC_1(VAR_13);
   FUNC_8("ip6_route_output returned dst->error = %d\n",
         VAR_13->error);
  }
  return VAR_11;
 }

 if (FUNC_13(VAR_12))
  VAR_12 = FUNC_12(VAR_12);

 VAR_10 = FUNC_0(VAR_13, VAR_14.sin6_addr.in6_u.u6_addr32);

 FUNC_14();
 if (VAR_10) {
  FUNC_5(&VAR_6->sc_dev, VAR_4, "dst_neigh_lookup MAC=%pM\n", VAR_10->ha);
  if (VAR_10->nud_state & VAR_5) {
   if (VAR_9 >= 0) {
    if (FUNC_2
        (VAR_6->arp_table[VAR_9].mac_addr,
         VAR_10->ha)) {

     goto resolve_neigh_exit6;
    }
    FUNC_7(VAR_6,
             VAR_6->arp_table[VAR_9].mac_addr,
             VAR_8,
             0,
             VAR_2);
   }
   FUNC_7(VAR_6,
            VAR_10->ha,
            VAR_8,
            0,
            VAR_1);
   VAR_11 = FUNC_3(VAR_6,
          VAR_8,
          0,
          ((void*)0),
          VAR_3);
  } else {
   FUNC_10(VAR_10, ((void*)0));
  }
 }

 resolve_neigh_exit6:
 FUNC_15();
 if (VAR_10)
  FUNC_11(VAR_10);
 FUNC_1(VAR_13);
 return VAR_11;
}
