
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; void* verts; } ;
typedef TYPE_1__ mesh_t ;


 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (int) ;

mesh_t *FUNC_2( mesh_t *VAR_0 ) {
 mesh_t *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1( sizeof( *VAR_1 ) );
 VAR_1->width = VAR_0->width;
 VAR_1->height = VAR_0->height;

 VAR_2 = VAR_1->width * VAR_1->height * sizeof( *VAR_1->verts );
 VAR_1->verts = FUNC_1( VAR_2 );
 FUNC_0( VAR_1->verts, VAR_0->verts, VAR_2 );

 return VAR_1;
}
