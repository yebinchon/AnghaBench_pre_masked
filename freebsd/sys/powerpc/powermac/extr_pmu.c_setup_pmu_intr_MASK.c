
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_softc {int * sc_irq; scalar_t__ sc_irqrid; int sc_ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int,int *,int ,int ,int *) ;
 struct pmu_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, device_t VAR_8)
{
 struct pmu_softc *VAR_9;
 VAR_9 = FUNC_3(VAR_7);

 VAR_9->sc_irqrid = 0;
 VAR_9->sc_irq = FUNC_0(VAR_8, VAR_5, &VAR_9->sc_irqrid,
            VAR_4);
        if (VAR_9->sc_irq == ((void*)0)) {
                FUNC_4(VAR_7, "could not allocate interrupt\n");
                return (VAR_0);
        }

 if (FUNC_2(VAR_7, VAR_9->sc_irq, VAR_3 | VAR_2
     | VAR_1, ((void*)0), VAR_6, VAR_7, &VAR_9->sc_ih) != 0) {
                FUNC_4(VAR_7, "could not setup interrupt\n");
                FUNC_1(VAR_7, VAR_5, VAR_9->sc_irqrid,
                    VAR_9->sc_irq);
                return (VAR_0);
        }

 return (0);
}
