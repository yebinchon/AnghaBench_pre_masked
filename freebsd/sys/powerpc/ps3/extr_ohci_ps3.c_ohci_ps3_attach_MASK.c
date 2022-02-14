
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_7__ {TYPE_2__ sc_bus; int sc_io_hdl; int sc_io_tag; int sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_devices; } ;
typedef TYPE_1__ ohci_softc_t ;
typedef int driver_intr_t ;
typedef int device_t ;


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
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int *,int,int *,int *,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_12)
{
 ohci_softc_t *VAR_13 = FUNC_5(VAR_12);
 int VAR_14, VAR_15;

 VAR_13->sc_bus.parent = VAR_12;
 VAR_13->sc_bus.devices = VAR_13->sc_devices;
 VAR_13->sc_bus.devices_max = VAR_5;
 VAR_13->sc_bus.dma_bits = 32;


 if (FUNC_14(&VAR_13->sc_bus,
     FUNC_0(VAR_12), &VAR_11))
  return (VAR_0);

 VAR_14 = 0;
 VAR_13->sc_io_res = FUNC_1(VAR_12, VAR_9,
     &VAR_14, VAR_6);

 if (!VAR_13->sc_io_res) {
  FUNC_6(VAR_12, "Could not map memory\n");
  goto error;
 }

 VAR_13->sc_io_tag = FUNC_11(VAR_13->sc_io_res);
 VAR_13->sc_io_hdl = FUNC_10(VAR_13->sc_io_res);
 VAR_13->sc_io_size = FUNC_12(VAR_13->sc_io_res);

 VAR_14 = 0;
 VAR_13->sc_irq_res = FUNC_1(VAR_12, VAR_8, &VAR_14,
     VAR_7 | VAR_6);

 if (VAR_13->sc_irq_res == ((void*)0)) {
  FUNC_6(VAR_12, "Could not allocate irq\n");
  return (VAR_1);
 }

 VAR_13->sc_bus.bdev = FUNC_4(VAR_12, "usbus", -1);
 if (!VAR_13->sc_bus.bdev) {
  FUNC_6(VAR_12, "Could not add USB device\n");
  return (VAR_1);
 }

 FUNC_8(VAR_13->sc_bus.bdev, &VAR_13->sc_bus);

 FUNC_13(VAR_13->sc_vendor, "Sony");

 VAR_15 = FUNC_2(VAR_12, VAR_13->sc_irq_res, VAR_3 | VAR_2,
     ((void*)0), (driver_intr_t *)VAR_10, VAR_13, &VAR_13->sc_intr_hdl);
 if (VAR_15) {
  FUNC_6(VAR_12, "Could not setup error irq, %d\n", VAR_15);
  goto error;
 }


 FUNC_3(VAR_13->sc_io_tag, VAR_13->sc_io_hdl,
     VAR_4, 0);
 VAR_15 = FUNC_9(VAR_13);
 if (VAR_15) {
  FUNC_6(VAR_12, "USB init failed err=%d\n", VAR_15);
  goto error;
 }

 VAR_15 = FUNC_7(VAR_13->sc_bus.bdev);
 if (VAR_15 == 0)
  return (0);

error:
 return (VAR_1);
}
