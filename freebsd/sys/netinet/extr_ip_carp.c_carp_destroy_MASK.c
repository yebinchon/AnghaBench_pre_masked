
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct carp_if* if_carp; } ;
struct carp_softc {struct carp_softc* sc_ifas; int sc_md6_tmo; int sc_md_tmo; int sc_ad_tmo; scalar_t__ sc_suppress; struct ifnet* sc_carpdev; } ;
struct carp_if {int cif_vrs; } ;


 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (struct carp_softc*) ;
 int FUNC_2 (struct carp_if*) ;
 int FUNC_3 (struct carp_if*) ;
 int FUNC_4 (struct carp_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,struct carp_softc*,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct carp_softc*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void
FUNC_12(struct carp_softc *VAR_7)
{
 struct ifnet *VAR_8 = VAR_7->sc_carpdev;
 struct carp_if *VAR_9 = VAR_8->if_carp;

 FUNC_11(&VAR_4, VAR_1);

 if (VAR_7->sc_suppress)
  FUNC_7(-VAR_2, "vhid removed");
 FUNC_1(VAR_7);

 FUNC_2(VAR_9);
 FUNC_5(&VAR_9->cif_vrs, VAR_7, VAR_5);
 FUNC_3(VAR_9);

 FUNC_9(&VAR_3);
 FUNC_4(VAR_7, VAR_6);
 FUNC_10(&VAR_3);

 FUNC_6(&VAR_7->sc_ad_tmo);






 FUNC_0(VAR_7);

 FUNC_8(VAR_7->sc_ifas, VAR_0);
 FUNC_8(VAR_7, VAR_0);
}
