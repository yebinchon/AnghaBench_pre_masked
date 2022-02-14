
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct psycho_softc {scalar_t__ sc_mode; int sc_dev; } ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct psycho_softc*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct psycho_softc *VAR_16, u_int VAR_17,
    bus_addr_t *VAR_18, bus_addr_t *VAR_19, bus_addr_t *VAR_20)
{
 bus_addr_t VAR_21, VAR_22;
 uint64_t VAR_23;
 int VAR_24;
 if (VAR_17 > VAR_13) {
  FUNC_2(VAR_16->sc_dev, "out of range INO %d requested\n",
      VAR_17);
  return (0);
 }

 VAR_24 = 0;

 VAR_23 = FUNC_1(VAR_16, VAR_0);
 for (VAR_22 = VAR_10, VAR_21 = VAR_9;
     VAR_22 <= VAR_8; VAR_22 += 8, VAR_21 += 8,
     VAR_23 >>= 2) {
  if (VAR_16->sc_mode == VAR_15 &&
      (VAR_22 == VAR_11 ||
      VAR_22 == VAR_12 ||
      VAR_22 == VAR_6 ||
      VAR_22 == VAR_8))
   continue;
  if (FUNC_0(FUNC_1(VAR_16, VAR_22)) == VAR_17) {
   VAR_23 &= 2;
   VAR_24 = 1;
   break;
  }
 }

 if (!VAR_24) {
  VAR_23 = FUNC_1(VAR_16, VAR_7);

  for (VAR_22 = VAR_2, VAR_21 = VAR_1;
      VAR_22 <= VAR_5; VAR_22 += 8, VAR_21 += 32,
      VAR_23 >>= 8) {
   if (VAR_16->sc_mode == VAR_14 &&
       (VAR_22 == VAR_3 ||
       VAR_22 == VAR_4))
    continue;
   if (((FUNC_1(VAR_16, VAR_22) ^ VAR_17) & 0x3c) == 0) {
    VAR_21 += 8 * (VAR_17 & 3);
    VAR_23 = (VAR_23 >> ((VAR_17 & 3) * 2)) & 2;
    VAR_24 = 1;
    break;
   }
  }
 }
 if (VAR_18 != ((void*)0))
  *VAR_18 = VAR_22;
 if (VAR_19 != ((void*)0))
  *VAR_19 = VAR_21;
 if (VAR_20 != ((void*)0))
  *VAR_20 = VAR_23;
 return (VAR_24);
}
