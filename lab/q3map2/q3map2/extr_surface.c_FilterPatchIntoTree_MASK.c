
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_17__ {int headnode; } ;
typedef TYPE_3__ tree_t ;
struct TYPE_18__ {int width; int height; TYPE_1__* verts; } ;
typedef TYPE_4__ mesh_t ;
struct TYPE_19__ {int patchWidth; int patchHeight; TYPE_1__* verts; } ;
typedef TYPE_5__ mapDrawSurface_t ;
struct TYPE_15__ {int xyz; } ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_4__,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6( mapDrawSurface_t *VAR_1, tree_t *VAR_2 ){
 int VAR_3, VAR_4, VAR_5, VAR_6;
 mesh_t VAR_7, *VAR_8;
 winding_t *VAR_9;



 VAR_7.width = VAR_1->patchWidth;
 VAR_7.height = VAR_1->patchHeight;
 VAR_7.verts = VAR_1->verts;
 VAR_8 = FUNC_4( VAR_7, VAR_0, 32 );



 VAR_6 = 0;
 for ( VAR_5 = 0; VAR_5 < ( VAR_8->height - 1 ); VAR_5++ )
 {
  for ( VAR_4 = 0; VAR_4 < ( VAR_8->width - 1 ); VAR_4++ )
  {

   VAR_9 = FUNC_0( 3 );
   VAR_9->numpoints = 3;
   FUNC_5( VAR_8->verts[ VAR_5 * VAR_8->width + VAR_4 ].xyz, VAR_9->p[ 0 ] );
   FUNC_5( VAR_8->verts[ VAR_5 * VAR_8->width + VAR_4 + 1 ].xyz, VAR_9->p[ 1 ] );
   FUNC_5( VAR_8->verts[ ( VAR_5 + 1 ) * VAR_8->width + VAR_4 ].xyz, VAR_9->p[ 2 ] );
   VAR_6 += FUNC_2( VAR_9, VAR_1, VAR_2->headnode );


   VAR_9 = FUNC_0( 3 );
   VAR_9->numpoints = 3;
   FUNC_5( VAR_8->verts[ VAR_5 * VAR_8->width + VAR_4 + 1 ].xyz, VAR_9->p[ 0 ] );
   FUNC_5( VAR_8->verts[ ( VAR_5 + 1 ) * VAR_8->width + VAR_4 + 1 ].xyz, VAR_9->p[ 1 ] );
   FUNC_5( VAR_8->verts[ ( VAR_5 + 1 ) * VAR_8->width + VAR_4 ].xyz, VAR_9->p[ 2 ] );
   VAR_6 += FUNC_2( VAR_9, VAR_1, VAR_2->headnode );
  }
 }


 for ( VAR_3 = 0; VAR_3 < ( VAR_8->width * VAR_8->height ); VAR_3++ )
  VAR_6 += FUNC_1( VAR_8->verts[ VAR_3 ].xyz, VAR_1, VAR_2->headnode );


 FUNC_3( VAR_8 );
 return VAR_6;
}
