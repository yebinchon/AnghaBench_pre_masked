
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dma_bits; int bdev; int devices_max; int devices; int parent; } ;
struct TYPE_7__ {TYPE_2__ sc_bus; int sc_vendor_post_reset; int sc_intr_hdl; int * sc_irq_res; int sc_vendor; void* sc_io_res; int sc_io_size; int sc_io_hdl; int sc_io_tag; int sc_devices; } ;
typedef TYPE_1__ ehci_softc_t ;
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
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int *,int,int *,int *,TYPE_1__*,int *) ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_12)
{
 ehci_softc_t *VAR_13 = FUNC_4(VAR_12);
 int VAR_14, VAR_15;

 VAR_13->sc_bus.parent = VAR_12;
 VAR_13->sc_bus.devices = VAR_13->sc_devices;
 VAR_13->sc_bus.devices_max = VAR_0;
 VAR_13->sc_bus.dma_bits = 32;


 if (FUNC_13(&VAR_13->sc_bus,
     FUNC_0(VAR_12), &VAR_10))
  return (VAR_1);

 VAR_14 = 1;
 VAR_13->sc_io_res = FUNC_1(VAR_12, VAR_8,
     &VAR_14, VAR_5);

 if (!VAR_13->sc_io_res) {
  FUNC_5(VAR_12, "Could not map memory\n");
  goto error;
 }

 VAR_13->sc_io_tag = FUNC_10(VAR_13->sc_io_res);
 VAR_13->sc_io_hdl = FUNC_9(VAR_13->sc_io_res);
 VAR_13->sc_io_size = FUNC_11(VAR_13->sc_io_res);

 VAR_14 = 1;
 VAR_13->sc_irq_res = FUNC_1(VAR_12, VAR_7, &VAR_14,
     VAR_6 | VAR_5);

 if (VAR_13->sc_irq_res == ((void*)0)) {
  FUNC_5(VAR_12, "Could not allocate irq\n");
  return (VAR_2);
 }

 VAR_13->sc_bus.bdev = FUNC_3(VAR_12, "usbus", -1);
 if (!VAR_13->sc_bus.bdev) {
  FUNC_5(VAR_12, "Could not add USB device\n");
  return (VAR_2);
 }

 FUNC_7(VAR_13->sc_bus.bdev, &VAR_13->sc_bus);

 FUNC_12(VAR_13->sc_vendor, "Sony");

 VAR_15 = FUNC_2(VAR_12, VAR_13->sc_irq_res, VAR_4 | VAR_3,
     ((void*)0), (driver_intr_t *)VAR_9, VAR_13, &VAR_13->sc_intr_hdl);
 if (VAR_15) {
  FUNC_5(VAR_12, "Could not setup error irq, %d\n", VAR_15);
  goto error;
 }

 VAR_13->sc_vendor_post_reset = VAR_11;
 VAR_15 = FUNC_8(VAR_13);
 if (VAR_15) {
  FUNC_5(VAR_12, "USB init failed err=%d\n", VAR_15);
  goto error;
 }

 VAR_15 = FUNC_6(VAR_13->sc_bus.bdev);
 if (VAR_15 == 0)
  return (0);

error:
 return (VAR_2);
}
