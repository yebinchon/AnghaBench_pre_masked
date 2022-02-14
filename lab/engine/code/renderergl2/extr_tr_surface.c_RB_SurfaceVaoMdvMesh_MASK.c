
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ offset; int stride; int normalized; int type; int count; } ;
typedef TYPE_3__ vaoAttrib_t ;
struct TYPE_16__ {TYPE_10__* vao; TYPE_2__* mdvModel; int numVerts; int numIndexes; int mdvSurface; } ;
typedef TYPE_4__ srfVaoMdvMesh_t ;
struct TYPE_17__ {int oldframe; int frame; float backlerp; } ;
typedef TYPE_5__ refEntity_t ;
struct TYPE_21__ {TYPE_1__* currentEntity; } ;
struct TYPE_20__ {scalar_t__ vertexArrayObject; } ;
struct TYPE_19__ {float vertexAttribsInterpolation; void* vertexAnimation; } ;
struct TYPE_18__ {int numVertexes; int numIndexes; void* useInternalVao; int cubemapIndex; int fogNum; int shader; } ;
struct TYPE_14__ {int numFrames; } ;
struct TYPE_13__ {TYPE_5__ e; } ;
struct TYPE_12__ {int frameSize; TYPE_3__* attribs; int vertexesVBO; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_10__*) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_9__ VAR_8 ;
 TYPE_8__ VAR_9 ;
 TYPE_7__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int ,int ,int ,int ,int ) ;
 void* VAR_12 ;
 TYPE_6__ VAR_13 ;

void FUNC_9(srfVaoMdvMesh_t * VAR_14)
{


 refEntity_t *VAR_15;

 FUNC_1("--- RB_SurfaceVaoMdvMesh ---\n");

 if (FUNC_6(VAR_13.shader))
 {
  FUNC_4(VAR_14->mdvSurface);
  return;
 }

 if(!VAR_14->vao)
  return;


 FUNC_3();
 FUNC_2(VAR_13.shader, VAR_13.fogNum, VAR_13.cubemapIndex);

 FUNC_5(VAR_14->vao);

 VAR_13.useInternalVao = VAR_11;

 VAR_13.numIndexes = VAR_14->numIndexes;
 VAR_13.numVertexes = VAR_14->numVerts;




 VAR_15 = &VAR_8.currentEntity->e;

 VAR_10.vertexAttribsInterpolation = (VAR_15->oldframe == VAR_15->frame) ? 0.0f : VAR_15->backlerp;

 if (VAR_14->mdvModel->numFrames > 1)
 {
  int VAR_16, VAR_17;
  vaoAttrib_t *VAR_18;

  VAR_10.vertexAnimation = VAR_12;

  if (VAR_9.vertexArrayObject)
  {
   FUNC_7(VAR_7, VAR_14->vao->vertexesVBO);
  }

  VAR_16 = VAR_15->frame * VAR_14->vao->frameSize;

  VAR_17 = VAR_2;
  VAR_18 = &VAR_14->vao->attribs[VAR_17];
  FUNC_8(VAR_17, VAR_18->count, VAR_18->type, VAR_18->normalized, VAR_18->stride, FUNC_0(VAR_18->offset + VAR_16));

  VAR_17 = VAR_0;
  VAR_18 = &VAR_14->vao->attribs[VAR_17];
  FUNC_8(VAR_17, VAR_18->count, VAR_18->type, VAR_18->normalized, VAR_18->stride, FUNC_0(VAR_18->offset + VAR_16));

  VAR_17 = VAR_4;
  VAR_18 = &VAR_14->vao->attribs[VAR_17];
  FUNC_8(VAR_17, VAR_18->count, VAR_18->type, VAR_18->normalized, VAR_18->stride, FUNC_0(VAR_18->offset + VAR_16));

  VAR_16 = VAR_15->oldframe * VAR_14->vao->frameSize;

  VAR_17 = VAR_3;
  VAR_18 = &VAR_14->vao->attribs[VAR_17];
  FUNC_8(VAR_17, VAR_18->count, VAR_18->type, VAR_18->normalized, VAR_18->stride, FUNC_0(VAR_18->offset + VAR_16));

  VAR_17 = VAR_1;
  VAR_18 = &VAR_14->vao->attribs[VAR_17];
  FUNC_8(VAR_17, VAR_18->count, VAR_18->type, VAR_18->normalized, VAR_18->stride, FUNC_0(VAR_18->offset + VAR_16));

  VAR_17 = VAR_5;
  VAR_18 = &VAR_14->vao->attribs[VAR_17];
  FUNC_8(VAR_17, VAR_18->count, VAR_18->type, VAR_18->normalized, VAR_18->stride, FUNC_0(VAR_18->offset + VAR_16));


  if (!VAR_9.vertexArrayObject)
  {
   VAR_17 = VAR_6;
   VAR_18 = &VAR_14->vao->attribs[VAR_17];
   FUNC_8(VAR_17, VAR_18->count, VAR_18->type, VAR_18->normalized, VAR_18->stride, FUNC_0(VAR_18->offset));
  }
 }

 FUNC_3();


 VAR_10.vertexAnimation = VAR_11;
}
