
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3cdrom_softc {int sc_irq; int sc_irqid; int sc_irqctx; int sc_dmatag; TYPE_1__* sc_xfer; int sc_sim; int sc_path; } ;
typedef int device_t ;
struct TYPE_2__ {int x_dmamap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ps3cdrom_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 struct ps3cdrom_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4)
{
 struct ps3cdrom_softc *VAR_5 = FUNC_7(VAR_4);
 int VAR_6;

 FUNC_8(VAR_0, VAR_5->sc_path, ((void*)0));
 FUNC_10(VAR_5->sc_path);
 FUNC_9(FUNC_6(VAR_5->sc_sim));
 FUNC_5(VAR_5->sc_sim, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_2(VAR_5->sc_dmatag, VAR_5->sc_xfer[VAR_6].x_dmamap);

 FUNC_1(VAR_5->sc_dmatag);

 FUNC_4(VAR_4, VAR_5->sc_irq, VAR_5->sc_irqctx);
 FUNC_3(VAR_4, VAR_2, VAR_5->sc_irqid, VAR_5->sc_irq);

 FUNC_0(VAR_5);

 return (0);
}
