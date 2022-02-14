
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3disk_softc {int sc_nregs; int * sc_reg; int * sc_disk; int sc_irq; int sc_irqid; int sc_irqctx; int sc_dmatag; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ps3disk_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct ps3disk_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct ps3disk_softc *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->sc_nregs; VAR_4++)
  FUNC_5(VAR_3->sc_disk[VAR_4]);

 FUNC_1(VAR_3->sc_dmatag);

 FUNC_3(VAR_2, VAR_3->sc_irq, VAR_3->sc_irqctx);
 FUNC_2(VAR_2, VAR_1, VAR_3->sc_irqid, VAR_3->sc_irq);

 FUNC_6(VAR_3->sc_disk, VAR_0);
 FUNC_6(VAR_3->sc_reg, VAR_0);

 FUNC_0(VAR_3);

 return (0);
}
