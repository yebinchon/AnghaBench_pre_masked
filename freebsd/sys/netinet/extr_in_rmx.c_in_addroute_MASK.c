
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_4__ sin_addr; } ;
struct rtentry {int rt_flags; scalar_t__ rt_mtu; TYPE_5__* rt_ifp; TYPE_2__* rt_ifa; } ;
struct radix_node {int dummy; } ;
struct radix_head {int dummy; } ;
struct epoch_tracker {int dummy; } ;
struct TYPE_10__ {scalar_t__ if_mtu; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_8__ {TYPE_1__ sin_addr; } ;
struct TYPE_7__ {int ifa_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__,TYPE_5__*) ;
 int FUNC_4 (scalar_t__) ;
 struct radix_node* FUNC_5 (void*,void*,struct radix_head*,struct radix_node*) ;
 scalar_t__ FUNC_6 (struct rtentry*) ;
 TYPE_3__* FUNC_7 (int ) ;

__attribute__((used)) static struct radix_node *
FUNC_8(void *VAR_4, void *VAR_5, struct radix_head *VAR_6,
    struct radix_node *VAR_7)
{
 struct rtentry *VAR_8 = (struct rtentry *)VAR_7;
 struct sockaddr_in *VAR_9 = (struct sockaddr_in *)FUNC_6(VAR_8);
 if (VAR_8->rt_flags & VAR_1) {
  struct epoch_tracker VAR_10;
  bool VAR_11;

  FUNC_1(VAR_10);
  VAR_11 = FUNC_3(VAR_9->sin_addr, VAR_8->rt_ifp);
  FUNC_2(VAR_10);
  if (VAR_11)
   VAR_8->rt_flags |= VAR_0;
  else if (FUNC_7(VAR_8->rt_ifa->ifa_addr)->sin_addr.s_addr ==
      VAR_9->sin_addr.s_addr)
   VAR_8->rt_flags |= VAR_2;
 }
 if (FUNC_0(FUNC_4(VAR_9->sin_addr.s_addr)))
  VAR_8->rt_flags |= VAR_3;

 if (VAR_8->rt_ifp != ((void*)0)) {






  if (VAR_8->rt_mtu == 0) {
   VAR_8->rt_mtu = VAR_8->rt_ifp->if_mtu;
  } else if (VAR_8->rt_mtu > VAR_8->rt_ifp->if_mtu)
   VAR_8->rt_mtu = VAR_8->rt_ifp->if_mtu;
 }

 return (FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7));
}
