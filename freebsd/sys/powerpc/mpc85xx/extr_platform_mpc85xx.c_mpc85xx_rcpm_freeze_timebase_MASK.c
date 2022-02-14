
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_rcpm_softc {int sc_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct mpc85xx_rcpm_softc* FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(device_t VAR_2, bool VAR_3)
{
 struct mpc85xx_rcpm_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 if (VAR_3)
  FUNC_0(VAR_4->sc_mem, VAR_0, 0);
 else
  FUNC_0(VAR_4->sc_mem, VAR_0, (1 << VAR_1) - 1);
}
