
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_softc {int sc_flags; TYPE_1__* sc_ifp; } ;
struct pfsync_deferral {int pd_tmo; struct mbuf* pd_m; struct pf_state* pd_st; scalar_t__ pd_refs; struct pfsync_softc* pd_sc; } ;
struct pfsync_bucket {int b_deferred; int b_mtx; int b_deferrals; } ;
struct pf_state {int state_flags; } ;
struct mbuf {int m_flags; } ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pfsync_softc*) ;
 int FUNC_1 (struct pfsync_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct pfsync_deferral*,int ) ;
 struct pfsync_softc* VAR_9 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int,int ,struct pfsync_deferral*) ;
 struct pfsync_deferral* FUNC_6 (int,int ,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct pf_state*) ;
 int VAR_11 ;
 struct pfsync_bucket* FUNC_8 (struct pfsync_softc*,struct pf_state*) ;
 int FUNC_9 (struct pfsync_bucket*) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct pf_state *VAR_12, struct mbuf *VAR_13)
{
 struct pfsync_softc *VAR_14 = VAR_9;
 struct pfsync_deferral *VAR_15;
 struct pfsync_bucket *VAR_16 = FUNC_8(VAR_14, VAR_12);

 if (VAR_13->m_flags & (VAR_2|VAR_3))
  return (0);

 FUNC_0(VAR_14);

 if (VAR_14 == ((void*)0) || !(VAR_14->sc_ifp->if_flags & VAR_1) ||
     !(VAR_14->sc_flags & VAR_8)) {
  FUNC_1(VAR_14);
  return (0);
 }

 if (VAR_16->b_deferred >= 128)
  FUNC_10(FUNC_2(&VAR_16->b_deferrals), 0);

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_5, VAR_4);
 if (VAR_15 == ((void*)0))
  return (0);
 VAR_16->b_deferred++;

 VAR_13->m_flags |= VAR_6;
 VAR_12->state_flags |= VAR_7;

 VAR_15->pd_sc = VAR_14;
 VAR_15->pd_refs = 0;
 VAR_15->pd_st = VAR_12;
 FUNC_7(VAR_12);
 VAR_15->pd_m = VAR_13;

 FUNC_3(&VAR_16->b_deferrals, VAR_15, VAR_10);
 FUNC_4(&VAR_15->pd_tmo, &VAR_16->b_mtx, VAR_0);
 FUNC_5(&VAR_15->pd_tmo, 10, VAR_11, VAR_15);

 FUNC_9(VAR_16);

 return (1);
}
