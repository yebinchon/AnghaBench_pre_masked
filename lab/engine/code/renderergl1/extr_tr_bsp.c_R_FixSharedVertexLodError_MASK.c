
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ surfaceType; int lodFixed; } ;
typedef TYPE_2__ srfGridMesh_t ;
struct TYPE_7__ {int numsurfaces; TYPE_1__* surfaces; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_1( void ) {
 int VAR_2;
 srfGridMesh_t *VAR_3;

 for ( VAR_2 = 0; VAR_2 < VAR_1.numsurfaces; VAR_2++ ) {

  VAR_3 = (srfGridMesh_t *) VAR_1.surfaces[VAR_2].data;

  if ( VAR_3->surfaceType != VAR_0 )
   continue;

  if ( VAR_3->lodFixed )
   continue;

  VAR_3->lodFixed = 2;

  FUNC_0( VAR_2 + 1, VAR_3);
 }
}
