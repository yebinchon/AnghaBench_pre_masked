
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_softc {int dummy; } ;
struct pfsync_deferral {struct pf_state* pd_st; struct mbuf* pd_m; struct pfsync_softc* pd_sc; } ;
struct pfsync_bucket {int b_snd; int b_deferred; int b_deferrals; } ;
struct pf_state {int state_flags; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfsync_bucket*) ;
 int FUNC_1 (int *,struct pfsync_deferral*,int ) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (struct pfsync_deferral*,int ) ;
 int FUNC_4 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_5 (struct pf_state*) ;
 struct pfsync_bucket* FUNC_6 (struct pfsync_softc*,struct pf_state*) ;
 int FUNC_7 (struct pfsync_bucket*) ;

__attribute__((used)) static void
FUNC_8(struct pfsync_deferral *VAR_3, int VAR_4)
{
 struct pfsync_softc *VAR_5 = VAR_3->pd_sc;
 struct mbuf *VAR_6 = VAR_3->pd_m;
 struct pf_state *VAR_7 = VAR_3->pd_st;
 struct pfsync_bucket *VAR_8 = FUNC_6(VAR_5, VAR_7);

 FUNC_0(VAR_8);

 FUNC_1(&VAR_8->b_deferrals, VAR_3, VAR_2);
 VAR_8->b_deferred--;
 VAR_3->pd_st->state_flags &= ~VAR_1;
 FUNC_3(VAR_3, VAR_0);
 FUNC_5(VAR_7);

 if (VAR_4)
  FUNC_4(VAR_6);
 else {
  FUNC_2(&VAR_8->b_snd, VAR_6);
  FUNC_7(VAR_8);
 }
}
