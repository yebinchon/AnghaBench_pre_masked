
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin6; int sin; } ;
struct pfr_kentry {scalar_t__ pfrke_af; int pfrke_counters; int pfrke_not; int pfrke_net; TYPE_1__ pfrke_sa; } ;
struct pfr_addr {scalar_t__ pfra_af; int pfra_not; int pfra_net; int pfra_ip6addr; int pfra_ip4addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct pfr_kentry*) ;
 struct pfr_kentry* FUNC_4 (int ,int) ;

__attribute__((used)) static struct pfr_kentry *
FUNC_5(struct pfr_addr *VAR_7)
{
 struct pfr_kentry *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_4(VAR_6, VAR_2 | VAR_3);
 if (VAR_8 == ((void*)0))
  return (((void*)0));

 if (VAR_7->pfra_af == VAR_0)
  FUNC_0(VAR_8->pfrke_sa.sin, VAR_7->pfra_ip4addr);
 else if (VAR_7->pfra_af == VAR_1)
  FUNC_1(VAR_8->pfrke_sa.sin6, VAR_7->pfra_ip6addr);
 VAR_8->pfrke_af = VAR_7->pfra_af;
 VAR_8->pfrke_net = VAR_7->pfra_net;
 VAR_8->pfrke_not = VAR_7->pfra_not;
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 ++)
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10 ++) {
   if (! FUNC_2(&VAR_8->pfrke_counters,
       VAR_9, VAR_10)) {
    FUNC_3(VAR_8);
    return (((void*)0));
   }
  }
 return (VAR_8);
}
