
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int planeNum; int * indexes; scalar_t__ numIndexes; int * verts; scalar_t__ numVerts; int planar; int type; } ;
typedef TYPE_1__ mapDrawSurface_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1( mapDrawSurface_t *VAR_3 ){
 VAR_3->type = VAR_0;
 VAR_3->planar = VAR_2;
 VAR_3->planeNum = -1;
 VAR_3->numVerts = 0;
 if ( VAR_3->verts != ((void*)0) ) {
  FUNC_0( VAR_3->verts );
 }
 VAR_3->verts = ((void*)0);
 VAR_3->numIndexes = 0;
 if ( VAR_3->indexes != ((void*)0) ) {
  FUNC_0( VAR_3->indexes );
 }
 VAR_3->indexes = ((void*)0);
 VAR_1++;
}
