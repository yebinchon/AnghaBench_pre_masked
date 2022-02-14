
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct schizo_softc {scalar_t__ sc_mode; int sc_flags; int sc_mrev; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct schizo_softc*,int ) ;
 int FUNC_2 (struct schizo_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct schizo_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_12, device_t VAR_13)
{
 struct schizo_softc *VAR_14;
 uint64_t VAR_15;
 int VAR_16;

 VAR_14 = FUNC_3(VAR_12);




 if (FUNC_0(FUNC_4(VAR_13), "pci-req-removal") >= 0)
  FUNC_2(VAR_14, VAR_7, FUNC_1(VAR_14,
      VAR_7) & ~VAR_8);

 if (VAR_14->sc_mode == VAR_6) {

  if ((VAR_14->sc_flags & VAR_5) != 0 &&
      (FUNC_6(VAR_13, VAR_2, 1) &
      VAR_0) != VAR_1 &&
      FUNC_5(VAR_13, VAR_4, &VAR_16) == 0)
   FUNC_7(VAR_13, VAR_16 + VAR_3,
       FUNC_6(VAR_13, VAR_16 + VAR_3,
       2) & 0x7c, 2);

  if (VAR_14->sc_mrev >= 4) {
   VAR_15 = ((VAR_14->sc_flags & VAR_5) != 0 ?
       0xa0UL : 0xffUL) << VAR_11;
   if ((FUNC_1(VAR_14, VAR_9) &
       VAR_10) != VAR_15)
    FUNC_2(VAR_14, VAR_9, VAR_15);
  }
 }
}
