
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct carp_if* if_carp; } ;
struct ifaddr {int dummy; } ;
struct carp_softc {int sc_vhid; int sc_init_counter; int sc_ifasiz; int sc_mtx; int sc_ad_tmo; int sc_md6_tmo; int sc_md_tmo; struct ifnet* sc_carpdev; void* sc_ifas; int sc_state; int sc_advbase; } ;
struct carp_if {int cif_vrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (struct carp_if*) ;
 int FUNC_2 (struct carp_if*) ;
 int VAR_2 ;
 int FUNC_3 (int *,struct carp_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,struct carp_softc*,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 struct carp_if* FUNC_6 (struct ifnet*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static struct carp_softc*
FUNC_11(struct ifnet *VAR_12)
{
 struct carp_softc *VAR_13;
 struct carp_if *VAR_14;

 FUNC_10(&VAR_9, VAR_6);

 if ((VAR_14 = VAR_12->if_carp) == ((void*)0))
  VAR_14 = FUNC_6(VAR_12);

 VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_3, VAR_4|VAR_5);

 VAR_13->sc_advbase = VAR_1;
 VAR_13->sc_vhid = -1;
 VAR_13->sc_init_counter = 1;
 VAR_13->sc_state = VAR_2;

 VAR_13->sc_ifasiz = sizeof(struct ifaddr *);
 VAR_13->sc_ifas = FUNC_7(VAR_13->sc_ifasiz, VAR_3, VAR_4|VAR_5);
 VAR_13->sc_carpdev = VAR_12;

 FUNC_0(VAR_13);






 FUNC_5(&VAR_13->sc_ad_tmo, &VAR_13->sc_mtx, VAR_0);

 FUNC_1(VAR_14);
 FUNC_4(&VAR_14->cif_vrs, VAR_13, VAR_10);
 FUNC_2(VAR_14);

 FUNC_8(&VAR_8);
 FUNC_3(&VAR_7, VAR_13, VAR_11);
 FUNC_9(&VAR_8);

 return (VAR_13);
}
