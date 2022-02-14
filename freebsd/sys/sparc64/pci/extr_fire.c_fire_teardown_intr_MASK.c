
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_long ;
typedef int u_int ;
struct resource {int dummy; } ;
struct fire_softc {int* sc_msi_msiq_table; size_t sc_msi_first; scalar_t__ sc_msiq_first; scalar_t__ sc_msiq_ino_first; int sc_ign; } ;
typedef int device_t ;
struct TYPE_2__ {int * iv_ic; } ;


 int FUNC_0 (struct fire_softc*,scalar_t__) ;
 int FUNC_1 (struct fire_softc*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 size_t FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,struct resource*,void*) ;
 struct fire_softc* FUNC_4 (int ) ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 scalar_t__ FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*,int) ;
 int FUNC_8 (struct resource*,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_14, device_t VAR_15, struct resource *VAR_16,
    void *VAR_17)
{
 struct fire_softc *VAR_18;
 u_long VAR_19;
 int VAR_20;
 u_int VAR_21, VAR_22;

 VAR_18 = FUNC_4(VAR_14);
 if (FUNC_5(VAR_16) != 0) {
  VAR_21 = FUNC_6(VAR_16);
  VAR_22 = VAR_18->sc_msi_msiq_table[VAR_21 - VAR_18->sc_msi_first];
  VAR_19 = FUNC_2(VAR_18->sc_ign, VAR_22 + VAR_18->sc_msiq_ino_first);
  VAR_22 += VAR_18->sc_msiq_first;
  VAR_21 <<= 3;
  FUNC_1(VAR_18, VAR_10 + VAR_21,
      FUNC_0(VAR_18, VAR_10 + VAR_21) &
      ~VAR_11);
  VAR_22 <<= 3;
  FUNC_1(VAR_18, VAR_0 + VAR_22,
      VAR_1 | VAR_3 |
      VAR_2);
  FUNC_1(VAR_18, VAR_7 + VAR_22,
      (0 << VAR_9) & VAR_8);
  FUNC_1(VAR_18, VAR_4 + VAR_22,
      (0 << VAR_6) & VAR_5);
  VAR_13[VAR_19].iv_ic = &VAR_12;



  FUNC_8(VAR_16, VAR_19);
  FUNC_7(VAR_16, VAR_19);
  VAR_20 = FUNC_3(VAR_14, VAR_15, VAR_16, VAR_17);
  VAR_21 >>= 3;
  FUNC_8(VAR_16, VAR_21);
  FUNC_7(VAR_16, VAR_21);
  return (VAR_20);
 }
 return (FUNC_3(VAR_14, VAR_15, VAR_16, VAR_17));
}
