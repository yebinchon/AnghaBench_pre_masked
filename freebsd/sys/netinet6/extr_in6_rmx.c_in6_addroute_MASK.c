
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct rtentry {int rt_flags; scalar_t__ rt_mtu; int * rt_ifp; TYPE_1__* rt_ifa; } ;
struct radix_node {int dummy; } ;
struct radix_head {int dummy; } ;
struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_3__ {int ifa_addr; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct radix_node* FUNC_3 (void*,void*,struct radix_head*,struct radix_node*) ;
 scalar_t__ FUNC_4 (struct rtentry*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static struct radix_node *
FUNC_6(void *VAR_3, void *VAR_4, struct radix_head *VAR_5,
    struct radix_node *VAR_6)
{
 struct rtentry *VAR_7 = (struct rtentry *)VAR_6;
 struct sockaddr_in6 *VAR_8 = (struct sockaddr_in6 *)FUNC_4(VAR_7);

 if (FUNC_1(&VAR_8->sin6_addr))
  VAR_7->rt_flags |= VAR_2;
 if (VAR_7->rt_flags & VAR_0) {
  if (FUNC_0(&FUNC_5(VAR_7->rt_ifa->ifa_addr)
     ->sin6_addr,
           &VAR_8->sin6_addr)) {
   VAR_7->rt_flags |= VAR_1;
  }
 }

 if (VAR_7->rt_ifp != ((void*)0)) {






  if (VAR_7->rt_mtu == 0) {
   VAR_7->rt_mtu = FUNC_2(VAR_7->rt_ifp);
  } else if (VAR_7->rt_mtu > FUNC_2(VAR_7->rt_ifp))
   VAR_7->rt_mtu = FUNC_2(VAR_7->rt_ifp);
 }

 return (FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6));
}
