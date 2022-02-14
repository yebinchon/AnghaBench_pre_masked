
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct xive_softc {scalar_t__ sc_offset; int sc_mem; } ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct xive_softc *VAR_0, bus_size_t VAR_1, uint8_t VAR_2)
{

 FUNC_0(VAR_0->sc_mem, VAR_0->sc_offset + VAR_1, VAR_2);
}
