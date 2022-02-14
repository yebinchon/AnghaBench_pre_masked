
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atibl_softc {int sc_memr; } ;


 int FUNC_0 (int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct atibl_softc*,int ) ;
 int FUNC_2 (struct atibl_softc*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct atibl_softc *VAR_16, int VAR_17)
{
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint32_t VAR_20;
 uint32_t VAR_21;

 if (VAR_17 > 100)
  VAR_17 = 100;

 if (VAR_17 < 0)
  VAR_17 = 0;

 VAR_18 = FUNC_3(VAR_16->sc_memr, VAR_9);

 if (VAR_17 > 0) {
  VAR_17 = (VAR_17 * 5) / 2 + 5;
  VAR_21 = FUNC_3(VAR_16->sc_memr, VAR_1);
  VAR_21 |= VAR_0;
  FUNC_4(VAR_16->sc_memr, VAR_1, VAR_21);
  VAR_19 = FUNC_3(VAR_16->sc_memr, VAR_11);
  VAR_19 |= VAR_12;
  FUNC_4(VAR_16->sc_memr, VAR_11, VAR_19);
  VAR_19 &= ~VAR_13;
  FUNC_4(VAR_16->sc_memr, VAR_11, VAR_19);
  FUNC_0(1000);

  VAR_18 &= ~(VAR_7 |
      VAR_4);
  VAR_18 |= VAR_10 | VAR_8 |
      VAR_6 | VAR_2;
  VAR_18 |= (VAR_17 << VAR_5) &
      VAR_4;
  VAR_18 |= VAR_3;
  FUNC_0(200000);
  FUNC_4(VAR_16->sc_memr, VAR_9, VAR_18);
 } else {
  VAR_20 = FUNC_1(VAR_16, VAR_14);
  FUNC_2(VAR_16, VAR_14,
      VAR_20 & ~VAR_15);
  VAR_18 |= VAR_7;
  VAR_18 &= ~(VAR_3 | VAR_4);
  FUNC_4(VAR_16->sc_memr, VAR_9, VAR_18);
  VAR_18 &= ~(VAR_10 | VAR_8);
  FUNC_0(200000);
  FUNC_4(VAR_16->sc_memr, VAR_9, VAR_18);

  FUNC_2(VAR_16, VAR_14, VAR_20);
  FUNC_0(200000);
 }

 return (0);
}
