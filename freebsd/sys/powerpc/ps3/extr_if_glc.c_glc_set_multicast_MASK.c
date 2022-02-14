
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
struct glc_softc {int sc_dev; int sc_bus; struct ifnet* sc_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,int ,struct glc_softc*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct glc_softc *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2->sc_ifp;
 int VAR_4;


 FUNC_2(VAR_2->sc_bus, VAR_2->sc_dev, 0, 1);


 FUNC_1(VAR_2->sc_bus, VAR_2->sc_dev,
     0xffffffffffffL, 0);

 if ((VAR_3->if_flags & VAR_0) != 0) {
  FUNC_1(VAR_2->sc_bus, VAR_2->sc_dev, 0, 1);
 } else {
  VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
  if (VAR_4 + 1 == 32)
   FUNC_1(VAR_2->sc_bus,
       VAR_2->sc_dev, 0, 1);
 }
}
