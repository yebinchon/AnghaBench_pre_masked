
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_phyp_softc {scalar_t__ vtermid; int polltime; int tp; int callout; int sc_icookie; int * irqres; scalar_t__ irqrid; int outseqno; int sc_mtx; int node; int dev; } ;
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
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct uart_phyp_softc*,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,struct uart_phyp_softc*) ;
 struct uart_phyp_softc* VAR_8 ;
 int FUNC_4 (int ) ;
 struct uart_phyp_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int *,int ,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int *,struct uart_phyp_softc*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int *,char*,int) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (struct uart_phyp_softc*) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
 struct uart_phyp_softc *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_5(VAR_13);
 VAR_14->dev = VAR_13;
 VAR_14->node = FUNC_8(VAR_13);
 FUNC_13(VAR_14);

 VAR_15 = FUNC_6(VAR_13);
 VAR_14->tp = FUNC_10(&VAR_12, VAR_14);
 FUNC_7(&VAR_14->sc_mtx, FUNC_4(VAR_13), ((void*)0),
     VAR_4 | VAR_3 | VAR_2);

 if (VAR_8 != ((void*)0) && VAR_8->vtermid == VAR_14->vtermid) {
  VAR_14->outseqno = VAR_8->outseqno;
  VAR_8 = VAR_14;
  FUNC_9(VAR_10.cn_name, "ttyu%r", VAR_15);
  FUNC_11(VAR_14->tp, 0);
 }

 VAR_14->irqrid = 0;
 VAR_14->irqres = FUNC_0(VAR_13, VAR_7, &VAR_14->irqrid,
     VAR_5 | VAR_6);
 if (VAR_14->irqres != ((void*)0)) {
  FUNC_1(VAR_13, VAR_14->irqres, VAR_1 | VAR_0,
      ((void*)0), VAR_11, VAR_14, &VAR_14->sc_icookie);
 } else {
  FUNC_2(&VAR_14->callout, 1);
  VAR_14->polltime = VAR_9 / 20;
  if (VAR_14->polltime < 1)
   VAR_14->polltime = 1;
  FUNC_3(&VAR_14->callout, VAR_14->polltime, VAR_11, VAR_14);
 }

 FUNC_12(VAR_14->tp, ((void*)0), "u%r", VAR_15);

 return (0);
}
