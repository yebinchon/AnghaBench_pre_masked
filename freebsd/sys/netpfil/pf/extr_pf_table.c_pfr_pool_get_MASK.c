
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sin6_len; int sin6_family; } ;
struct TYPE_5__ {int sin_len; int sin_family; } ;
union sockaddr_union {TYPE_2__ sin6; TYPE_1__ sin; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct pfr_ktable {int pfrkt_flags; int pfrkt_match; TYPE_4__* pfrkt_ip6; TYPE_3__* pfrkt_ip4; int pfrkt_nomatch; struct pfr_ktable* pfrkt_root; } ;
struct pfr_kentry {int pfrke_net; union sockaddr_union pfrke_sa; } ;
struct pf_addr {int dummy; } ;
typedef int const sa_family_t ;
struct TYPE_8__ {int rh; } ;
struct TYPE_7__ {int rh; } ;




 int FUNC_0 (struct pfr_kentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct pf_addr*,struct pf_addr*,int const) ;
 int FUNC_2 (struct pf_addr*,int const) ;
 int FUNC_3 (int ,struct pf_addr*,struct pf_addr*,struct pf_addr*,int const) ;
 int FUNC_4 (struct pf_addr*,struct pf_addr*,struct pf_addr*,int *,int const) ;
 struct pf_addr* FUNC_5 (union sockaddr_union*,int const) ;
 int FUNC_6 (int ,int) ;
 int VAR_1 ;
 struct pfr_kentry* FUNC_7 (struct pfr_ktable*,int,int const) ;
 int FUNC_8 (union sockaddr_union*,int const,int ) ;
 scalar_t__ FUNC_9 (union sockaddr_union*,int *) ;

int
FUNC_10(struct pfr_ktable *VAR_2, int *VAR_3, struct pf_addr *VAR_4,
    sa_family_t VAR_5)
{
 struct pf_addr *VAR_6, *VAR_7, *VAR_8;
 union sockaddr_union VAR_9, VAR_10;
 struct pfr_kentry *VAR_11, *VAR_12 = ((void*)0);
 int VAR_13 = -1, VAR_14 = 0;

 switch (VAR_5) {
 case 129:
  VAR_9.sin.sin_len = sizeof(struct sockaddr_in);
  VAR_9.sin.sin_family = 129;
  break;
 case 128:
  VAR_9.sin6.sin6_len = sizeof(struct sockaddr_in6);
  VAR_9.sin6.sin6_family = 128;
  break;
 }
 VAR_6 = FUNC_5(&VAR_9, VAR_5);

 if (!(VAR_2->pfrkt_flags & VAR_0) && VAR_2->pfrkt_root != ((void*)0))
  VAR_2 = VAR_2->pfrkt_root;
 if (!(VAR_2->pfrkt_flags & VAR_0))
  return (-1);

 if (VAR_3 != ((void*)0))
  VAR_13 = *VAR_3;
 if (VAR_4 != ((void*)0) && VAR_13 >= 0)
  VAR_14 = 1;
 if (VAR_13 < 0)
  VAR_13 = 0;

_next_block:
 VAR_11 = FUNC_7(VAR_2, VAR_13, VAR_5);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_2->pfrkt_nomatch, 1);
  return (1);
 }
 FUNC_8(&VAR_10, VAR_5, VAR_11->pfrke_net);
 VAR_7 = FUNC_5(&VAR_11->pfrke_sa, VAR_5);
 VAR_8 = FUNC_5(&VAR_10, VAR_5);

 if (VAR_14) {

  if (!FUNC_3(0, VAR_7, VAR_8, VAR_4, VAR_5)) {

   VAR_13++;
   VAR_14 = 0;
   goto _next_block;
  }
  FUNC_1(VAR_6, VAR_4, VAR_5);
 } else {

  FUNC_1(VAR_6, VAR_7, VAR_5);
 }

 if (!FUNC_0(VAR_11)) {

  FUNC_1(VAR_4, VAR_6, VAR_5);
  *VAR_3 = VAR_13;
  FUNC_6(VAR_2->pfrkt_match, 1);
  return (0);
 }
 for (;;) {

  switch (VAR_5) {
  case 129:
   VAR_12 = (struct pfr_kentry *)FUNC_9(&VAR_9,
       &VAR_2->pfrkt_ip4->rh);
   break;
  case 128:
   VAR_12 = (struct pfr_kentry *)FUNC_9(&VAR_9,
       &VAR_2->pfrkt_ip6->rh);
   break;
  }

  if (VAR_12 == VAR_11) {

   FUNC_1(VAR_4, VAR_6, VAR_5);
   *VAR_3 = VAR_13;
   FUNC_6(VAR_2->pfrkt_match, 1);
   return (0);
  }


  FUNC_8(&VAR_10, 129, VAR_12->pfrke_net);
  FUNC_4(VAR_6, VAR_6, FUNC_5(&VAR_10, VAR_5), &VAR_1, VAR_5);
  FUNC_2(VAR_6, VAR_5);
  if (!FUNC_3(0, VAR_7, VAR_8, VAR_6, VAR_5)) {


   VAR_13++;
   VAR_14 = 0;
   goto _next_block;
  }
 }
}
