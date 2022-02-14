
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int triangle_t ;
struct TYPE_16__ {int numtriangles; TYPE_4__* triangles; int materialname; int name; } ;
typedef TYPE_6__ polyset_t ;
struct TYPE_17__ {int numFaces; size_t** faces; size_t** tfaces; TYPE_5__* tvertexes; TYPE_3__* vertexes; } ;
typedef TYPE_7__ aseMesh_t ;
struct TYPE_12__ {int numFrames; TYPE_7__* frames; } ;
struct TYPE_18__ {size_t materialRef; TYPE_2__ anim; int name; } ;
typedef TYPE_8__ aseGeomObject_t ;
struct TYPE_19__ {TYPE_1__* materials; TYPE_8__* objects; } ;
struct TYPE_15__ {int t; int s; } ;
struct TYPE_14__ {int ** texcoords; int ** verts; } ;
struct TYPE_13__ {int z; int y; int x; } ;
struct TYPE_11__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_9__ VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;

polyset_t *FUNC_3( int VAR_2, int *VAR_3, int VAR_4, int VAR_5, int VAR_6 ){
 aseGeomObject_t *VAR_7 = &VAR_1.objects[VAR_2];
 polyset_t *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 if ( !VAR_7->anim.numFrames ) {
  return 0;
 }

 if ( VAR_7->anim.numFrames > VAR_6 && VAR_6 != -1 ) {
  VAR_9 = VAR_6;
 }
 else
 {
  VAR_9 = VAR_7->anim.numFrames;
  if ( VAR_6 != -1 ) {
   FUNC_0( VAR_0, "WARNING: ASE_GetSurfaceAnimation maxFrames > numFramesInAnimation\n" );
  }
 }

 if ( VAR_5 != -1 ) {
  VAR_10 = VAR_9 - ( VAR_5 - VAR_4 + 1 );
 }
 else{
  VAR_10 = VAR_9;
 }

 *VAR_3 = VAR_10;

 VAR_8 = FUNC_1( sizeof( polyset_t ) * VAR_10, 1 );

 for ( VAR_12 = 0, VAR_11 = 0; VAR_11 < VAR_9; VAR_11++ )
 {
  int VAR_13;
  aseMesh_t *VAR_14 = &VAR_7->anim.frames[VAR_11];

  if ( VAR_4 != -1 ) {
   if ( VAR_11 >= VAR_4 && VAR_11 <= VAR_5 ) {
    continue;
   }
  }

  FUNC_2( VAR_8[VAR_12].name, VAR_7->name );
  FUNC_2( VAR_8[VAR_12].materialname, VAR_1.materials[VAR_7->materialRef].name );

  VAR_8[VAR_12].triangles = FUNC_1( sizeof( triangle_t ) * VAR_7->anim.frames[VAR_11].numFaces, 1 );
  VAR_8[VAR_12].numtriangles = VAR_7->anim.frames[VAR_11].numFaces;

  for ( VAR_13 = 0; VAR_13 < VAR_7->anim.frames[VAR_11].numFaces; VAR_13++ )
  {
   int VAR_15;

   for ( VAR_15 = 0; VAR_15 < 3; VAR_15++ )
   {
    VAR_8[VAR_12].triangles[VAR_13].verts[VAR_15][0] = VAR_14->vertexes[VAR_14->faces[VAR_13][VAR_15]].x;
    VAR_8[VAR_12].triangles[VAR_13].verts[VAR_15][1] = VAR_14->vertexes[VAR_14->faces[VAR_13][VAR_15]].y;
    VAR_8[VAR_12].triangles[VAR_13].verts[VAR_15][2] = VAR_14->vertexes[VAR_14->faces[VAR_13][VAR_15]].z;

    if ( VAR_14->tvertexes && VAR_14->tfaces ) {
     VAR_8[VAR_12].triangles[VAR_13].texcoords[VAR_15][0] = VAR_14->tvertexes[VAR_14->tfaces[VAR_13][VAR_15]].s;
     VAR_8[VAR_12].triangles[VAR_13].texcoords[VAR_15][1] = VAR_14->tvertexes[VAR_14->tfaces[VAR_13][VAR_15]].t;
    }

   }
  }

  VAR_12++;
 }

 return VAR_8;
}
