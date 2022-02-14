
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct glc_softc {size_t sc_next_rxdma_slot; scalar_t__ sc_wdog_timer; int sc_self; int sc_tick_ch; TYPE_1__* sc_rxsoft; int sc_dev; int sc_bus; int sc_mtx; } ;
struct TYPE_2__ {int rxs_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void (*) (void*),struct glc_softc*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct glc_softc*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct glc_softc *VAR_3 = VAR_2;

 FUNC_4(&VAR_3->sc_mtx, VAR_0);






 FUNC_3(VAR_3->sc_bus, VAR_3->sc_dev,
     VAR_3->sc_rxsoft[VAR_3->sc_next_rxdma_slot].rxs_desc, 0);

 if (VAR_3->sc_wdog_timer == 0 || --VAR_3->sc_wdog_timer != 0) {
  FUNC_0(&VAR_3->sc_tick_ch, VAR_1, FUNC_5, VAR_3);
  return;
 }


 FUNC_1(VAR_3->sc_self, "device timeout\n");

 FUNC_2(VAR_3);
}
