
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct carp_softc {scalar_t__ sc_naddrs; scalar_t__ sc_naddrs6; int sc_state; int sc_advbase; int sc_advskew; int sc_ad_tmo; int sc_md6_tmo; int sc_md_tmo; TYPE_1__* sc_carpdev; } ;
typedef int sa_family_t ;
struct TYPE_2__ {int if_flags; scalar_t__ if_link_state; } ;





 int FUNC_0 (struct carp_softc*) ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,struct carp_softc*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct carp_softc*,int,char*) ;
 int FUNC_4 (struct timeval*) ;

__attribute__((used)) static void
FUNC_5(struct carp_softc *VAR_5, sa_family_t VAR_6)
{
 struct timeval VAR_7;

 FUNC_0(VAR_5);

 if ((VAR_5->sc_carpdev->if_flags & VAR_0) == 0 ||
     VAR_5->sc_carpdev->if_link_state != VAR_1 ||
     (VAR_5->sc_naddrs == 0 && VAR_5->sc_naddrs6 == 0) ||
     !VAR_2)
  return;

 switch (VAR_5->sc_state) {
 case 129:
  FUNC_3(VAR_5, 130, "initialization complete");
  FUNC_5(VAR_5, 0);
  break;
 case 130:
  FUNC_2(&VAR_5->sc_ad_tmo);
  VAR_7.tv_sec = 3 * VAR_5->sc_advbase;
  VAR_7.tv_usec = VAR_5->sc_advskew * 1000000 / 256;
  switch (VAR_6) {
  default:
   break;
  }
  break;
 case 128:
  VAR_7.tv_sec = VAR_5->sc_advbase;
  VAR_7.tv_usec = VAR_5->sc_advskew * 1000000 / 256;
  FUNC_1(&VAR_5->sc_ad_tmo, FUNC_4(&VAR_7),
      VAR_4, VAR_5);
  break;
 }
}
