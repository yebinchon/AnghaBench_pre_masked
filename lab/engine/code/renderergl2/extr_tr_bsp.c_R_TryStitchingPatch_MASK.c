
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ surfaceType; scalar_t__ lodRadius; scalar_t__* lodOrigin; } ;
typedef TYPE_2__ srfBspSurface_t ;
struct TYPE_6__ {int numsurfaces; TYPE_1__* surfaces; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

int FUNC_1( int VAR_2 ) {
 int VAR_3, VAR_4;
 srfBspSurface_t *VAR_5, *VAR_6;

 VAR_4 = 0;
 VAR_5 = (srfBspSurface_t *) VAR_1.surfaces[VAR_2].data;
 for ( VAR_3 = 0; VAR_3 < VAR_1.numsurfaces; VAR_3++ ) {

  VAR_6 = (srfBspSurface_t *) VAR_1.surfaces[VAR_3].data;

  if ( VAR_6->surfaceType != VAR_0 ) continue;

  if ( VAR_5->lodRadius != VAR_6->lodRadius ) continue;

  if ( VAR_5->lodOrigin[0] != VAR_6->lodOrigin[0] ) continue;
  if ( VAR_5->lodOrigin[1] != VAR_6->lodOrigin[1] ) continue;
  if ( VAR_5->lodOrigin[2] != VAR_6->lodOrigin[2] ) continue;

  while (FUNC_0(VAR_2, VAR_3))
  {
   VAR_4++;
  }
 }
 return VAR_4;
}
