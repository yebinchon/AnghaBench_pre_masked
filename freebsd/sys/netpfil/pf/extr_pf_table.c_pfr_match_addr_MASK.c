
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in6 {int sin_len; int sin_family; int sin6_len; int sin6_family; int sin6_addr; TYPE_1__ sin_addr; } ;
struct sockaddr_in {int sin_len; int sin_family; int sin6_len; int sin6_family; int sin6_addr; TYPE_1__ sin_addr; } ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_nomatch; int pfrkt_match; TYPE_3__* pfrkt_ip6; TYPE_2__* pfrkt_ip4; struct pfr_ktable* pfrkt_root; } ;
struct pfr_kentry {int pfrke_not; } ;
struct pf_addr {int * addr32; } ;
typedef int sin6 ;
typedef int sin ;
typedef int sa_family_t ;
struct TYPE_6__ {int rh; } ;
struct TYPE_5__ {int rh; } ;




 int FUNC_0 (struct pfr_kentry*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pf_addr*,int *,int) ;
 int FUNC_3 (struct sockaddr_in6*,int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct sockaddr_in6*,int *) ;

int
FUNC_6(struct pfr_ktable *VAR_1, struct pf_addr *VAR_2, sa_family_t VAR_3)
{
 struct pfr_kentry *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_1();

 if (!(VAR_1->pfrkt_flags & VAR_0) && VAR_1->pfrkt_root != ((void*)0))
  VAR_1 = VAR_1->pfrkt_root;
 if (!(VAR_1->pfrkt_flags & VAR_0))
  return (0);

 switch (VAR_3) {
 }
 VAR_5 = (VAR_4 && !VAR_4->pfrke_not);
 if (VAR_5)
  FUNC_4(VAR_1->pfrkt_match, 1);
 else
  FUNC_4(VAR_1->pfrkt_nomatch, 1);
 return (VAR_5);
}
