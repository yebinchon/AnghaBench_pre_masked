
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_softc {int sc_bulk_tmo; scalar_t__ sc_bulk_stateid; scalar_t__ sc_bulk_hashid; int sc_ureq_received; } ;
struct TYPE_2__ {scalar_t__ debug; } ;


 int FUNC_0 (struct pfsync_softc*) ;
 int FUNC_1 (struct pfsync_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct pfsync_softc* VAR_3 ;
 int FUNC_2 (int *,int,int ,struct pfsync_softc*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct pfsync_softc *VAR_6 = VAR_3;

 if (VAR_2.debug >= VAR_1)
  FUNC_4("pfsync: received bulk update request\n");

 FUNC_0(VAR_6);

 VAR_6->sc_ureq_received = VAR_5;
 VAR_6->sc_bulk_hashid = 0;
 VAR_6->sc_bulk_stateid = 0;
 FUNC_3(VAR_0);
 FUNC_2(&VAR_6->sc_bulk_tmo, 1, VAR_4, VAR_6);
 FUNC_1(VAR_6);
}
