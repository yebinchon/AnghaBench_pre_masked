
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sbus_softc {int sc_ign; int sc_dev; } ;
typedef scalar_t__ bus_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct sbus_softc*,scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct sbus_softc *VAR_7, u_int VAR_8, bus_addr_t *VAR_9,
    bus_addr_t *VAR_10)
{
 bus_addr_t VAR_11, VAR_12;
 int VAR_13;

 if (VAR_8 > VAR_6) {
  FUNC_5(VAR_7->sc_dev, "out of range INO %d requested\n",
      VAR_8);
  return (0);
 }

 if ((VAR_8 & VAR_0) == 0) {
  VAR_12 = VAR_5 + FUNC_2(VAR_8) * 8;
  VAR_11 = VAR_4 +
      (FUNC_2(VAR_8) * 8 * 8) + (FUNC_1(VAR_8) * 8);
 } else {
  VAR_11 = 0;
  for (VAR_13 = 0, VAR_12 = VAR_3;
      VAR_12 <= VAR_1; VAR_12 += 8, VAR_13++) {
   if (FUNC_3(FUNC_4(VAR_7, VAR_12)) ==
       FUNC_0(VAR_7->sc_ign, VAR_8)) {
    VAR_11 = VAR_2 + VAR_13 * 8;
    break;
   }
  }
  if (VAR_11 == 0)
   return (0);
 }
 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_12;
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_11;
 return (1);
}
