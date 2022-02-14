
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiic_softc {int sc_regstep; int sc_node; int sc_i2c_base; int sc_irqrid; int sc_iicbus; int sc_ih; void* sc_irq; int sc_mutex; int * sc_reg; int sc_dev; } ;
typedef int reg ;
typedef int phandle_t ;
typedef int name ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int*,int) ;
 scalar_t__ FUNC_2 (int,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,int,int *,int ,struct kiic_softc*,int *) ;
 int FUNC_6 (struct kiic_softc*,int) ;
 int FUNC_7 (int ,char*,int) ;
 struct kiic_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_19 ;
 int FUNC_10 (struct kiic_softc*,int ) ;
 int FUNC_11 (struct kiic_softc*,int ) ;
 int FUNC_12 (struct kiic_softc*,int ) ;
 int FUNC_13 (struct kiic_softc*,int ,int) ;
 int FUNC_14 (int *,char*,int *,int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (char*,char*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_20)
{
 struct kiic_softc *VAR_21 = FUNC_8(VAR_20);
 int VAR_22, VAR_23;
 phandle_t VAR_24;
 char VAR_25[64];

 FUNC_6(VAR_21, sizeof(*VAR_21));
 VAR_21->sc_dev = VAR_20;

 VAR_24 = FUNC_15(VAR_20);
 if (VAR_24 == 0 || VAR_24 == -1) {
  return (VAR_0);
 }

 VAR_22 = 0;
 VAR_21->sc_reg = FUNC_3(VAR_20, VAR_17,
   &VAR_22, VAR_14);
 if (VAR_21->sc_reg == ((void*)0)) {
  return (VAR_1);
 }

 if (FUNC_1(VAR_24, "AAPL,i2c-rate", &VAR_23, 4) != 4) {
  FUNC_9(VAR_20, "cannot get i2c-rate\n");
  return (VAR_2);
 }
 if (FUNC_1(VAR_24, "AAPL,address-step", &VAR_21->sc_regstep, 4) != 4) {
  FUNC_9(VAR_20, "unable to find i2c address step\n");
  return (VAR_2);
 }
 VAR_21->sc_node = VAR_24;

 VAR_24 = FUNC_0(VAR_24);
 if (FUNC_2(VAR_24, "name", VAR_25, sizeof(VAR_25)) > 0) {
  if (FUNC_16(VAR_25,"i2c-bus") == 0) {
   phandle_t VAR_26;
   if (FUNC_2(VAR_24, "reg", &VAR_26, sizeof(VAR_26)) > 0)
    VAR_21->sc_i2c_base = VAR_26 << 8;

   VAR_21->sc_node = VAR_24;
  }
 }

 FUNC_14(&VAR_21->sc_mutex, "kiic", ((void*)0), VAR_12);

 VAR_21->sc_irq = FUNC_3(VAR_20, VAR_16, &VAR_21->sc_irqrid,
     VAR_14);
 FUNC_5(VAR_20, VAR_21->sc_irq, VAR_10 | VAR_9, ((void*)0),
     VAR_19, VAR_21, &VAR_21->sc_ih);

 FUNC_13(VAR_21, VAR_11, FUNC_10(VAR_21, VAR_11));
 FUNC_13(VAR_21, VAR_15, 0);
 FUNC_13(VAR_21, VAR_8, 0);

 FUNC_11(VAR_21, VAR_7);
 FUNC_12(VAR_21, VAR_3);

 FUNC_13(VAR_21, VAR_8, VAR_5 | VAR_4 | VAR_6);

 if (VAR_18)
  FUNC_9(VAR_20, "Revision: %02X\n", FUNC_10(VAR_21, VAR_13));


 VAR_21->sc_iicbus = FUNC_7(VAR_20, "iicbus", -1);

 return (FUNC_4(VAR_20));
}
