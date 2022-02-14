
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int atc_mode; } ;
struct TYPE_4__ {scalar_t__ gc_misc_gm; } ;
struct vga_softc {TYPE_2__ vga_atc; TYPE_1__ vga_gc; TYPE_3__* gc_image; } ;
struct bhyvegc {int dummy; } ;
struct TYPE_6__ {int width; int height; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct bhyvegc*,struct vga_softc*) ;
 scalar_t__ FUNC_2 (struct vga_softc*) ;
 int FUNC_3 (struct vga_softc*) ;
 int FUNC_4 (struct vga_softc*) ;

void
FUNC_5(struct bhyvegc *VAR_1, void *VAR_2)
{
 struct vga_softc *VAR_3 = VAR_2;

 FUNC_1(VAR_1, VAR_3);

 if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_3->gc_image->data, 0,
      VAR_3->gc_image->width * VAR_3->gc_image->height *
       sizeof (uint32_t));
  return;
 }

 if (VAR_3->vga_gc.gc_misc_gm && (VAR_3->vga_atc.atc_mode & VAR_0))
  FUNC_3(VAR_3);
 else
  FUNC_4(VAR_3);
}
