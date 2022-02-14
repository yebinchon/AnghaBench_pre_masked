
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef char u_int ;
struct TYPE_5__ {char* rm_descr; int rm_type; } ;
struct macio_softc {scalar_t__ sc_node; char sc_base; int * sc_memr; int sc_size; TYPE_1__ sc_mem_rman; int sc_memrid; } ;
struct TYPE_6__ {int obd_name; } ;
struct macio_devinfo {TYPE_3__ mdi_obdinfo; int mdi_resources; scalar_t__ mdi_ninterrupts; } ;
typedef scalar_t__ ssize_t ;
typedef int reg ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;
typedef int compat ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_5 (int *,int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int * FUNC_9 (int *,int *,int) ;
 struct macio_softc* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *,struct macio_devinfo*) ;
 int FUNC_13 (struct macio_devinfo*,int ) ;
 int FUNC_14 (scalar_t__,struct macio_devinfo*) ;
 int FUNC_15 (scalar_t__,struct macio_devinfo*) ;
 int FUNC_16 (int) ;
 struct macio_devinfo* FUNC_17 (int,int ,int) ;
 int FUNC_18 (TYPE_3__*) ;
 scalar_t__ FUNC_19 (TYPE_3__*,scalar_t__) ;
 char* FUNC_20 (int *) ;
 char* FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_27 (char*,char*) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_17)
{
 struct macio_softc *VAR_18;
        struct macio_devinfo *VAR_19;
        phandle_t VAR_20;
 phandle_t VAR_21;
 phandle_t VAR_22;
        device_t VAR_23;
        u_int VAR_24[3];
 char VAR_25[32];
 int VAR_26, VAR_27;

 VAR_18 = FUNC_10(VAR_17);
 VAR_20 = VAR_18->sc_node = FUNC_22(VAR_17);




 if (FUNC_2(VAR_20, "assigned-addresses",
         VAR_24, sizeof(VAR_24)) < (ssize_t)sizeof(VAR_24)) {
  return (VAR_0);
 }


 FUNC_2(VAR_20, "compatible", VAR_25, sizeof(VAR_25));

 VAR_18->sc_base = VAR_24[2];
 VAR_18->sc_size = VAR_10;

 VAR_18->sc_memrid = FUNC_4(0);
 VAR_18->sc_memr = FUNC_5(VAR_17, VAR_16,
     &VAR_18->sc_memrid, VAR_14);

 VAR_18->sc_mem_rman.rm_type = VAR_15;
 VAR_18->sc_mem_rman.rm_descr = "MacIO Device Memory";
 VAR_26 = FUNC_25(&VAR_18->sc_mem_rman);
 if (VAR_26) {
  FUNC_11(VAR_17, "rman_init() failed. error = %d\n", VAR_26);
  return (VAR_26);
 }
 VAR_26 = FUNC_26(&VAR_18->sc_mem_rman, 0, VAR_18->sc_size);
 if (VAR_26) {
  FUNC_11(VAR_17,
      "rman_manage_region() failed. error = %d\n", VAR_26);
  return (VAR_26);
 }




 for (VAR_21 = FUNC_1(VAR_20); VAR_21 != 0; VAR_21 = FUNC_3(VAR_21)) {
  VAR_19 = FUNC_17(sizeof(*VAR_19), VAR_11, VAR_12 | VAR_13);
  if (FUNC_19(&VAR_19->mdi_obdinfo, VAR_21) !=
      0) {
   FUNC_13(VAR_19, VAR_11);
   continue;
  }
  VAR_27 = FUNC_16(VAR_19->mdi_obdinfo.obd_name);
  if ((VAR_27 & VAR_8) != 0) {
   FUNC_18(&VAR_19->mdi_obdinfo);
   FUNC_13(VAR_19, VAR_11);
   continue;
  }
  FUNC_24(&VAR_19->mdi_resources);
  VAR_19->mdi_ninterrupts = 0;
  FUNC_14(VAR_21, VAR_19);
  if ((VAR_27 & VAR_9) != 0)
   FUNC_15(FUNC_1(VAR_21), VAR_19);
  else
   FUNC_15(VAR_21, VAR_19);
  if ((VAR_27 & VAR_7) != 0)
   for (VAR_22 = FUNC_1(VAR_21); VAR_22 != 0;
       VAR_22 = FUNC_3(VAR_22))
    FUNC_14(VAR_22, VAR_19);
  VAR_23 = FUNC_9(VAR_17, ((void*)0), -1);
  if (VAR_23 == ((void*)0)) {
   FUNC_11(VAR_17, "<%s>: device_add_child failed\n",
       VAR_19->mdi_obdinfo.obd_name);
   FUNC_23(&VAR_19->mdi_resources);
   FUNC_18(&VAR_19->mdi_obdinfo);
   FUNC_13(VAR_19, VAR_11);
   continue;
  }
  FUNC_12(VAR_23, VAR_19);


  if (VAR_18->sc_memr == ((void*)0))
   continue;

  if (FUNC_27(FUNC_21(VAR_23), "bmac") == 0 ||
      (FUNC_20(VAR_23) != ((void*)0) &&
      FUNC_27(FUNC_20(VAR_23), "bmac+") == 0)) {
   uint32_t VAR_28;

   VAR_28 = FUNC_7(VAR_18->sc_memr, VAR_5);

   VAR_28 |= VAR_3 & ~VAR_4;
   FUNC_8(VAR_18->sc_memr, VAR_5, VAR_28);
   FUNC_0(50000);
   VAR_28 |= VAR_4;
   FUNC_8(VAR_18->sc_memr, VAR_5, VAR_28);
   FUNC_0(50000);
   VAR_28 &= ~VAR_4;
   FUNC_8(VAR_18->sc_memr, VAR_5, VAR_28);
   FUNC_0(50000);

   FUNC_8(VAR_18->sc_memr, VAR_5, VAR_28);
  }





  if ((FUNC_27(FUNC_21(VAR_23), "i2s") == 0) &&
      (FUNC_27(VAR_25, "K2-Keylargo") == 0)) {

   uint32_t VAR_29;

   VAR_29 = FUNC_7(VAR_18->sc_memr, VAR_6);
   VAR_29 |= VAR_1 | VAR_2;
   FUNC_8(VAR_18->sc_memr, VAR_6, VAR_29);
  }

 }

 return (FUNC_6(VAR_17));
}
