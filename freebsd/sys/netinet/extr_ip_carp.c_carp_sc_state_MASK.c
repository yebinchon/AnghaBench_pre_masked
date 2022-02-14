
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carp_softc {int sc_suppress; int sc_md6_tmo; int sc_md_tmo; int sc_ad_tmo; TYPE_1__* sc_carpdev; } ;
struct TYPE_2__ {scalar_t__ if_link_state; int if_flags; } ;


 int FUNC_0 (struct carp_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct carp_softc*,int ,char*) ;
 int FUNC_4 (struct carp_softc*,int ) ;

__attribute__((used)) static void
FUNC_5(struct carp_softc *VAR_5)
{

 FUNC_0(VAR_5);

 if (VAR_5->sc_carpdev->if_link_state != VAR_2 ||
     !(VAR_5->sc_carpdev->if_flags & VAR_0) ||
     !VAR_3) {
  FUNC_1(&VAR_5->sc_ad_tmo);






  FUNC_3(VAR_5, VAR_1, "hardware interface down");
  FUNC_4(VAR_5, 0);
  if (!VAR_5->sc_suppress)
   FUNC_2(VAR_4, "interface down");
  VAR_5->sc_suppress = 1;
 } else {
  FUNC_3(VAR_5, VAR_1, "hardware interface up");
  FUNC_4(VAR_5, 0);
  if (VAR_5->sc_suppress)
   FUNC_2(-VAR_4, "interface up");
  VAR_5->sc_suppress = 0;
 }
}
