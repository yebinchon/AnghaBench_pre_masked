
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct vmctx {int dummy; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct pci_fbuf_softc {TYPE_2__* gc_image; TYPE_1__ memregs; scalar_t__ gc_height; scalar_t__ gc_width; } ;
struct pci_devinst {struct pci_fbuf_softc* pi_arg; } ;
struct TYPE_4__ {int vgamode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static void
FUNC_3(struct vmctx *VAR_3, int VAR_4, struct pci_devinst *VAR_5,
        int VAR_6, uint64_t VAR_7, int VAR_8, uint64_t VAR_9)
{
 struct pci_fbuf_softc *VAR_10;
 uint8_t *VAR_11;

 FUNC_1(VAR_6 == 0);

 VAR_10 = VAR_5->pi_arg;

 FUNC_0(VAR_1,
     ("fbuf wr: offset 0x%lx, size: %d, value: 0x%lx\n",
     VAR_7, VAR_8, VAR_9));

 if (VAR_7 + VAR_8 > VAR_2) {
  FUNC_2("fbuf: write too large, offset %ld size %d\n",
         VAR_7, VAR_8);
  return;
 }

 VAR_11 = (uint8_t *)&VAR_10->memregs + VAR_7;

 switch (VAR_8) {
 case 1:
  *VAR_11 = VAR_9;
  break;
 case 2:
  *(uint16_t *)VAR_11 = VAR_9;
  break;
 case 4:
  *(uint32_t *)VAR_11 = VAR_9;
  break;
 case 8:
  *(uint64_t *)VAR_11 = VAR_9;
  break;
 default:
  FUNC_2("fbuf: write unknown size %d\n", VAR_8);
  break;
 }

 if (!VAR_10->gc_image->vgamode && VAR_10->memregs.width == 0 &&
     VAR_10->memregs.height == 0) {
  FUNC_0(VAR_0, ("switching to VGA mode\r\n"));
  VAR_10->gc_image->vgamode = 1;
  VAR_10->gc_width = 0;
  VAR_10->gc_height = 0;
 } else if (VAR_10->gc_image->vgamode && VAR_10->memregs.width != 0 &&
     VAR_10->memregs.height != 0) {
  FUNC_0(VAR_0, ("switching to VESA mode\r\n"));
  VAR_10->gc_image->vgamode = 0;
 }
}
