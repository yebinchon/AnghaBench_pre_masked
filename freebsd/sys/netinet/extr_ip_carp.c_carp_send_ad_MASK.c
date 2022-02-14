
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carp_softc {TYPE_1__* sc_carpdev; } ;
struct TYPE_2__ {int if_vnet; } ;


 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (struct carp_softc*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct carp_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct carp_softc *VAR_1 = VAR_0;

 FUNC_0(VAR_1);
 FUNC_3(VAR_1->sc_carpdev->if_vnet);
 FUNC_4(VAR_1);
 FUNC_2();
 FUNC_1(VAR_1);
}
