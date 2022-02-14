
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct clkbrd_softc {int * sc_bh; int * sc_bt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, int VAR_4)
{
 struct clkbrd_softc *VAR_5;
 uint8_t VAR_6;

 VAR_5 = (struct clkbrd_softc *)VAR_3;

 VAR_6 = FUNC_0(VAR_5->sc_bt[VAR_0], VAR_5->sc_bh[VAR_0],
     VAR_1);
 if (VAR_4)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;
 FUNC_1(VAR_5->sc_bt[VAR_0], VAR_5->sc_bh[VAR_0],
     VAR_1, VAR_6);
 FUNC_0(VAR_5->sc_bt[VAR_0], VAR_5->sc_bh[VAR_0],
     VAR_1);
}
