
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfsync_softc {int dummy; } ;
struct pfsync_deferral {scalar_t__ pd_refs; struct pf_state* pd_st; struct mbuf* pd_m; struct pfsync_softc* pd_sc; } ;
struct pfsync_bucket {int b_deferred; int b_deferrals; } ;
struct pf_state {int state_flags; } ;
struct TYPE_4__ {TYPE_1__* rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct TYPE_3__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pfsync_bucket*) ;
 int FUNC_3 (struct pfsync_softc*) ;
 int FUNC_4 (int *,struct pfsync_deferral*,int ) ;
 int FUNC_5 (struct pfsync_deferral*,int ) ;
 int FUNC_6 (struct mbuf*,int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_7 (struct pf_state*) ;
 struct pfsync_bucket* FUNC_8 (struct pfsync_softc*,struct pf_state*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_3)
{
 struct pfsync_deferral *VAR_4 = VAR_3;
 struct pfsync_softc *VAR_5 = VAR_4->pd_sc;
 struct mbuf *VAR_6 = VAR_4->pd_m;
 struct pf_state *VAR_7 = VAR_4->pd_st;
 struct pfsync_bucket *VAR_8 = FUNC_8(VAR_5, VAR_7);

 FUNC_2(VAR_8);

 FUNC_1(VAR_6->m_pkthdr.rcvif->if_vnet);

 FUNC_4(&VAR_8->b_deferrals, VAR_4, VAR_2);
 VAR_8->b_deferred--;
 VAR_4->pd_st->state_flags &= ~VAR_1;
 if (VAR_4->pd_refs == 0)
  FUNC_5(VAR_4, VAR_0);
 FUNC_3(VAR_5);

 FUNC_6(VAR_6, ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0));

 FUNC_7(VAR_7);

 FUNC_0();
}
