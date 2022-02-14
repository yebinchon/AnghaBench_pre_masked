
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpc85xx_guts_softc {int sc_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct mpc85xx_guts_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_3, bool VAR_4)
{
 struct mpc85xx_guts_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_2(VAR_3);

 VAR_6 = FUNC_0(VAR_5->sc_mem, VAR_2);
 if (VAR_4)
  FUNC_1(VAR_5->sc_mem, VAR_2,
      VAR_6 | (VAR_0 | VAR_1));
 else
  FUNC_1(VAR_5->sc_mem, VAR_2,
      VAR_6 & ~(VAR_0 | VAR_1));
}
