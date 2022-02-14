
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fire_softc {int sc_dev; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct fire_softc *VAR_3, u_int VAR_4, bus_addr_t *VAR_5,
    bus_addr_t *VAR_6)
{

 if (VAR_4 > VAR_0) {
  FUNC_0(VAR_3->sc_dev, "out of range INO %d requested\n",
      VAR_4);
  return (0);
 }

 VAR_4 <<= 3;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_2 + VAR_4;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_1 + VAR_4;
 return (1);
}
