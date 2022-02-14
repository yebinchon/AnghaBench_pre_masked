
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_opal_softc {scalar_t__ vtermid; int polltime; int tp; int callout; int sc_icookie; int * irqres; scalar_t__ irqrid; int dev; int sc_mtx; int node; } ;
typedef int device_t ;
struct TYPE_2__ {int cn_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct uart_opal_softc*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int ,struct uart_opal_softc*) ;
 struct uart_opal_softc* VAR_9 ;
 int FUNC_4 (int ) ;
 struct uart_opal_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,struct uart_opal_softc*) ;
 int VAR_10 ;
 int FUNC_9 (int *,int ,int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int *,struct uart_opal_softc*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int *,char*,int) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (struct uart_opal_softc*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_16(device_t VAR_14)
{
 struct uart_opal_softc *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_5(VAR_14);
 VAR_15->node = FUNC_10(VAR_14);
 FUNC_15(VAR_15);

 VAR_16 = FUNC_6(VAR_14);
 FUNC_9(&VAR_15->sc_mtx, FUNC_4(VAR_14), ((void*)0),
     VAR_5 | VAR_4 | VAR_3);

 if (VAR_9 != ((void*)0) && VAR_9->vtermid == VAR_15->vtermid) {
  FUNC_7(VAR_14, "console\n");
  FUNC_8(VAR_14, VAR_9);
  VAR_15 = VAR_9;
  FUNC_11(VAR_11.cn_name, "ttyu%r", VAR_16);
 }
 VAR_15->tp = FUNC_12(&VAR_13, VAR_15);

 if (VAR_9 == VAR_15)
  FUNC_13(VAR_15->tp, 0);

 VAR_15->dev = VAR_14;
 VAR_15->irqrid = 0;
 VAR_15->irqres = FUNC_0(VAR_14, VAR_8, &VAR_15->irqrid,
     VAR_6 | VAR_7);
 if (VAR_15->irqres != ((void*)0)) {
  FUNC_1(VAR_14, VAR_15->irqres, VAR_2 | VAR_1,
      ((void*)0), VAR_12, VAR_15, &VAR_15->sc_icookie);
 } else {
  FUNC_2(&VAR_15->callout, VAR_0);
  VAR_15->polltime = VAR_10 / 20;
  if (VAR_15->polltime < 1)
   VAR_15->polltime = 1;
  FUNC_3(&VAR_15->callout, VAR_15->polltime, VAR_12, VAR_15);
 }

 FUNC_14(VAR_15->tp, ((void*)0), "u%r", VAR_16);

 return (0);
}
