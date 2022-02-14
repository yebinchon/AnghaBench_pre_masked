
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carp_softc {scalar_t__ sc_state; TYPE_1__* sc_carpdev; } ;
struct TYPE_2__ {int if_vnet; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (struct carp_softc*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct carp_softc*,char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
 struct carp_softc *VAR_2 = VAR_1;

 FUNC_0(VAR_2);

 FUNC_3(VAR_2->sc_carpdev->if_vnet);
 if (VAR_2->sc_state == VAR_0) {
  FUNC_4(VAR_2, "master timed out");
 }
 FUNC_2();

 FUNC_1(VAR_2);
}
