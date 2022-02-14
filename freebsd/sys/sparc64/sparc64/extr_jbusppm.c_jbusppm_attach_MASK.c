
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct jbusppm_softc {int ** sc_res; void** sc_bh; void** sc_bt; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_0 (struct jbusppm_softc*,int,int ) ;
 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int * FUNC_1 (int *,int ,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 void* FUNC_2 (int *,int ,int*,int) ;
 scalar_t__ FUNC_3 (int *,int ,int,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (void*,void*,scalar_t__,scalar_t__,void**) ;
 scalar_t__ FUNC_7 (int ,int ***,int*) ;
 int FUNC_8 (int *) ;
 struct jbusppm_softc* FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int **,int ) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 void* FUNC_15 (int *) ;
 void* FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,char*) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_13)
{
 struct jbusppm_softc *VAR_14;
 int VAR_15, VAR_16;

 device_t *VAR_17, VAR_18;
 u_long VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;


 VAR_14 = FUNC_9(VAR_13);
 for (VAR_15 = VAR_1; VAR_15 <= VAR_4; VAR_15++) {
  VAR_16 = VAR_15;
  if (VAR_15 == VAR_4) {
   if (FUNC_3(VAR_13, VAR_11, VAR_15, &VAR_22,
       &VAR_21) != 0) {
    FUNC_10(VAR_13,
        "could not determine Estar resource\n");
    goto fail;
   }
   if (FUNC_7(FUNC_8(VAR_13),
       &VAR_17, &VAR_24) != 0) {
    FUNC_10(VAR_13, "could not get children\n");
    goto fail;
   }
   VAR_18 = ((void*)0);
   for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
    if (FUNC_13(VAR_17[VAR_23]) != ((void*)0) &&
        FUNC_18(FUNC_13(VAR_17[VAR_23]),
        VAR_8) == 0 &&
        FUNC_12(VAR_17[VAR_23]) != ((void*)0) &&
        FUNC_18(FUNC_12(VAR_17[VAR_23]),
        "pci108e,a801") == 0 &&
        ((FUNC_4(VAR_17[VAR_23],
        VAR_11, 0) >> 20) & 1) == 0) {
     VAR_18 = VAR_17[VAR_23];
     break;
    }
   }
   FUNC_11(VAR_17, VAR_7);
   if (VAR_18 == ((void*)0)) {
    FUNC_10(VAR_13,
        "could not find Tomatillo\n");
    goto fail;
   }
   if (FUNC_3(VAR_18, VAR_11, 1,
       &VAR_20, &VAR_19) != 0) {
    FUNC_10(VAR_13,
        "could not determine Tomatillo "
        "resource\n");
    goto fail;
   }
   VAR_14->sc_res[VAR_15] = FUNC_1(VAR_13, VAR_11,
       &VAR_16, VAR_20, VAR_20 + VAR_19 - 1, VAR_19,
       VAR_10 | VAR_9);
  } else
   VAR_14->sc_res[VAR_15] = FUNC_2(VAR_13,
       VAR_11, &VAR_16, VAR_9);
  if (VAR_14->sc_res[VAR_15] == ((void*)0)) {
   FUNC_10(VAR_13,
       "could not allocate resource %d\n", VAR_15);
   goto fail;
  }
  VAR_14->sc_bt[VAR_15] = FUNC_16(VAR_14->sc_res[VAR_15]);
  VAR_14->sc_bh[VAR_15] = FUNC_15(VAR_14->sc_res[VAR_15]);
  if (VAR_15 == VAR_4)
   FUNC_6(VAR_14->sc_bt[VAR_15], VAR_14->sc_bh[VAR_15],
       VAR_22 - VAR_20, VAR_21, &VAR_14->sc_bh[VAR_15]);

 }

 if (VAR_12) {
  if ((FUNC_0(VAR_14, VAR_1, VAR_2) &
      VAR_3) != 0)
   FUNC_10(VAR_13, "master I/O bridge\n");
  FUNC_10(VAR_13, "running at ");
  switch (FUNC_0(VAR_14, VAR_4, VAR_5) &
      VAR_6) {
  case 130:
   FUNC_14("full");
   break;
  case 129:
   FUNC_14("half");
   break;
  case 128:
   FUNC_14("1/32");
   break;
  default:
   FUNC_14("unknown");
   break;
  }
  FUNC_14(" speed\n");
 }

 return (0);

 fail:
 for (VAR_15 = VAR_1; VAR_15 <= VAR_4 && VAR_14->sc_res[VAR_15] != ((void*)0);
     VAR_15++)
  FUNC_5(VAR_13, VAR_11,
      FUNC_17(VAR_14->sc_res[VAR_15]), VAR_14->sc_res[VAR_15]);
 return (VAR_0);
}
