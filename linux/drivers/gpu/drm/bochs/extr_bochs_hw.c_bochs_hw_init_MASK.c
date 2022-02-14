
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int revision; TYPE_1__* resource; } ;
struct drm_device {struct pci_dev* pdev; struct bochs_device* dev_private; } ;
struct bochs_device {int ioports; unsigned long fb_base; unsigned long fb_size; int qext_size; int * mmio; int * fb_map; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,unsigned long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_3 (struct bochs_device*,int ) ;
 int FUNC_4 (struct bochs_device*) ;
 void* FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int,char*) ;
 unsigned long FUNC_8 (struct pci_dev*,int) ;
 unsigned long FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned long,unsigned long,char*) ;

int FUNC_12(struct drm_device *VAR_8)
{
 struct bochs_device *VAR_9 = VAR_8->dev_private;
 struct pci_dev *VAR_10 = VAR_8->pdev;
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u16 VAR_16;

 if (VAR_10->resource[2].flags & VAR_3) {

  if (FUNC_7(VAR_10, 2, "bochs-drm") != 0) {
   FUNC_1("Cannot request mmio region\n");
   return -VAR_0;
  }
  VAR_14 = FUNC_9(VAR_10, 2);
  VAR_15 = FUNC_8(VAR_10, 2);
  VAR_9->mmio = FUNC_5(VAR_14, VAR_15);
  if (VAR_9->mmio == ((void*)0)) {
   FUNC_1("Cannot map mmio region\n");
   return -VAR_2;
  }
 } else {
  VAR_14 = VAR_7;
  VAR_15 = 2;
  if (!FUNC_11(VAR_14, VAR_15, "bochs-drm")) {
   FUNC_1("Cannot request ioports\n");
   return -VAR_0;
  }
  VAR_9->ioports = 1;
 }

 VAR_16 = FUNC_3(VAR_9, VAR_5);
 VAR_13 = FUNC_3(VAR_9, VAR_6)
  * 64 * 1024;
 if ((VAR_16 & 0xfff0) != VAR_4) {
  FUNC_1("ID mismatch\n");
  return -VAR_1;
 }

 if ((VAR_10->resource[0].flags & VAR_3) == 0)
  return -VAR_1;
 VAR_11 = FUNC_9(VAR_10, 0);
 VAR_12 = FUNC_8(VAR_10, 0);
 if (VAR_11 == 0)
  return -VAR_1;
 if (VAR_12 != VAR_13) {
  FUNC_1("Size mismatch: pci=%ld, bochs=%ld\n",
   VAR_12, VAR_13);
  VAR_12 = FUNC_6(VAR_12, VAR_13);
 }

 if (FUNC_7(VAR_10, 0, "bochs-drm") != 0) {
  FUNC_1("Cannot request framebuffer\n");
  return -VAR_0;
 }

 VAR_9->fb_map = FUNC_5(VAR_11, VAR_12);
 if (VAR_9->fb_map == ((void*)0)) {
  FUNC_1("Cannot map framebuffer\n");
  return -VAR_2;
 }
 VAR_9->fb_base = VAR_11;
 VAR_9->fb_size = VAR_12;

 FUNC_2("Found bochs VGA, ID 0x%x.\n", VAR_16);
 FUNC_2("Framebuffer size %ld kB @ 0x%lx, %s @ 0x%lx.\n",
   VAR_12 / 1024, VAR_11,
   VAR_9->ioports ? "ioports" : "mmio",
   VAR_14);

 if (VAR_9->mmio && VAR_10->revision >= 2) {
  VAR_9->qext_size = FUNC_10(VAR_9->mmio + 0x600);
  if (VAR_9->qext_size < 4 || VAR_9->qext_size > VAR_15) {
   VAR_9->qext_size = 0;
   goto noext;
  }
  FUNC_0("Found qemu ext regs, size %ld\n",
     VAR_9->qext_size);
  FUNC_4(VAR_9);
 }

noext:
 return 0;
}
