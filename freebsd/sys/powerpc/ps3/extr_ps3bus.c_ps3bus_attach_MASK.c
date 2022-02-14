
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {char* rm_descr; void* rm_type; } ;
struct ps3bus_softc {TYPE_1__ sc_mem_rman; int rcount; int regions; TYPE_1__ sc_intr_rman; } ;
struct ps3bus_devinfo {int bus; int dev; int bustype; int devtype; int busidx; int devidx; int iommu_mtx; } ;
typedef int * device_t ;


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
 void* VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,char*,int) ;
 struct ps3bus_softc* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct ps3bus_devinfo*) ;
 int FUNC_6 (struct ps3bus_devinfo*,int ) ;
 int FUNC_7 (int ,int,int,int,int ,int*,int*) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (char*) ;
 struct ps3bus_devinfo* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (TYPE_1__*,int,int,struct ps3bus_devinfo*) ;
 int FUNC_14 (TYPE_1__*,int,int,int ,int ,struct ps3bus_devinfo*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_12)
{
 struct ps3bus_softc *VAR_13;
 struct ps3bus_devinfo *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint64_t VAR_18, VAR_19, VAR_20;
 uint64_t VAR_21, VAR_22;
 uint64_t VAR_23;
 device_t VAR_24;

 VAR_13 = FUNC_3(VAR_12);
 VAR_13->sc_mem_rman.rm_type = VAR_11;
 VAR_13->sc_mem_rman.rm_descr = "PS3Bus Memory Mapped I/O";
 VAR_13->sc_intr_rman.rm_type = VAR_11;
 VAR_13->sc_intr_rman.rm_descr = "PS3Bus Interrupts";
 FUNC_15(&VAR_13->sc_mem_rman);
 FUNC_15(&VAR_13->sc_intr_rman);
 FUNC_16(&VAR_13->sc_intr_rman, 0, ~0);


 FUNC_11(&VAR_13->regions, &VAR_13->rcount, ((void*)0), ((void*)0));





 for (VAR_15 = 0; VAR_15 < 5; VAR_15++) {
  VAR_17 = FUNC_7(VAR_10,
      (FUNC_9("bus") >> 32) | VAR_15,
      FUNC_9("type"), 0, 0, &VAR_18, &VAR_23);

  if (VAR_17 != 0)
   continue;

  VAR_17 = FUNC_7(VAR_10,
      (FUNC_9("bus") >> 32) | VAR_15,
      FUNC_9("id"), 0, 0, &VAR_19, &VAR_23);

  if (VAR_17 != 0)
   continue;

  VAR_17 = FUNC_7(VAR_10,
      (FUNC_9("bus") >> 32) | VAR_15,
      FUNC_9("num_dev"), 0, 0, &VAR_20, &VAR_23);

  for (VAR_16 = 0; VAR_16 < VAR_20; VAR_16++) {
   VAR_17 = FUNC_7(VAR_10,
       (FUNC_9("bus") >> 32) | VAR_15,
       FUNC_9("dev") | VAR_16,
       FUNC_9("type"), 0, &VAR_22, &VAR_23);

   if (VAR_17 != 0)
    continue;

   VAR_17 = FUNC_7(VAR_10,
       (FUNC_9("bus") >> 32) | VAR_15,
       FUNC_9("dev") | VAR_16,
       FUNC_9("id"), 0, &VAR_21, &VAR_23);

   if (VAR_17 != 0)
    continue;

   switch (VAR_22) {
   case 128:


    FUNC_8(VAR_19, VAR_21, 0);



    VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_3,
        VAR_4 | VAR_5);

    VAR_14->bus = VAR_19;
    VAR_14->dev = VAR_21;
    VAR_14->bustype = VAR_18;
    VAR_14->devtype = VAR_22;
    VAR_14->busidx = VAR_15;
    VAR_14->devidx = VAR_16;

    FUNC_14(&VAR_13->sc_mem_rman, VAR_15,
        VAR_16, VAR_6, VAR_7, VAR_14);

    VAR_24 = FUNC_2(VAR_12, "ohci", -1);
    if (VAR_24 == ((void*)0)) {
     FUNC_4(VAR_12,
         "device_add_child failed\n");
     FUNC_6(VAR_14, VAR_3);
     continue;
    }

    FUNC_12(&VAR_14->iommu_mtx, "iommu", ((void*)0), VAR_2);
    FUNC_5(VAR_24, VAR_14);



    VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_3,
        VAR_4 | VAR_5);

    VAR_14->bus = VAR_19;
    VAR_14->dev = VAR_21;
    VAR_14->bustype = VAR_18;
    VAR_14->devtype = VAR_22;
    VAR_14->busidx = VAR_15;
    VAR_14->devidx = VAR_16;

    FUNC_14(&VAR_13->sc_mem_rman, VAR_15,
        VAR_16, VAR_0, VAR_1, VAR_14);

    VAR_24 = FUNC_2(VAR_12, "ehci", -1);
    if (VAR_24 == ((void*)0)) {
     FUNC_4(VAR_12,
         "device_add_child failed\n");
     FUNC_6(VAR_14, VAR_3);
     continue;
    }

    FUNC_12(&VAR_14->iommu_mtx, "iommu", ((void*)0), VAR_2);
    FUNC_5(VAR_24, VAR_14);
    break;
   default:
    VAR_14 = FUNC_10(sizeof(*VAR_14), VAR_3,
        VAR_4 | VAR_5);

    VAR_14->bus = VAR_19;
    VAR_14->dev = VAR_21;
    VAR_14->bustype = VAR_18;
    VAR_14->devtype = VAR_22;
    VAR_14->busidx = VAR_15;
    VAR_14->devidx = VAR_16;

    if (VAR_14->bustype == VAR_9 ||
        VAR_14->bustype == VAR_8)
     FUNC_8(VAR_19, VAR_21, 0);

    FUNC_13(&VAR_13->sc_mem_rman, VAR_15,
        VAR_16, VAR_14);

    VAR_24 = FUNC_2(VAR_12, ((void*)0), -1);
    if (VAR_24 == ((void*)0)) {
     FUNC_4(VAR_12,
         "device_add_child failed\n");
     FUNC_6(VAR_14, VAR_3);
     continue;
    }

    FUNC_12(&VAR_14->iommu_mtx, "iommu", ((void*)0), VAR_2);
    FUNC_5(VAR_24, VAR_14);
   }
  }
 }

 FUNC_1(VAR_12, 1000);

 return (FUNC_0(VAR_12));
}
