
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int surfaceType_t ;
typedef int srfVert_t ;
struct TYPE_12__ {int numIndexes; int* indexes; int numVerts; int* verts; int surfaceType; } ;
typedef TYPE_2__ srfBspSurface_t ;
struct TYPE_11__ {int * bounds; int type; } ;
struct TYPE_13__ {TYPE_8__* shader; TYPE_1__ cullinfo; int * data; scalar_t__ fogIndex; } ;
typedef TYPE_3__ msurface_t ;
typedef int glIndex_t ;
struct TYPE_14__ {int fogNum; int numVerts; int numIndexes; int firstVert; int firstIndex; int shaderNum; } ;
typedef TYPE_4__ dsurface_t ;
typedef int drawVert_t ;
struct TYPE_18__ {int name; int isSky; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {int* (* Hunk_Alloc ) (int,int ) ;int (* Printf ) (int ,char*,int ,int,int,int) ;int (* Error ) (int ,char*) ;} ;
struct TYPE_15__ {TYPE_8__* defaultShader; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int *,int,float*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int**) ;
 int VAR_4 ;
 TYPE_8__* FUNC_4 (int ,int ) ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_6__ VAR_7 ;
 int* FUNC_5 (int,int ) ;
 int* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,int ,int,int,int) ;
 TYPE_5__ VAR_8 ;

__attribute__((used)) static void FUNC_9( dsurface_t *VAR_9, drawVert_t *VAR_10, float *VAR_11, msurface_t *VAR_12, int *VAR_13 ) {
 srfBspSurface_t *VAR_14;
 glIndex_t *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;


 VAR_12->fogIndex = FUNC_1( VAR_9->fogNum ) + 1;


 VAR_12->shader = FUNC_4( VAR_9->shaderNum, VAR_2 );
 if ( VAR_6->integer && !VAR_12->shader->isSky ) {
  VAR_12->shader = VAR_8.defaultShader;
 }

 VAR_18 = FUNC_1(VAR_9->numVerts);
 VAR_19 = FUNC_1(VAR_9->numIndexes);


 VAR_14 = (void *)VAR_12->data;
 VAR_14->surfaceType = VAR_4;

 VAR_14->numIndexes = VAR_19;
 VAR_14->indexes = VAR_7.Hunk_Alloc(VAR_19 * sizeof(VAR_14->indexes[0]), VAR_5);

 VAR_14->numVerts = VAR_18;
 VAR_14->verts = VAR_7.Hunk_Alloc(VAR_18 * sizeof(VAR_14->verts[0]), VAR_5);

 VAR_12->data = (surfaceType_t *) VAR_14;


 VAR_12->cullinfo.type = VAR_0;
 FUNC_0(VAR_12->cullinfo.bounds[0], VAR_12->cullinfo.bounds[1]);
 VAR_10 += FUNC_1(VAR_9->firstVert);
 for(VAR_16 = 0; VAR_16 < VAR_18; VAR_16++)
  FUNC_2(&VAR_14->verts[VAR_16], &VAR_10[VAR_16], -1, VAR_11 ? VAR_11 + (VAR_9->firstVert + VAR_16) * 3 : ((void*)0), VAR_12->cullinfo.bounds);


 VAR_20 = 0;
 VAR_13 += FUNC_1(VAR_9->firstIndex);
 for(VAR_16 = 0, VAR_15 = VAR_14->indexes; VAR_16 < VAR_19; VAR_16 += 3, VAR_15 += 3)
 {
  for(VAR_17 = 0; VAR_17 < 3; VAR_17++)
  {
   VAR_15[VAR_17] = FUNC_1(VAR_13[VAR_16 + VAR_17]);

   if(VAR_15[VAR_17] >= VAR_18)
   {
    VAR_7.Error(VAR_1, "Bad index in face surface");
   }
  }

  if ((VAR_15[0] == VAR_15[1]) || (VAR_15[1] == VAR_15[2]) || (VAR_15[0] == VAR_15[2]))
  {
   VAR_15 -= 3;
   VAR_20++;
  }
 }

 if (VAR_20)
 {
  VAR_7.Printf(VAR_3, "Trisurf has bad triangles, originally shader %s %d tris %d verts, now %d tris\n", VAR_12->shader->name, VAR_19 / 3, VAR_18, VAR_19 / 3 - VAR_20);
  VAR_14->numIndexes -= VAR_20 * 3;
 }


 {
  srfVert_t *VAR_21[3];

  for(VAR_16 = 0, VAR_15 = VAR_14->indexes; VAR_16 < VAR_19; VAR_16 += 3, VAR_15 += 3)
  {
   VAR_21[0] = &VAR_14->verts[VAR_15[0]];
   VAR_21[1] = &VAR_14->verts[VAR_15[1]];
   VAR_21[2] = &VAR_14->verts[VAR_15[2]];

   FUNC_3(VAR_21);
  }
 }
}
