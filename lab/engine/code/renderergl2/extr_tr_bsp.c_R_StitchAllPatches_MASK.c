
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ surfaceType; void* lodStitched; } ;
typedef TYPE_2__ srfBspSurface_t ;
struct TYPE_8__ {int (* Printf ) (int ,char*,int) ;} ;
struct TYPE_7__ {int numsurfaces; TYPE_1__* surfaces; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2( void ) {
 int VAR_6, VAR_7, VAR_8;
 srfBspSurface_t *VAR_9;

 VAR_8 = 0;
 do
 {
  VAR_7 = VAR_2;
  for ( VAR_6 = 0; VAR_6 < VAR_5.numsurfaces; VAR_6++ ) {

   VAR_9 = (srfBspSurface_t *) VAR_5.surfaces[VAR_6].data;

   if ( VAR_9->surfaceType != VAR_1 )
    continue;

   if ( VAR_9->lodStitched )
    continue;

   VAR_9->lodStitched = VAR_3;
   VAR_7 = VAR_3;

   VAR_8 += FUNC_0( VAR_6 );
  }
 }
 while (VAR_7);
 VAR_4.Printf( VAR_0, "stitched %d LoD cracks\n", VAR_8 );
}
