
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct clkbrd_softc {int* sc_rid; int sc_flags; int sc_led_dev; int * sc_bh; int * sc_bt; void* sc_clk_ctrl; int sc_dev; int ** sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 size_t VAR_1 ;
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
 int * FUNC_0 (int ,int ,int*,int ) ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct clkbrd_softc*) ;
 int VAR_13 ;
 struct clkbrd_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,struct clkbrd_softc*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_14)
{
 struct clkbrd_softc *VAR_15;
 int VAR_16, VAR_17;
 uint8_t VAR_18;

 VAR_15 = FUNC_3(VAR_14);
 VAR_15->sc_dev = VAR_14;

 for (VAR_16 = VAR_0; VAR_16 <= VAR_2; VAR_16++) {
  VAR_15->sc_rid[VAR_16] = VAR_16;
  VAR_15->sc_res[VAR_16] = FUNC_0(VAR_15->sc_dev,
      VAR_12, &VAR_15->sc_rid[VAR_16], VAR_11);
  if (VAR_15->sc_res[VAR_16] == ((void*)0)) {
   if (VAR_16 != VAR_2) {
    FUNC_4(VAR_15->sc_dev,
        "could not allocate resource %d\n", VAR_16);
    goto fail;
   }
   continue;
  }
  VAR_15->sc_bt[VAR_16] = FUNC_7(VAR_15->sc_res[VAR_16]);
  VAR_15->sc_bh[VAR_16] = FUNC_6(VAR_15->sc_res[VAR_16]);
  if (VAR_16 == VAR_2)
   VAR_15->sc_flags |= VAR_3;
 }

 VAR_17 = 4;
 VAR_18 = FUNC_1(VAR_15->sc_bt[VAR_1], VAR_15->sc_bh[VAR_1],
     VAR_8);
 switch (VAR_18 & VAR_9) {
 case 130:
  VAR_17 = 16;
  break;
 case 128:
  VAR_17 = 8;
  break;
 case 129:
  if (VAR_15->sc_flags & VAR_3) {
   VAR_18 = FUNC_1(VAR_15->sc_bt[VAR_2],
       VAR_15->sc_bh[VAR_2], VAR_4);
   if (VAR_18 != 0 &&
       (VAR_18 & VAR_5) == VAR_6)
    VAR_17 = 5;
  }
 }

 FUNC_4(VAR_15->sc_dev, "Sun Enterprise Exx00 machine: %d slots\n",
     VAR_17);

 VAR_15->sc_clk_ctrl = FUNC_1(VAR_15->sc_bt[VAR_1],
     VAR_15->sc_bh[VAR_1], VAR_7);
 VAR_15->sc_led_dev = FUNC_5(VAR_13, VAR_15, "clockboard");

 return (0);

 fail:
 FUNC_2(VAR_15);

 return (VAR_10);
}
