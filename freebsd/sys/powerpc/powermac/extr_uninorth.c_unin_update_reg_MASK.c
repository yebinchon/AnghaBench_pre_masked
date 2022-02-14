
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int32_t ;
typedef int u_int ;
struct unin_chip_softc {scalar_t__ sc_addr; } ;
typedef int device_t ;


 struct unin_chip_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int volatile*) ;
 int FUNC_2 (int volatile*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 volatile u_int *VAR_4;
 struct unin_chip_softc *VAR_5;
 u_int32_t VAR_6;

 VAR_5 = FUNC_0(VAR_0);
 VAR_4 = (void *)(VAR_5->sc_addr + VAR_1);
 VAR_6 = FUNC_1(VAR_4);
 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_2;
 FUNC_2(VAR_4, VAR_6);
}
