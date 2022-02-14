
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clkbrd_softc {int * sc_bh; int * sc_bt; int sc_clk_ctrl; int sc_led_dev; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct clkbrd_softc*) ;
 struct clkbrd_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct clkbrd_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);

 FUNC_4(VAR_3->sc_led_dev);
 FUNC_1(VAR_3->sc_bt[VAR_0], VAR_3->sc_bh[VAR_0],
     VAR_1, VAR_3->sc_clk_ctrl);
 FUNC_0(VAR_3->sc_bt[VAR_0], VAR_3->sc_bh[VAR_0],
     VAR_1);
 FUNC_2(VAR_3);

 return (0);
}
