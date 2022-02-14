
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cuda_softc {int sc_rtc; int adb_bus; int sc_state; int * sc_pkts; int sc_freeq; int sc_outq; int sc_inq; scalar_t__ sc_autopoll; scalar_t__ sc_polling; scalar_t__ sc_waiting; scalar_t__ sc_received; scalar_t__ sc_sent; int sc_mutex; int * sc_irq; scalar_t__ sc_irqrid; int * sc_memr; scalar_t__ sc_memrid; int sc_ih; int sc_dev; } ;
typedef scalar_t__ phandle_t ;
typedef int name ;
typedef int device_t ;


 int VAR_0 ;
 int volatile VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct cuda_softc*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 void* FUNC_7 (int ,int ,scalar_t__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_10 (int ,int *,int,int *,int ,int ,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct cuda_softc*) ;
 int FUNC_13 (struct cuda_softc*) ;
 int VAR_14 ;
 int FUNC_14 (struct cuda_softc*,int ) ;
 int VAR_15 ;
 int FUNC_15 (struct cuda_softc*) ;
 int FUNC_16 (struct cuda_softc*) ;
 int FUNC_17 (struct cuda_softc*,int ,int) ;
 int FUNC_18 (int ,char*,int) ;
 struct cuda_softc* FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,...) ;
 int FUNC_21 (char*,int ,int) ;
 int FUNC_22 (int *,char*,int *,int) ;
 scalar_t__ FUNC_23 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_24 (char*,char*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_25(device_t VAR_23)
{
 struct cuda_softc *VAR_24;

 volatile int VAR_25;
 uint8_t VAR_26;
 phandle_t VAR_27,VAR_28;

 VAR_24 = FUNC_19(VAR_23);
 VAR_24->sc_dev = VAR_23;

 VAR_24->sc_memrid = 0;
 VAR_24->sc_memr = FUNC_7(VAR_23, VAR_12,
     &VAR_24->sc_memrid, VAR_9);

 if (VAR_24->sc_memr == ((void*)0)) {
  FUNC_20(VAR_23, "Could not alloc mem resource!\n");
  return (VAR_3);
 }

 VAR_24->sc_irqrid = 0;
 VAR_24->sc_irq = FUNC_7(VAR_23, VAR_11, &VAR_24->sc_irqrid,
             VAR_9);
        if (VAR_24->sc_irq == ((void*)0)) {
                FUNC_20(VAR_23, "could not allocate interrupt\n");
                FUNC_9(VAR_23, VAR_12, VAR_24->sc_memrid,
                    VAR_24->sc_memr);
                return (VAR_3);
        }

 if (FUNC_10(VAR_23, VAR_24->sc_irq, VAR_6 | VAR_5
     | VAR_4, ((void*)0), VAR_14, VAR_23, &VAR_24->sc_ih) != 0) {
                FUNC_20(VAR_23, "could not setup interrupt\n");
                FUNC_9(VAR_23, VAR_12, VAR_24->sc_memrid,
                    VAR_24->sc_memr);
                FUNC_9(VAR_23, VAR_11, VAR_24->sc_irqrid,
                    VAR_24->sc_irq);
                return (VAR_3);
        }

 FUNC_22(&VAR_24->sc_mutex,"cuda",((void*)0),VAR_7 | VAR_8);

 VAR_24->sc_sent = 0;
 VAR_24->sc_received = 0;
 VAR_24->sc_waiting = 0;
 VAR_24->sc_polling = 0;
 VAR_24->sc_state = VAR_2;
 VAR_24->sc_autopoll = 0;
 VAR_24->sc_rtc = -1;

 FUNC_5(&VAR_24->sc_inq);
 FUNC_5(&VAR_24->sc_outq);
 FUNC_5(&VAR_24->sc_freeq);

 for (VAR_25 = 0; VAR_25 < VAR_1; VAR_25++)
  FUNC_6(&VAR_24->sc_freeq, &VAR_24->sc_pkts[VAR_25], VAR_16);



 VAR_26 = FUNC_14(VAR_24, VAR_19);
 VAR_26 |= 0x30;
 FUNC_17(VAR_24, VAR_19, VAR_26);

 VAR_26 = FUNC_14(VAR_24, VAR_19);
 VAR_26 &= 0xf7;
 FUNC_17(VAR_24, VAR_19, VAR_26);

 VAR_26 = FUNC_14(VAR_24, VAR_18);
 VAR_26 &= ~VAR_22;
 FUNC_17(VAR_24, VAR_18, VAR_26);

 FUNC_17(VAR_24, VAR_18, (FUNC_14(VAR_24, VAR_18) | 0x0c) & ~0x10);

 VAR_24->sc_state = VAR_0;

 FUNC_17(VAR_24, VAR_20, 0x84);

 FUNC_13(VAR_24);



 VAR_25 = FUNC_14(VAR_24, VAR_21);
 FUNC_17(VAR_24, VAR_20, 0x04);
 FUNC_13(VAR_24);
 FUNC_0(150);
 FUNC_15(VAR_24);
 FUNC_0(150);
 FUNC_16(VAR_24);
 FUNC_0(150);
 FUNC_12(VAR_24);
 FUNC_0(150);
 FUNC_13(VAR_24);
 VAR_25 = FUNC_14(VAR_24, VAR_21);
 FUNC_17(VAR_24, VAR_20, 0x84);


 VAR_27 = FUNC_23(VAR_23);

 for (VAR_28 = FUNC_2(VAR_27); VAR_28 != 0; VAR_28 = FUNC_4(VAR_28)) {
  char VAR_29[32];

  FUNC_21(VAR_29, 0, sizeof(VAR_29));
  FUNC_3(VAR_28, "name", VAR_29, sizeof(VAR_29));

  if (VAR_13)
   FUNC_20(VAR_23, "CUDA child <%s>\n",VAR_29);

  if (FUNC_24(VAR_29, "adb", 4) == 0) {
   VAR_24->adb_bus = FUNC_18(VAR_23,"adb",-1);
  }
 }

 FUNC_11(VAR_23, 1000);
 FUNC_1(VAR_17, VAR_15, VAR_24,
     VAR_10);

 return (FUNC_8(VAR_23));
}
