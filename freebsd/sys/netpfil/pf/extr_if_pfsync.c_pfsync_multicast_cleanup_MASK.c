
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_moptions {int * imo_multicast_ifp; int imo_head; } ;
struct pfsync_softc {struct ip_moptions sc_imo; } ;
struct in_mfilter {int imf_inm; } ;


 int FUNC_0 (int ,int *) ;
 struct in_mfilter* FUNC_1 (int *) ;
 int FUNC_2 (struct in_mfilter*) ;
 int FUNC_3 (int *,struct in_mfilter*) ;

__attribute__((used)) static void
FUNC_4(struct pfsync_softc *VAR_0)
{
 struct ip_moptions *VAR_1 = &VAR_0->sc_imo;
 struct in_mfilter *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->imo_head)) != ((void*)0)) {
  FUNC_3(&VAR_1->imo_head, VAR_2);
  FUNC_0(VAR_2->imf_inm, ((void*)0));
  FUNC_2(VAR_2);
 }
 VAR_1->imo_multicast_ifp = ((void*)0);
}
