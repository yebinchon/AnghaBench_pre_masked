
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int vec3_t ;
struct TYPE_15__ {struct TYPE_15__* next; int shaderInfo; int mesh; int longestCurve; int eMaxs; int eMins; } ;
typedef TYPE_1__ parseMesh_t ;
struct TYPE_16__ {int width; int height; TYPE_4__* verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_17__ {TYPE_1__* patches; int origin; int * epairs; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_18__ {int xyz; } ;
typedef TYPE_4__ bspDrawVert_t ;


 float FUNC_0 (int ,float*) ;
 TYPE_3__* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,float*,float,int,TYPE_4__**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (float*,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,char*,...) ;
 char* FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 float FUNC_15 (int ,float*) ;
 int FUNC_16 (int ,float,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_18 (float) ;
 int FUNC_19 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_20( void ){
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12[ 5 ], VAR_13, VAR_14;
 float VAR_15;
 vec4_t VAR_16, VAR_17;
 vec3_t VAR_18, VAR_19, VAR_20;
 entity_t *VAR_21, *VAR_22;
 parseMesh_t *VAR_23;
 mesh_t *VAR_24, *VAR_25;
 bspDrawVert_t *VAR_26[ 4 ];
 const char *VAR_27;



 FUNC_10( VAR_1, "--- ProcessDecals ---\n" );


 for ( VAR_8 = 0; VAR_8 < VAR_4; VAR_8++ )
 {

  VAR_21 = &VAR_3[ VAR_8 ];
  VAR_27 = FUNC_11( VAR_21, "classname" );
  if ( FUNC_7( VAR_27, "_decal" ) ) {
   continue;
  }


  if ( VAR_21->patches == ((void*)0) ) {
   FUNC_10( VAR_2, "WARNING: Decal entity without any patch meshes, ignoring.\n" );
   VAR_21->epairs = ((void*)0);
   continue;
  }


  VAR_27 = FUNC_11( VAR_21, "target" );
  VAR_22 = FUNC_1( VAR_27 );


  if ( VAR_22 == ((void*)0) ) {
   FUNC_10( VAR_2, "WARNING: Decal entity without a valid target, ignoring.\n" );
   continue;
  }


  for ( VAR_23 = VAR_21->patches; VAR_23 != ((void*)0); VAR_23 = VAR_21->patches )
  {

   if ( FUNC_13( VAR_21->origin, VAR_7 ) ) {
    FUNC_12( VAR_23->eMins, VAR_23->eMaxs, VAR_18 );
    FUNC_16( VAR_18, 0.5f, VAR_18 );
   }
   else{
    FUNC_14( VAR_21->origin, VAR_18 );
   }

   FUNC_14( VAR_22->origin, VAR_19 );
   FUNC_17( VAR_19, VAR_18, VAR_20 );


   VAR_15 = FUNC_15( VAR_20, VAR_16 );
   VAR_16[ 3 ] = FUNC_0( VAR_18, VAR_16 );


   if ( VAR_15 > 0.125f ) {

    VAR_14 = FUNC_3( VAR_23->longestCurve, VAR_6 );
    VAR_25 = FUNC_9( VAR_23->mesh, VAR_14 );


    FUNC_6( *VAR_25 );
    VAR_24 = FUNC_8( VAR_25 );
    FUNC_2( VAR_25 );


    for ( VAR_9 = 0; VAR_9 < ( VAR_24->width * VAR_24->height ); VAR_9++ )
     FUNC_12( VAR_24->verts[ VAR_9 ].xyz, VAR_21->origin, VAR_24->verts[ VAR_9 ].xyz );


    for ( VAR_11 = 0; VAR_11 < ( VAR_24->height - 1 ); VAR_11++ )
    {
     for ( VAR_10 = 0; VAR_10 < ( VAR_24->width - 1 ); VAR_10++ )
     {

      VAR_12[ 0 ] = VAR_10 + ( VAR_11 * VAR_24->width );
      VAR_12[ 1 ] = VAR_10 + ( ( VAR_11 + 1 ) * VAR_24->width );
      VAR_12[ 2 ] = VAR_10 + 1 + ( ( VAR_11 + 1 ) * VAR_24->width );
      VAR_12[ 3 ] = VAR_10 + 1 + ( VAR_11 * VAR_24->width );
      VAR_12[ 4 ] = VAR_10 + ( VAR_11 * VAR_24->width );


      VAR_13 = ( VAR_10 + VAR_11 ) & 1;


      VAR_26[ 0 ] = &VAR_24->verts[ VAR_12[ VAR_13 + 0 ] ];
      VAR_26[ 1 ] = &VAR_24->verts[ VAR_12[ VAR_13 + 1 ] ];
      VAR_26[ 2 ] = &VAR_24->verts[ VAR_12[ VAR_13 + 2 ] ];
      VAR_26[ 3 ] = &VAR_24->verts[ VAR_12[ VAR_13 + 3 ] ];


      VAR_17[ 0 ] = 0.0f;
      if ( 0 && FUNC_5( VAR_17, VAR_26[ 0 ]->xyz, VAR_26[ 1 ]->xyz, VAR_26[ 2 ]->xyz ) &&
        FUNC_18( FUNC_0( VAR_26[ 1 ]->xyz, VAR_17 ) - VAR_17[ 3 ] ) <= VAR_0 ) {

       FUNC_4( VAR_23->shaderInfo, VAR_16, VAR_15, 4, VAR_26 );
      }
      else
      {

       FUNC_4( VAR_23->shaderInfo, VAR_16, VAR_15, 3, VAR_26 );


       VAR_26[ 1 ] = VAR_26[ 2 ];
       VAR_26[ 2 ] = VAR_26[ 3 ];
       FUNC_4( VAR_23->shaderInfo, VAR_16, VAR_15, 3, VAR_26 );
      }
     }
    }


    FUNC_19( VAR_24 );
   }


   VAR_21->patches = VAR_23->next;






  }
 }


 FUNC_10( VAR_1, "%9d decal projectors\n", VAR_5 );
}
