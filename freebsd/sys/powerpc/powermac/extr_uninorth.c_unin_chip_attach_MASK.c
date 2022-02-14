
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef char u_int ;
struct TYPE_5__ {char* rm_descr; int rm_type; } ;
struct unin_chip_softc {char sc_physaddr; char sc_size; char sc_version; scalar_t__ sc_addr; TYPE_1__ sc_mem_rman; } ;
struct TYPE_6__ {int obd_name; } ;
struct unin_chip_devinfo {size_t udi_ninterrupts; char* udi_interrupts; TYPE_3__ udi_obdinfo; int udi_resources; } ;
typedef int scells ;
typedef int reg ;
typedef scalar_t__ phandle_t ;
typedef int name ;
typedef int iparent ;
typedef int * device_t ;
typedef int compat ;
typedef int cell_t ;
typedef int acells ;


 int VAR_0 ;
 char FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,int) ;
 struct unin_chip_softc* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int *,struct unin_chip_devinfo*) ;
 int FUNC_11 (struct unin_chip_devinfo*,int ) ;
 struct unin_chip_devinfo* FUNC_12 (int,int ,int) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int,int ) ;
 int FUNC_18 (int *,int ,size_t,char,char,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,char,int) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int * VAR_7 ;
 int FUNC_24 (scalar_t__,struct unin_chip_devinfo*) ;
 int FUNC_25 (scalar_t__,struct unin_chip_devinfo*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_8)
{
 struct unin_chip_softc *VAR_9;
 struct unin_chip_devinfo *VAR_10;
 phandle_t VAR_11;
 phandle_t VAR_12;
 phandle_t VAR_13;
 device_t VAR_14;
 cell_t VAR_15, VAR_16;
 char VAR_17[32];
 char VAR_18[32];
 u_int VAR_19, VAR_20[3];
 int VAR_21, VAR_22 = 0;

 VAR_9 = FUNC_8(VAR_8);
 VAR_11 = FUNC_16(VAR_8);

 if (FUNC_3(VAR_11, "reg", VAR_20, sizeof(VAR_20)) < 8)
  return (VAR_0);

 VAR_15 = VAR_16 = 1;
 FUNC_3(FUNC_4(VAR_11), "#address-cells", &VAR_15, sizeof(VAR_15));
 FUNC_3(FUNC_4(VAR_11), "#size-cells", &VAR_16, sizeof(VAR_16));

 VAR_22 = 0;
 VAR_9->sc_physaddr = VAR_20[VAR_22++];
 if (VAR_15 == 2) {
  VAR_9->sc_physaddr <<= 32;
  VAR_9->sc_physaddr |= VAR_20[VAR_22++];
 }
 VAR_9->sc_size = VAR_20[VAR_22++];
 if (VAR_16 == 2) {
  VAR_9->sc_size <<= 32;
  VAR_9->sc_size |= VAR_20[VAR_22++];
 }

 VAR_9->sc_mem_rman.rm_type = VAR_5;
 VAR_9->sc_mem_rman.rm_descr = "UniNorth Device Memory";

 VAR_21 = FUNC_21(&VAR_9->sc_mem_rman);

 if (VAR_21) {
  FUNC_9(VAR_8, "rman_init() failed. error = %d\n", VAR_21);
  return (VAR_21);
 }

 VAR_21 = FUNC_22(&VAR_9->sc_mem_rman, VAR_9->sc_physaddr,
       VAR_9->sc_physaddr + VAR_9->sc_size - 1);
 if (VAR_21) {
  FUNC_9(VAR_8,
         "rman_manage_region() failed. error = %d\n",
         VAR_21);
  return (VAR_21);
 }

 if (VAR_7 == ((void*)0))
  VAR_7 = VAR_8;




 for (VAR_12 = FUNC_1(VAR_11); VAR_12 != 0; VAR_12 = FUNC_5(VAR_12)) {
  VAR_10 = FUNC_12(sizeof(*VAR_10), VAR_1, VAR_2 | VAR_3);
  if (FUNC_15(&VAR_10->udi_obdinfo, VAR_12)
      != 0)
  {
   FUNC_11(VAR_10, VAR_1);
   continue;
  }

  FUNC_20(&VAR_10->udi_resources);
  VAR_10->udi_ninterrupts = 0;
  FUNC_24(VAR_12, VAR_10);
  if (FUNC_3(VAR_12, "name", VAR_18, sizeof(VAR_18)) <= 0)
   FUNC_9(VAR_8, "device has no name!\n");
  if (VAR_10->udi_ninterrupts == 0 &&
      (FUNC_23(VAR_18, "i2c-bus") == 0 ||
       FUNC_23(VAR_18, "i2c") == 0)) {
   if (FUNC_3(VAR_12, "interrupt-parent", &VAR_13,
           sizeof(VAR_13)) <= 0) {
    VAR_13 = FUNC_2("/u3/mpic");
    FUNC_9(VAR_8, "Set /u3/mpic as iparent!\n");
   }

   VAR_19 = FUNC_0(VAR_13, 0);
   FUNC_18(&VAR_10->udi_resources, VAR_6,
       VAR_10->udi_ninterrupts, VAR_19, VAR_19, 1);
   VAR_10->udi_interrupts[VAR_10->udi_ninterrupts] = VAR_19;
   VAR_10->udi_ninterrupts++;
  }

  FUNC_25(VAR_12, VAR_10);

  VAR_14 = FUNC_7(VAR_8, ((void*)0), -1);
  if (VAR_14 == ((void*)0)) {
   FUNC_9(VAR_8, "<%s>: device_add_child failed\n",
          VAR_10->udi_obdinfo.obd_name);
   FUNC_19(&VAR_10->udi_resources);
   FUNC_14(&VAR_10->udi_obdinfo);
   FUNC_11(VAR_10, VAR_1);
   continue;
  }

  FUNC_10(VAR_14, VAR_10);
 }





 VAR_9->sc_addr = (vm_offset_t)FUNC_17(VAR_9->sc_physaddr, VAR_4);

 VAR_9->sc_version = *(u_int *)VAR_9->sc_addr;
 FUNC_9(VAR_8, "Version %d\n", VAR_9->sc_version);





 for (VAR_12 = FUNC_1(VAR_11); VAR_12; VAR_12 = FUNC_5(VAR_12)) {
  FUNC_13(VAR_17, 0, sizeof(VAR_17));
  FUNC_3(VAR_12, "compatible", VAR_17, sizeof(VAR_17));
  if (FUNC_23(VAR_17, "gmac") == 0)
   FUNC_26(VAR_8);
  if (FUNC_23(VAR_17, "chrp,open-pic") == 0)
   FUNC_27(VAR_8);
 }




 VAR_12 = FUNC_2("enet");
 FUNC_13(VAR_17, 0, sizeof(VAR_17));
 FUNC_3(VAR_12, "compatible", VAR_17, sizeof(VAR_17));
 if (FUNC_23(VAR_17, "gmac") == 0)
  FUNC_26(VAR_8);

 return (FUNC_6(VAR_8));
}
