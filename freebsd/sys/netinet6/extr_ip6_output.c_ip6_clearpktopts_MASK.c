
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ro_rt; } ;
struct TYPE_5__ {int * ip6po_rhi_rthdr; } ;
struct TYPE_4__ {int * ro_rt; } ;
struct ip6_pktopts {int ip6po_hlim; int ip6po_tclass; int * ip6po_dest2; TYPE_3__ ip6po_route; TYPE_2__ ip6po_rhinfo; int * ip6po_dest1; int * ip6po_hbh; int * ip6po_nexthop; TYPE_1__ ip6po_nextroute; int * ip6po_pktinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct ip6_pktopts *VAR_9, int VAR_10)
{
 if (VAR_9 == ((void*)0))
  return;

 if (VAR_10 == -1 || VAR_10 == VAR_4) {
  if (VAR_9->ip6po_pktinfo)
   FUNC_1(VAR_9->ip6po_pktinfo, VAR_8);
  VAR_9->ip6po_pktinfo = ((void*)0);
 }
 if (VAR_10 == -1 || VAR_10 == VAR_1)
  VAR_9->ip6po_hlim = -1;
 if (VAR_10 == -1 || VAR_10 == VAR_7)
  VAR_9->ip6po_tclass = -1;
 if (VAR_10 == -1 || VAR_10 == VAR_3) {
  if (VAR_9->ip6po_nextroute.ro_rt) {
   FUNC_0(VAR_9->ip6po_nextroute.ro_rt);
   VAR_9->ip6po_nextroute.ro_rt = ((void*)0);
  }
  if (VAR_9->ip6po_nexthop)
   FUNC_1(VAR_9->ip6po_nexthop, VAR_8);
  VAR_9->ip6po_nexthop = ((void*)0);
 }
 if (VAR_10 == -1 || VAR_10 == VAR_2) {
  if (VAR_9->ip6po_hbh)
   FUNC_1(VAR_9->ip6po_hbh, VAR_8);
  VAR_9->ip6po_hbh = ((void*)0);
 }
 if (VAR_10 == -1 || VAR_10 == VAR_6) {
  if (VAR_9->ip6po_dest1)
   FUNC_1(VAR_9->ip6po_dest1, VAR_8);
  VAR_9->ip6po_dest1 = ((void*)0);
 }
 if (VAR_10 == -1 || VAR_10 == VAR_5) {
  if (VAR_9->ip6po_rhinfo.ip6po_rhi_rthdr)
   FUNC_1(VAR_9->ip6po_rhinfo.ip6po_rhi_rthdr, VAR_8);
  VAR_9->ip6po_rhinfo.ip6po_rhi_rthdr = ((void*)0);
  if (VAR_9->ip6po_route.ro_rt) {
   FUNC_0(VAR_9->ip6po_route.ro_rt);
   VAR_9->ip6po_route.ro_rt = ((void*)0);
  }
 }
 if (VAR_10 == -1 || VAR_10 == VAR_0) {
  if (VAR_9->ip6po_dest2)
   FUNC_1(VAR_9->ip6po_dest2, VAR_8);
  VAR_9->ip6po_dest2 = ((void*)0);
 }
}
