
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
struct TYPE_12__ {size_t planenum; } ;
typedef TYPE_3__ side_t ;
struct TYPE_11__ {int width; int height; TYPE_1__* verts; } ;
struct TYPE_13__ {TYPE_2__ mesh; struct TYPE_13__* next; } ;
typedef TYPE_4__ parseMesh_t ;
struct TYPE_14__ {int origin; TYPE_4__* patches; TYPE_6__* brushes; } ;
typedef TYPE_5__ entity_t ;
struct TYPE_15__ {int numsides; TYPE_3__* sides; struct TYPE_15__* next; } ;
typedef TYPE_6__ brush_t ;
struct TYPE_16__ {int normal; scalar_t__ dist; } ;
struct TYPE_10__ {int xyz; } ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ,scalar_t__,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_7__* VAR_0 ;

void FUNC_4( entity_t *VAR_1 ){

 int VAR_2;
 side_t *VAR_3;
 vec_t VAR_4;
 brush_t *VAR_5;
 parseMesh_t *VAR_6;



 for ( VAR_5 = VAR_1->brushes; VAR_5 != ((void*)0); VAR_5 = VAR_5->next )
 {

  for ( VAR_2 = 0; VAR_2 < VAR_5->numsides; VAR_2++ )
  {

   VAR_3 = &VAR_5->sides[ VAR_2 ];


   VAR_4 = VAR_0[ VAR_3->planenum ].dist - FUNC_1( VAR_0[ VAR_3->planenum ].normal, VAR_1->origin );


   VAR_3->planenum = FUNC_2( VAR_0[ VAR_3->planenum ].normal, VAR_4, 0, ((void*)0) );
  }


  FUNC_0( VAR_5 );
 }


 for ( VAR_6 = VAR_1->patches; VAR_6 != ((void*)0); VAR_6 = VAR_6->next )
 {
  for ( VAR_2 = 0; VAR_2 < ( VAR_6->mesh.width * VAR_6->mesh.height ); VAR_2++ )
   FUNC_3( VAR_6->mesh.verts[ VAR_2 ].xyz, VAR_1->origin, VAR_6->mesh.verts[ VAR_2 ].xyz );
 }
}
