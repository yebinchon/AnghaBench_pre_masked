
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_softc {scalar_t__ b_deferred; int sc_flags; struct pfsync_softc* sc_buckets; int sc_bulk_mtx; int sc_mtx; int sc_bulk_tmo; int sc_bulkfail_tmo; int b_tmo; int pd_tmo; int pd_refs; int pd_m; int pd_st; int b_deferrals; } ;
struct pfsync_deferral {scalar_t__ b_deferred; int sc_flags; struct pfsync_deferral* sc_buckets; int sc_bulk_mtx; int sc_mtx; int sc_bulk_tmo; int sc_bulkfail_tmo; int b_tmo; int pd_tmo; int pd_refs; int pd_m; int pd_st; int b_deferrals; } ;
struct pfsync_bucket {scalar_t__ b_deferred; int sc_flags; struct pfsync_bucket* sc_buckets; int sc_bulk_mtx; int sc_mtx; int sc_bulk_tmo; int sc_bulkfail_tmo; int b_tmo; int pd_tmo; int pd_refs; int pd_m; int pd_st; int b_deferrals; } ;
struct ifnet {struct pfsync_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pfsync_softc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pfsync_softc*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct pfsync_softc*,int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int FUNC_12 (struct pfsync_softc*) ;
 int FUNC_13 (struct pfsync_softc*) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static void
FUNC_15(struct ifnet *VAR_6)
{
 struct pfsync_softc *VAR_7 = VAR_6->if_softc;
 struct pfsync_bucket *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = &VAR_7->sc_buckets[VAR_9];





  while (VAR_8->b_deferred > 0) {
   struct pfsync_deferral *VAR_10 =
       FUNC_0(&VAR_8->b_deferrals);

   FUNC_1(&VAR_8->b_deferrals, VAR_10, VAR_4);
   VAR_8->b_deferred--;
   if (FUNC_4(&VAR_10->pd_tmo) > 0) {
    FUNC_11(VAR_10->pd_st);
    FUNC_9(VAR_10->pd_m);
    FUNC_6(VAR_10, VAR_0);
   } else {
    VAR_10->pd_refs++;
    FUNC_3(&VAR_10->pd_tmo);
    FUNC_6(VAR_10, VAR_0);
   }
  }

  FUNC_3(&VAR_8->b_tmo);
 }

 FUNC_3(&VAR_7->sc_bulkfail_tmo);
 FUNC_3(&VAR_7->sc_bulk_tmo);

 if (!(VAR_7->sc_flags & VAR_1) && &FUNC_5)
  FUNC_5)(-VAR_2, "pfsync destroy");
 FUNC_2(VAR_6);
 FUNC_7(VAR_6);

 FUNC_12(VAR_7);

 FUNC_8(VAR_6);
 FUNC_13(VAR_7);
 FUNC_10(&VAR_7->sc_mtx);
 FUNC_10(&VAR_7->sc_bulk_mtx);

 FUNC_6(VAR_7->sc_buckets, VAR_0);
 FUNC_6(VAR_7, VAR_0);

 VAR_3 = ((void*)0);
}
