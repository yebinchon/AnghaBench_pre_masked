
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_long ;
typedef int u_int ;
struct resource {int dummy; } ;
struct fire_softc {int* sc_msi_msiq_table; size_t sc_msi_first; scalar_t__ sc_ign; scalar_t__ sc_msiq_first; scalar_t__ sc_msiq_ino_first; } ;
struct TYPE_3__ {scalar_t__ fica_clr; } ;
struct fire_msiqarg {int fmqa_msi; TYPE_1__ fmqa_fica; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_4__ {int * iv_ic; int iv_func; struct fire_msiqarg* iv_icarg; } ;


 int VAR_0 ;
 int FUNC_0 (struct fire_softc*,scalar_t__) ;
 int FUNC_1 (struct fire_softc*,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,struct resource*,int,int *,int *,void*,void**) ;
 struct fire_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 scalar_t__ FUNC_7 (struct resource*) ;
 void* FUNC_8 (struct resource*) ;
 int FUNC_9 (struct resource*,int) ;
 int FUNC_10 (struct resource*,int) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_15, device_t VAR_16, struct resource *VAR_17,
    int VAR_18, driver_filter_t *VAR_19, driver_intr_t *VAR_20, void *VAR_21,
    void **VAR_22)
{
 struct fire_softc *VAR_23;
 struct fire_msiqarg *VAR_24;
 u_long VAR_25;
 int VAR_26;
 u_int VAR_27, VAR_28;

 VAR_23 = FUNC_5(VAR_15);





 if (FUNC_7(VAR_17) != 0) {
  VAR_27 = FUNC_8(VAR_17);
  VAR_28 = VAR_23->sc_msi_msiq_table[VAR_27 - VAR_23->sc_msi_first];
  VAR_25 = FUNC_3(VAR_23->sc_ign, VAR_23->sc_msiq_ino_first + VAR_28);
  VAR_28 += VAR_23->sc_msiq_first;
  if (VAR_14[VAR_25].iv_ic != &VAR_10) {
   FUNC_6(VAR_15,
       "invalid interrupt controller for vector 0x%lx\n",
       VAR_25);
   return (VAR_0);
  }



  FUNC_10(VAR_17, VAR_25);
  FUNC_9(VAR_17, VAR_25);
  VAR_26 = FUNC_4(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19,
      VAR_20, VAR_21, VAR_22);
  FUNC_10(VAR_17, VAR_27);
  FUNC_9(VAR_17, VAR_27);
  if (VAR_26 != 0)
   return (VAR_26);
  VAR_24 = VAR_14[VAR_25].iv_icarg;



  if (VAR_19 != ((void*)0)) {
   VAR_14[VAR_25].iv_func = VAR_11;
   VAR_14[VAR_25].iv_ic = &VAR_13;





   FUNC_1(VAR_23, VAR_24->fmqa_fica.fica_clr,
       VAR_9);
  } else
   VAR_14[VAR_25].iv_func = VAR_12;

  VAR_24->fmqa_msi = VAR_27;
  FUNC_1(VAR_23, VAR_1 + (VAR_28 << 3),
      VAR_2);
  VAR_27 <<= 3;
  FUNC_1(VAR_23, VAR_5 + VAR_27,
      (FUNC_0(VAR_23, VAR_5 + VAR_27) &
      ~VAR_6) |
      ((VAR_28 << VAR_7) &
      VAR_6));
  FUNC_1(VAR_23, VAR_3 + VAR_27,
      VAR_4);
  FUNC_1(VAR_23, VAR_5 + VAR_27,
      FUNC_0(VAR_23, VAR_5 + VAR_27) |
      VAR_8);
  return (VAR_26);
 }





 VAR_25 = FUNC_8(VAR_17);
 if (FUNC_2(VAR_25) != VAR_23->sc_ign) {
  FUNC_6(VAR_15, "invalid interrupt vector 0x%lx\n", VAR_25);
  return (VAR_0);
 }
 if (VAR_14[VAR_25].iv_ic != &VAR_10) {
  FUNC_6(VAR_15,
      "invalid interrupt controller for vector 0x%lx\n", VAR_25);
  return (VAR_0);
 }
 return (FUNC_4(VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20,
     VAR_21, VAR_22));
}
