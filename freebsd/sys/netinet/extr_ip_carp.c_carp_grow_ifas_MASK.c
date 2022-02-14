
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {int dummy; } ;
struct carp_softc {int sc_ifasiz; struct ifaddr** sc_ifas; } ;


 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (struct carp_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ifaddr**,struct ifaddr**,int) ;
 int FUNC_3 (struct ifaddr**,int ) ;
 struct ifaddr** FUNC_4 (int,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct carp_softc *VAR_3)
{
 struct ifaddr **VAR_4;

 VAR_4 = FUNC_4(VAR_3->sc_ifasiz * 2, VAR_0, VAR_1 | VAR_2);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3->sc_ifas, VAR_4, VAR_3->sc_ifasiz);
 FUNC_3(VAR_3->sc_ifas, VAR_0);
 VAR_3->sc_ifas = VAR_4;
 VAR_3->sc_ifasiz *= 2;
 FUNC_1(VAR_3);
}
