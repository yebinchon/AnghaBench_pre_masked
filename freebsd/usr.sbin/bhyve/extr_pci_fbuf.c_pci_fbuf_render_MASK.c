
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ width; scalar_t__ height; } ;
struct pci_fbuf_softc {scalar_t__ gc_width; scalar_t__ gc_height; TYPE_1__ memregs; int vgasc; TYPE_2__* gc_image; scalar_t__ vga_full; } ;
struct bhyvegc {int dummy; } ;
struct TYPE_4__ {scalar_t__ vgamode; } ;


 int FUNC_0 (struct bhyvegc*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bhyvegc*,int ) ;

void
FUNC_2(struct bhyvegc *VAR_0, void *VAR_1)
{
 struct pci_fbuf_softc *VAR_2;

 VAR_2 = VAR_1;

 if (VAR_2->vga_full && VAR_2->gc_image->vgamode) {



  FUNC_1(VAR_0, VAR_2->vgasc);
  return;
 }
 if (VAR_2->gc_width != VAR_2->memregs.width ||
     VAR_2->gc_height != VAR_2->memregs.height) {
  FUNC_0(VAR_0, VAR_2->memregs.width, VAR_2->memregs.height);
  VAR_2->gc_width = VAR_2->memregs.width;
  VAR_2->gc_height = VAR_2->memregs.height;
 }

 return;
}
