
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_softc {int sc_bulk_hashid; scalar_t__ sc_ureq_received; int sc_bulk_tmo; int sc_bulk_creatorid; int sc_bulk_stateid; TYPE_1__* sc_ifp; } ;
struct pf_state {scalar_t__ sync_state; scalar_t__ timeout; scalar_t__ pfsync_time; int creatorid; int id; } ;
struct pf_idhash {int states; } ;
struct TYPE_2__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct pf_state* FUNC_2 (int *) ;
 struct pf_state* FUNC_3 (struct pf_state*,int ) ;
 int FUNC_4 (struct pfsync_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (struct pf_idhash*) ;
 int FUNC_6 (struct pf_idhash*) ;
 int FUNC_7 (struct pf_idhash*) ;
 int FUNC_8 (struct pf_state*) ;
 struct pf_idhash* VAR_3 ;
 int FUNC_9 (int *,int,void (*) (void*),struct pfsync_softc*) ;
 int VAR_4 ;
 struct pf_state* FUNC_10 (int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct pf_state*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_6)
{
 struct pfsync_softc *VAR_7 = VAR_6;
 struct pf_state *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_4(VAR_7);
 FUNC_1(VAR_7->sc_ifp->if_vnet);






 VAR_8 = FUNC_10(VAR_7->sc_bulk_stateid, VAR_7->sc_bulk_creatorid);

 if (VAR_8 != ((void*)0))
  VAR_9 = FUNC_8(VAR_8);
 else
  VAR_9 = VAR_7->sc_bulk_hashid;

 for (; VAR_9 <= VAR_5; VAR_9++) {
  struct pf_idhash *VAR_11 = &VAR_3[VAR_9];

  if (VAR_8 != ((void*)0))
   FUNC_5(VAR_11);
  else {
   FUNC_6(VAR_11);
   VAR_8 = FUNC_2(&VAR_11->states);
  }

  for (; VAR_8; VAR_8 = FUNC_3(VAR_8, VAR_4)) {
   if (VAR_8->sync_state == VAR_1 &&
       VAR_8->timeout < VAR_2 &&
       VAR_8->pfsync_time <= VAR_7->sc_ureq_received) {
    if (FUNC_12(VAR_8)) {

     VAR_7->sc_bulk_hashid = VAR_9;
     VAR_7->sc_bulk_stateid = VAR_8->id;
     VAR_7->sc_bulk_creatorid = VAR_8->creatorid;
     FUNC_7(VAR_11);
     FUNC_9(&VAR_7->sc_bulk_tmo, 1,
         FUNC_13, VAR_7);
     goto full;
    }
    VAR_10++;
   }
  }
  FUNC_7(VAR_11);
 }


 FUNC_11(VAR_0);
full:
 FUNC_0();
}
