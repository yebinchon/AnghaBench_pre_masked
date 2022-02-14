
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct macio_softc {int sc_memr; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,int,int) ;
 struct macio_softc* FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_3, bool VAR_4)
{
 struct macio_softc *VAR_5 = FUNC_4(VAR_3);
 uint32_t VAR_6;

 if (VAR_4) {
  VAR_6 = FUNC_1(VAR_5->sc_memr, VAR_1);
  VAR_6 |= 0x4;
  FUNC_3(VAR_5->sc_memr, VAR_1, VAR_6);


  FUNC_2(VAR_5->sc_memr, VAR_2 + 0x0f, 5);
  FUNC_0(1000);
  FUNC_2(VAR_5->sc_memr, VAR_2 + 0x0f, 4);
  FUNC_0(1000);
  VAR_6 = FUNC_1(VAR_5->sc_memr, VAR_1);
  VAR_6 &= ~0x80000000;

  FUNC_3(VAR_5->sc_memr, VAR_1, VAR_6);


  FUNC_2(VAR_5->sc_memr, VAR_0 + 0x0b, 0);
  FUNC_2(VAR_5->sc_memr, VAR_0 + 0x0a, 0x28);
  FUNC_2(VAR_5->sc_memr, VAR_0 + 0x0d, 0x28);
  FUNC_2(VAR_5->sc_memr, VAR_2 + 0x0d, 0x28);
  FUNC_2(VAR_5->sc_memr, VAR_2 + 0x0e, 0x28);
  FUNC_3(VAR_5->sc_memr, 0x1c000, 0);


  FUNC_3(VAR_5->sc_memr, 0x1a3e0, 0x41);
  VAR_6 = FUNC_1(VAR_5->sc_memr, VAR_1);
  VAR_6 |= 0x80000000;
  FUNC_3(VAR_5->sc_memr, VAR_1, VAR_6);
 } else {
  VAR_6 = FUNC_1(VAR_5->sc_memr, VAR_1);
  VAR_6 &= ~0x4;
  FUNC_3(VAR_5->sc_memr, VAR_1, VAR_6);

 }

 return (0);
}
