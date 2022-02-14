
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfsync_softc {int sc_flags; scalar_t__ sc_bulk_tries; scalar_t__ sc_ureq_sent; int sc_bulkfail_tmo; TYPE_1__* sc_ifp; struct pfsync_bucket* sc_buckets; } ;
struct pfsync_bucket {int dummy; } ;
struct TYPE_4__ {scalar_t__ debug; } ;
struct TYPE_3__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pfsync_softc*) ;
 int FUNC_3 (struct pfsync_bucket*) ;
 int FUNC_4 (struct pfsync_bucket*) ;
 int FUNC_5 (struct pfsync_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct pfsync_softc*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int,void (*) (void*),int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_7)
{
 struct pfsync_softc *VAR_8 = VAR_7;
 struct pfsync_bucket *VAR_9 = &VAR_8->sc_buckets[0];

 FUNC_1(VAR_8->sc_ifp->if_vnet);

 FUNC_2(VAR_8);

 if (VAR_8->sc_bulk_tries++ < VAR_1) {

  FUNC_7(&VAR_8->sc_bulkfail_tmo, 5 * VAR_6,
      FUNC_12, VAR_5);
  FUNC_3(VAR_9);
  FUNC_9(0, 0);
  FUNC_4(VAR_9);
 } else {

  VAR_8->sc_ureq_sent = 0;
  VAR_8->sc_bulk_tries = 0;
  FUNC_5(VAR_8);
  if (!(VAR_8->sc_flags & VAR_0) && &FUNC_8)
   FUNC_8)(-VAR_4,
       "pfsync bulk fail");
  VAR_8->sc_flags |= VAR_0;
  FUNC_6(VAR_8);
  if (VAR_3.debug >= VAR_2)
   FUNC_10("pfsync: failed to receive bulk update\n");
 }

 FUNC_0();
}
