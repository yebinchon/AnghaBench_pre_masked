
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vga_softc {int gc_height; int gc_width; TYPE_1__* gc_image; } ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (struct vga_softc*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct vga_softc *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->gc_height; VAR_2++) {
  for (VAR_1 = 0; VAR_1 < VAR_0->gc_width; VAR_1++) {
   int VAR_3;

   VAR_3 = VAR_2 * VAR_0->gc_width + VAR_1;
   VAR_0->gc_image->data[VAR_3] = FUNC_0(VAR_0, VAR_1, VAR_2);
  }
 }
}
