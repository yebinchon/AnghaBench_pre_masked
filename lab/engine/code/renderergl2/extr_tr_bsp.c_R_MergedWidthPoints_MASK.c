
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; TYPE_1__* verts; } ;
typedef TYPE_2__ srfBspSurface_t ;
struct TYPE_4__ {scalar_t__* xyz; } ;


 double FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(srfBspSurface_t *VAR_2, int VAR_3) {
 int VAR_4, VAR_5;

 for (VAR_4 = 1; VAR_4 < VAR_2->width-1; VAR_4++) {
  for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_2->width-1; VAR_5++) {
   if ( FUNC_0(VAR_2->verts[VAR_4 + VAR_3].xyz[0] - VAR_2->verts[VAR_5 + VAR_3].xyz[0]) > .1) continue;
   if ( FUNC_0(VAR_2->verts[VAR_4 + VAR_3].xyz[1] - VAR_2->verts[VAR_5 + VAR_3].xyz[1]) > .1) continue;
   if ( FUNC_0(VAR_2->verts[VAR_4 + VAR_3].xyz[2] - VAR_2->verts[VAR_5 + VAR_3].xyz[2]) > .1) continue;
   return VAR_1;
  }
 }
 return VAR_0;
}
