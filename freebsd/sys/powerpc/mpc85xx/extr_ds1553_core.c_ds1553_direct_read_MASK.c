
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ds1553_softc {int sc_bsh; int sc_bst; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int ) ;
 struct ds1553_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint8_t
FUNC_2(device_t VAR_0, bus_size_t VAR_1)
{
 struct ds1553_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 return (FUNC_0(VAR_2->sc_bst, VAR_2->sc_bsh, VAR_1));
}
