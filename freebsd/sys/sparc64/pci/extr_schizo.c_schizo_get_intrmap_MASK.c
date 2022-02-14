
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct schizo_softc {int sc_dev; } ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct schizo_softc*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_3(struct schizo_softc *VAR_3, u_int VAR_4,
    bus_addr_t *VAR_5, bus_addr_t *VAR_6)
{
 bus_addr_t VAR_7, VAR_8;
 uint64_t VAR_9;







 if (VAR_4 > VAR_0) {
  FUNC_2(VAR_3->sc_dev, "out of range INO %d requested\n",
      VAR_4);
  return (0);
 }

 VAR_8 = VAR_2 + (VAR_4 << 3);
 VAR_7 = VAR_1 + (VAR_4 << 3);
 VAR_9 = FUNC_1(VAR_3, VAR_8);
 if (FUNC_0(VAR_9) != VAR_4) {
  FUNC_2(VAR_3->sc_dev,
      "interrupt map entry does not match INO (%d != %d)\n",
      (int)FUNC_0(VAR_9), VAR_4);
  return (0);
 }

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_7;
 return (1);
}
