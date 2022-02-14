
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ip6_pktopts {TYPE_1__* ip6po_nexthop; int * ip6po_pktinfo; int ip6po_prefer_tempaddr; int ip6po_minmtu; int ip6po_flags; int ip6po_tclass; int ip6po_hlim; } ;
struct TYPE_3__ {int sa_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (struct ip6_pktopts*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct ip6_pktopts *VAR_7, struct ip6_pktopts *VAR_8, int VAR_9)
{
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_4("ip6_clearpktopts: invalid argument\n");
  return (VAR_0);
 }

 VAR_7->ip6po_hlim = VAR_8->ip6po_hlim;
 VAR_7->ip6po_tclass = VAR_8->ip6po_tclass;
 VAR_7->ip6po_flags = VAR_8->ip6po_flags;
 VAR_7->ip6po_minmtu = VAR_8->ip6po_minmtu;
 VAR_7->ip6po_prefer_tempaddr = VAR_8->ip6po_prefer_tempaddr;
 if (VAR_8->ip6po_pktinfo) {
  VAR_7->ip6po_pktinfo = FUNC_3(sizeof(*VAR_7->ip6po_pktinfo),
      VAR_2, VAR_9);
  if (VAR_7->ip6po_pktinfo == ((void*)0))
   goto bad;
  *VAR_7->ip6po_pktinfo = *VAR_8->ip6po_pktinfo;
 }
 if (VAR_8->ip6po_nexthop) {
  VAR_7->ip6po_nexthop = FUNC_3(VAR_8->ip6po_nexthop->sa_len,
      VAR_2, VAR_9);
  if (VAR_7->ip6po_nexthop == ((void*)0))
   goto bad;
  FUNC_1(VAR_8->ip6po_nexthop, VAR_7->ip6po_nexthop,
      VAR_8->ip6po_nexthop->sa_len);
 }
 FUNC_0(VAR_5);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_6);
 return (0);

  bad:
 FUNC_2(VAR_7, -1);
 return (VAR_1);
}
