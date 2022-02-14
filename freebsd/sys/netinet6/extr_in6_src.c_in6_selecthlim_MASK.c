
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct nhop6_basic {struct ifnet* nh_ifp; } ;
struct TYPE_3__ {int inc_fibnum; } ;
struct inpcb {scalar_t__ in6p_hops; int in6p_faddr; TYPE_1__ inp_inc; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {int chlim; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct ifnet*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,struct in6_addr*,int ,int ,int ,struct nhop6_basic*) ;
 int FUNC_3 (int *,struct in6_addr*,int *) ;

int
FUNC_4(struct inpcb *VAR_1, struct ifnet *VAR_2)
{

 if (VAR_1 && VAR_1->in6p_hops >= 0)
  return (VAR_1->in6p_hops);
 else if (VAR_2)
  return (FUNC_1(VAR_2)->chlim);
 else if (VAR_1 && !FUNC_0(&VAR_1->in6p_faddr)) {
  struct nhop6_basic VAR_3;
  struct in6_addr VAR_4;
  uint32_t VAR_5, VAR_6;
  int VAR_7;

  VAR_5 = VAR_1->inp_inc.inc_fibnum;
  FUNC_3(&VAR_1->in6p_faddr, &VAR_4, &VAR_6);
  if (FUNC_2(VAR_5, &VAR_4, VAR_6, 0, 0, &VAR_3)==0){
   VAR_7 = FUNC_1(VAR_3)->chlim;
   return (VAR_7);
  }
 }
 return (VAR_0);
}
