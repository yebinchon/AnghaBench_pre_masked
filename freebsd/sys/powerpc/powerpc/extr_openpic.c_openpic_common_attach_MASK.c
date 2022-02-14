
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
typedef void* u_int ;
struct resource_list {int dummy; } ;
struct openpic_softc {char* sc_version; int sc_ncpu; int sc_nirq; int sc_quirks; int * sc_intr; scalar_t__ sc_psim; int sc_icookie; scalar_t__ sc_irq; int * sc_memr; int sc_bh; int sc_bt; scalar_t__ sc_rid; void* sc_dev; } ;
typedef void* device_t ;


 struct resource_list* FUNC_0 (int ,void*) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (void*) ;
 int VAR_13 ;
 int FUNC_3 (void*) ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (void*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 void* FUNC_8 (void*,int ,scalar_t__*,int ) ;
 int FUNC_9 (void*,int *,int,int ,int *,void*,int *) ;
 int FUNC_10 (void*) ;
 struct openpic_softc* FUNC_11 (void*) ;
 int FUNC_12 (void*,char*,...) ;
 int VAR_24 ;
 int FUNC_13 (struct openpic_softc*,int ) ;
 int FUNC_14 (struct openpic_softc*,int ,int) ;
 int FUNC_15 (void*,int ,void*,void*,int ) ;
 int FUNC_16 () ;
 int * FUNC_17 (struct resource_list*,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 void* VAR_25 ;

int
FUNC_20(device_t VAR_26, uint32_t VAR_27)
{
 struct openpic_softc *VAR_28;
 u_int VAR_29, VAR_30, VAR_31;
 u_int32_t VAR_32;

 VAR_28 = FUNC_11(VAR_26);
 VAR_28->sc_dev = VAR_26;

 VAR_28->sc_rid = 0;
 VAR_28->sc_memr = FUNC_8(VAR_26, VAR_22, &VAR_28->sc_rid,
     VAR_20);

 if (VAR_28->sc_memr == ((void*)0)) {
  FUNC_12(VAR_26, "Could not alloc mem resource!\n");
  return (VAR_0);
 }

 VAR_28->sc_bt = FUNC_19(VAR_28->sc_memr);
 VAR_28->sc_bh = FUNC_18(VAR_28->sc_memr);


 VAR_32 = FUNC_13(VAR_28, VAR_4);
 VAR_32 |= VAR_6;
 FUNC_14(VAR_28, VAR_4, VAR_32);

 while (FUNC_13(VAR_28, VAR_4) & VAR_6) {
  FUNC_16();
  FUNC_1(100);
 }


 VAR_28->sc_irq = 0;
 VAR_28->sc_intr = ((void*)0);
 do {
  struct resource_list *VAR_33;

  VAR_33 = FUNC_0(FUNC_10(VAR_26), VAR_26);
  if (VAR_33 == ((void*)0))
   break;
  if (FUNC_17(VAR_33, VAR_21, 0) == ((void*)0))
   break;

  VAR_28->sc_intr = FUNC_8(VAR_26, VAR_21,
      &VAR_28->sc_irq, VAR_20);


  FUNC_9(VAR_26, VAR_28->sc_intr, VAR_3 | VAR_2,
      VAR_24, ((void*)0), VAR_26, &VAR_28->sc_icookie);
 } while (0);


 VAR_32 = FUNC_13(VAR_28, VAR_4);
 VAR_32 |= VAR_6;
 FUNC_14(VAR_28, VAR_4, VAR_32);

 while (FUNC_13(VAR_28, VAR_4) & VAR_6) {
  FUNC_16();
  FUNC_1(100);
 }

 VAR_32 = FUNC_13(VAR_28, VAR_7);
 switch (VAR_32 & VAR_12) {
 case 1:
  VAR_28->sc_version = "1.0";
  break;
 case 2:
  VAR_28->sc_version = "1.2";
  break;
 case 3:
  VAR_28->sc_version = "1.3";
  break;
 default:
  VAR_28->sc_version = "unknown";
  break;
 }

 VAR_28->sc_ncpu = ((VAR_32 & VAR_8) >>
     VAR_9) + 1;
 VAR_28->sc_nirq = ((VAR_32 & VAR_10) >>
     VAR_11) + 1;




 if (VAR_28->sc_psim) {
  VAR_28->sc_nirq--;
  VAR_28->sc_ncpu--;
 }

 if (VAR_23)
  FUNC_12(VAR_26,
      "Version %s, supports %d CPUs and %d irqs\n",
      VAR_28->sc_version, VAR_28->sc_ncpu, VAR_28->sc_nirq);






 if (VAR_28->sc_quirks & VAR_18)
  VAR_28->sc_nirq = VAR_14 - VAR_15;

 for (VAR_29 = 0; VAR_29 < VAR_28->sc_ncpu; VAR_29++)
  FUNC_14(VAR_28, FUNC_6(VAR_29), 15);


 for (VAR_31 = 0; VAR_31 < VAR_28->sc_nirq; VAR_31++) {
  VAR_32 = VAR_31;
  VAR_32 |= VAR_13;
  VAR_32 |= VAR_16;
  VAR_32 |= VAR_19;
  VAR_32 |= 8 << VAR_17;
  FUNC_14(VAR_28, FUNC_7(VAR_31), VAR_32);
 }


 for (VAR_30 = 0; VAR_30 < VAR_15; VAR_30++) {
  VAR_32 = VAR_28->sc_nirq + VAR_30;
  VAR_32 |= VAR_13;
  VAR_32 |= 15 << VAR_17;
  FUNC_14(VAR_28, FUNC_3(VAR_30), VAR_32);
 }


 VAR_32 = FUNC_13(VAR_28, VAR_4);
 VAR_32 |= VAR_5;
 FUNC_14(VAR_28, VAR_4, VAR_32);


 for (VAR_31 = 0; VAR_31 < VAR_28->sc_nirq; VAR_31++)
  FUNC_14(VAR_28, FUNC_2(VAR_31), 1 << 0);


 for (VAR_31 = 0; VAR_31 < VAR_28->sc_nirq; VAR_31++) {
  (void)FUNC_13(VAR_28, FUNC_5(0));
  FUNC_14(VAR_28, FUNC_4(0), 0);
 }

 for (VAR_29 = 0; VAR_29 < VAR_28->sc_ncpu; VAR_29++)
  FUNC_14(VAR_28, FUNC_6(VAR_29), 0);

 FUNC_15(VAR_26, VAR_27, VAR_28->sc_nirq, VAR_15, VAR_1);


 if (VAR_28->sc_intr == ((void*)0))
  VAR_25 = VAR_26;

 return (0);
}
