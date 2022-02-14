
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_rcpm_softc {int sc_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int) ;
 struct mpc85xx_rcpm_softc* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_6)
{
 struct mpc85xx_rcpm_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_6);
 VAR_3 = VAR_4;
 VAR_5 = VAR_6;

 VAR_8 = 0;
 VAR_7->sc_mem = FUNC_0(VAR_6, VAR_2, &VAR_8,
     VAR_0 | VAR_1);

 return (0);
}
