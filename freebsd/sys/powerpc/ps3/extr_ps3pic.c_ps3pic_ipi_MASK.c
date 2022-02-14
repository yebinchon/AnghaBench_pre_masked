
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct ps3pic_softc {int * sc_ipi_outlet; } ;
typedef int device_t ;


 struct ps3pic_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, u_int VAR_1)
{
 struct ps3pic_softc *VAR_2;
 VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->sc_ipi_outlet[VAR_1]);
}
