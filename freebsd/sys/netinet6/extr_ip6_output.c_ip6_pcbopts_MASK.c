
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int * td_ucred; } ;
struct sockopt {struct thread* sopt_td; } ;
struct socket {TYPE_2__* so_proto; } ;
struct mbuf {scalar_t__ m_len; } ;
struct TYPE_3__ {scalar_t__ ip6po_rhi_rthdr; } ;
struct ip6_pktopts {TYPE_1__ ip6po_rhinfo; scalar_t__ ip6po_dest2; scalar_t__ ip6po_dest1; scalar_t__ ip6po_hbh; scalar_t__ ip6po_nexthop; scalar_t__ ip6po_pktinfo; } ;
struct TYPE_4__ {int pr_protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip6_pktopts*,int ) ;
 int FUNC_1 (struct ip6_pktopts*,int) ;
 int FUNC_2 (struct mbuf*,struct ip6_pktopts*,int *,int *,int ) ;
 struct ip6_pktopts* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct ip6_pktopts **VAR_2, struct mbuf *VAR_3,
    struct socket *VAR_4, struct sockopt *VAR_5)
{
 struct ip6_pktopts *VAR_6 = *VAR_2;
 int VAR_7 = 0;
 struct thread *VAR_8 = VAR_5->sopt_td;


 if (VAR_6) {






  FUNC_1(VAR_6, -1);
 } else
  VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0, VAR_1);
 *VAR_2 = ((void*)0);

 if (!VAR_3 || VAR_3->m_len == 0) {




  FUNC_0(VAR_6, VAR_0);
  return (0);
 }


 if ((VAR_7 = FUNC_2(VAR_3, VAR_6, ((void*)0), (VAR_8 != ((void*)0)) ?
     VAR_8->td_ucred : ((void*)0), VAR_4->so_proto->pr_protocol)) != 0) {
  FUNC_1(VAR_6, -1);
  FUNC_0(VAR_6, VAR_0);
  return (VAR_7);
 }
 *VAR_2 = VAR_6;
 return (0);
}
