
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_4__ {int depth; int height; int width; int fbsize; } ;
struct pci_fbuf_softc {int vga_enabled; scalar_t__ vga_full; scalar_t__ fb_base; int rfb_password; int rfb_wait; int rfb_port; int rfb_host; int gc_image; int vgasc; TYPE_2__ memregs; int fbaddr; struct pci_devinst* fsc_pi; } ;
struct pci_devinst {TYPE_1__* pi_bar; struct pci_fbuf_softc* pi_arg; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 struct pci_fbuf_softc* FUNC_2 (int,int) ;
 int FUNC_3 (int ,struct pci_fbuf_softc*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 struct pci_fbuf_softc* VAR_17 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct pci_fbuf_softc*) ;
 int FUNC_8 (void*,int ,int ) ;
 int FUNC_9 (struct pci_devinst*,int ) ;
 int FUNC_10 (struct pci_devinst*,int,int ,int ) ;
 int FUNC_11 (struct pci_fbuf_softc*,char*) ;
 int VAR_18 ;
 int FUNC_12 (struct pci_devinst*,int ,int) ;
 int FUNC_13 (struct pci_devinst*,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int VAR_19 ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (struct vmctx*,int ,char*,int ) ;
 scalar_t__ FUNC_17 (struct vmctx*,int ,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_18(struct vmctx *VAR_20, struct pci_devinst *VAR_21, char *VAR_22)
{
 int VAR_23, VAR_24;
 struct pci_fbuf_softc *VAR_25;

 if (VAR_17 != ((void*)0)) {
  FUNC_6(VAR_19, "Only one frame buffer device is allowed.\n");
  return (-1);
 }

 VAR_25 = FUNC_2(1, sizeof(struct pci_fbuf_softc));

 VAR_21->pi_arg = VAR_25;


 FUNC_12(VAR_21, VAR_8, 0x40FB);
 FUNC_12(VAR_21, VAR_10, 0xFB5D);
 FUNC_13(VAR_21, VAR_7, VAR_6);
 FUNC_13(VAR_21, VAR_9, VAR_11);

 VAR_23 = FUNC_10(VAR_21, 0, VAR_5, VAR_2);
 FUNC_1(VAR_23 == 0);

 VAR_23 = FUNC_10(VAR_21, 1, VAR_5, VAR_3);
 FUNC_1(VAR_23 == 0);

 VAR_23 = FUNC_9(VAR_21, VAR_12);
 FUNC_1(VAR_23 == 0);

 VAR_25->fbaddr = VAR_21->pi_bar[1].addr;
 VAR_25->memregs.fbsize = VAR_3;
 VAR_25->memregs.width = VAR_0;
 VAR_25->memregs.height = VAR_15;
 VAR_25->memregs.depth = 32;

 VAR_25->vga_enabled = 1;
 VAR_25->vga_full = 0;

 VAR_25->fsc_pi = VAR_21;

 VAR_23 = FUNC_11(VAR_25, VAR_22);
 if (VAR_23 != 0)
  goto done;


 if (VAR_25->vga_full != 0) {
  FUNC_6(VAR_19, "pci_fbuf: VGA rendering not enabled");
  goto done;
 }

 VAR_25->fb_base = FUNC_16(VAR_20, VAR_16, "framebuffer", VAR_3);
 if (VAR_25->fb_base == VAR_4) {
  VAR_23 = -1;
  goto done;
 }
 FUNC_0(VAR_1, ("fbuf frame buffer base: %p [sz %lu]\r\n",
         VAR_25->fb_base, VAR_3));







 VAR_24 = VAR_13 | VAR_14;
 if (FUNC_17(VAR_20, VAR_25->fbaddr, VAR_16, 0, VAR_3, VAR_24) != 0) {
  FUNC_6(VAR_19, "pci_fbuf: mapseg failed - try deleting VM and restarting\n");
  VAR_23 = -1;
  goto done;
 }

 FUNC_5(VAR_25->memregs.width, VAR_25->memregs.height, VAR_25->fb_base);
 FUNC_3(VAR_18, VAR_25);

 if (VAR_25->vga_enabled)
  VAR_25->vgasc = FUNC_15(!VAR_25->vga_full);
 VAR_25->gc_image = FUNC_4();

 VAR_17 = VAR_25;

 FUNC_8((void *)VAR_25->fb_base, 0, VAR_3);

 VAR_23 = FUNC_14(VAR_25->rfb_host, VAR_25->rfb_port, VAR_25->rfb_wait, VAR_25->rfb_password);
done:
 if (VAR_23)
  FUNC_7(VAR_25);

 return (VAR_23);
}
