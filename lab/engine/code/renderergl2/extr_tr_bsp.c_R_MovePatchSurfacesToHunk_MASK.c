
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int srfVert_t ;
struct TYPE_6__ {scalar_t__ surfaceType; int width; int height; int numIndexes; int numVerts; void* verts; void* indexes; void* heightLodError; void* widthLodError; } ;
typedef TYPE_2__ srfBspSurface_t ;
typedef int glIndex_t ;
struct TYPE_8__ {int (* Free ) (void*) ;void* (* Hunk_Alloc ) (int,int ) ;} ;
struct TYPE_7__ {int numsurfaces; TYPE_1__* surfaces; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int FUNC_0 (void*,void*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (void*) ;

void FUNC_9(void) {
 int VAR_4;
 srfBspSurface_t *VAR_5;

 for ( VAR_4 = 0; VAR_4 < VAR_3.numsurfaces; VAR_4++ ) {
  void *VAR_6;

  VAR_5 = (srfBspSurface_t *) VAR_3.surfaces[VAR_4].data;

  if ( VAR_5->surfaceType != VAR_0 )
   continue;


  VAR_6 = VAR_5->widthLodError;
  VAR_5->widthLodError = VAR_2.Hunk_Alloc( VAR_5->width * 4, VAR_1 );
  FUNC_0(VAR_5->widthLodError, VAR_6, VAR_5->width * 4);
  VAR_2.Free(VAR_6);

  VAR_6 = VAR_5->heightLodError;
  VAR_5->heightLodError = VAR_2.Hunk_Alloc(VAR_5->height * 4, VAR_1);
  FUNC_0(VAR_5->heightLodError, VAR_6, VAR_5->height * 4);
  VAR_2.Free(VAR_6);

  VAR_6 = VAR_5->indexes;
  VAR_5->indexes = VAR_2.Hunk_Alloc(VAR_5->numIndexes * sizeof(glIndex_t), VAR_1);
  FUNC_0(VAR_5->indexes, VAR_6, VAR_5->numIndexes * sizeof(glIndex_t));
  VAR_2.Free(VAR_6);

  VAR_6 = VAR_5->verts;
  VAR_5->verts = VAR_2.Hunk_Alloc(VAR_5->numVerts * sizeof(srfVert_t), VAR_1);
  FUNC_0(VAR_5->verts, VAR_6, VAR_5->numVerts * sizeof(srfVert_t));
  VAR_2.Free(VAR_6);
 }
}
