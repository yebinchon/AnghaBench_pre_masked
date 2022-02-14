
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_multi {struct ifmultiaddr* inm_ifma; struct ifnet* inm_ifp; } ;
struct ifnet {int if_xname; int if_multiaddrs; } ;
struct ifmultiaddr {int ifma_flags; scalar_t__ ifma_refcount; struct ifnet* ifma_ifp; struct ifmultiaddr* ifma_llifma; } ;


 int FUNC_0 (int *,struct ifmultiaddr*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (char*,struct ifmultiaddr*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ifmultiaddr*) ;
 int FUNC_5 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(struct in_multi *VAR_4)
{
 struct ifnet *VAR_5;
 struct ifmultiaddr *VAR_6, *VAR_7;

 VAR_5 = VAR_4->inm_ifp;
 FUNC_1(VAR_5);
 VAR_6 = VAR_4->inm_ifma;

 FUNC_5(VAR_5);
 if (VAR_6->ifma_flags & VAR_0) {
  FUNC_0(&VAR_5->if_multiaddrs, VAR_6, VAR_3, VAR_1);
  VAR_6->ifma_flags &= ~VAR_0;
 }
 FUNC_2("removed ifma: %p from %s\n", VAR_6, VAR_5->if_xname);
 if ((VAR_7 = VAR_6->ifma_llifma) != ((void*)0)) {
  FUNC_3(VAR_6 != VAR_7);
  VAR_6->ifma_llifma = ((void*)0);
  FUNC_3(VAR_7->ifma_llifma == ((void*)0));
  FUNC_3(VAR_7->ifma_ifp == VAR_5);
  if (--VAR_7->ifma_refcount == 0) {
   if (VAR_7->ifma_flags & VAR_0) {
    FUNC_0(&VAR_5->if_multiaddrs, VAR_7, VAR_3, VAR_1);
    VAR_7->ifma_flags &= ~VAR_0;
   }
   FUNC_2("removed ll_ifma: %p from %s\n", VAR_7, VAR_5->if_xname);
   FUNC_4(VAR_7);
   VAR_2 = 1;
  }
 }
}
