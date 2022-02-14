
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_softc {int sc_mutex; int sc_memr; int sc_memrid; int sc_irq; int sc_irqrid; int sc_ih; int * sc_leddev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct pmu_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct pmu_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->sc_leddev != ((void*)0))
  FUNC_4(VAR_3->sc_leddev);

 FUNC_2(VAR_2, VAR_3->sc_irq, VAR_3->sc_ih);
 FUNC_1(VAR_2, VAR_0, VAR_3->sc_irqrid, VAR_3->sc_irq);
 FUNC_1(VAR_2, VAR_1, VAR_3->sc_memrid, VAR_3->sc_memr);
 FUNC_5(&VAR_3->sc_mutex);

 return (FUNC_0(VAR_2));
}
