
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int width; int height; TYPE_1__* verts; } ;
struct TYPE_11__ {int eMaxs; int eMins; struct TYPE_11__* next; TYPE_2__ mesh; } ;
typedef TYPE_3__ parseMesh_t ;
struct TYPE_12__ {TYPE_3__* patches; TYPE_5__* brushes; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_13__ {int eMaxs; int eMins; struct TYPE_13__* next; int maxs; int mins; } ;
typedef TYPE_5__ brush_t ;
struct TYPE_9__ {int xyz; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,char*,int ) ;
 char* FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5( entity_t *VAR_0 ){
 int VAR_1;
 brush_t *VAR_2;
 parseMesh_t *VAR_3;
 vec3_t VAR_4, VAR_5;
 const char *VAR_6;





 FUNC_1( VAR_4, VAR_5 );
 for ( VAR_2 = VAR_0->brushes; VAR_2; VAR_2 = VAR_2->next )
 {
  FUNC_0( VAR_2->mins, VAR_4, VAR_5 );
  FUNC_0( VAR_2->maxs, VAR_4, VAR_5 );
 }
 for ( VAR_3 = VAR_0->patches; VAR_3; VAR_3 = VAR_3->next )
 {
  for ( VAR_1 = 0; VAR_1 < ( VAR_3->mesh.width * VAR_3->mesh.height ); VAR_1++ )
   FUNC_0( VAR_3->mesh.verts[ VAR_1 ].xyz, VAR_4, VAR_5 );
 }


 VAR_6 = FUNC_3( VAR_0, "min" );
 if ( VAR_6[ 0 ] != '\0' ) {
  FUNC_2( VAR_0, "min", VAR_4 );
 }
 VAR_6 = FUNC_3( VAR_0, "max" );
 if ( VAR_6[ 0 ] != '\0' ) {
  FUNC_2( VAR_0, "max", VAR_5 );
 }


 for ( VAR_2 = VAR_0->brushes; VAR_2; VAR_2 = VAR_2->next )
 {
  FUNC_4( VAR_4, VAR_2->eMins );
  FUNC_4( VAR_5, VAR_2->eMaxs );
 }
 for ( VAR_3 = VAR_0->patches; VAR_3; VAR_3 = VAR_3->next )
 {
  FUNC_4( VAR_4, VAR_3->eMins );
  FUNC_4( VAR_5, VAR_3->eMaxs );
 }
}
