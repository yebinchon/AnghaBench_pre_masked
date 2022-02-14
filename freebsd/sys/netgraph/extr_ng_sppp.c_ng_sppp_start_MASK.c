
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; TYPE_2__* if_softc; } ;
typedef TYPE_2__* priv_p ;
struct TYPE_4__ {int hook; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,struct mbuf*) ;
 struct mbuf* FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_3 (struct ifnet *VAR_1)
{
 struct mbuf *VAR_2;
 int VAR_3, VAR_4 = 0;
 priv_p VAR_5 = VAR_1->if_softc;
 if (VAR_1->if_drv_flags & VAR_0)
  return;

 if (!VAR_5->hook)
  return;

 VAR_1->if_drv_flags |= VAR_0;

 while ((VAR_2 = FUNC_2 (VAR_1)) != ((void*)0)) {
  FUNC_0 (VAR_1, VAR_2);
  VAR_3 = VAR_2->m_pkthdr.len;

  FUNC_1 (VAR_4, VAR_5->hook, VAR_2);

  if (VAR_4) {
   VAR_1->if_drv_flags &= ~VAR_0;
   return;
  }
 }
 VAR_1->if_drv_flags &= ~VAR_0;
}
