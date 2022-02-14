
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* normal; void** xyz; } ;
typedef TYPE_1__ md3XyzNormal_t ;
struct TYPE_10__ {void** indexes; } ;
typedef TYPE_2__ md3Triangle_t ;
struct TYPE_11__ {void* ofsEnd; void* ofsXyzNormals; void* ofsSt; void* ofsTriangles; void* ofsShaders; void* numTriangles; void* numVerts; void* numShaders; void* numFrames; scalar_t__ flags; int name; void* ident; } ;
typedef TYPE_3__ md3Surface_t ;
struct TYPE_12__ {int * st; } ;
typedef TYPE_4__ md3St_t ;
struct TYPE_13__ {scalar_t__ shaderIndex; int name; } ;
typedef TYPE_5__ md3Shader_t ;
typedef int byte ;
typedef int aabb_t ;
struct TYPE_14__ {size_t (* get_surface_shader_count ) (void*,size_t) ;size_t (* get_surface_vertex_count ) (void*,size_t) ;size_t (* get_surface_face_count ) (void*,size_t) ;int (* get_surface_vertex_normal ) (void*,size_t,size_t,float*) ;int (* get_surface_vertex_location ) (void*,size_t,size_t,float*) ;int (* get_surface_vertex_st ) (void*,size_t,size_t,float*) ;int (* get_surface_face ) (void*,size_t,size_t,int*) ;int (* get_surface_shader ) (void*,size_t,size_t,int ,int ) ;int (* get_surface_name ) (void*,size_t,int ,int ) ;} ;
typedef TYPE_6__ DeepmindModelGetters ;


 int FUNC_0 (int *,float*) ;
 int FUNC_1 (float) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (short) ;
 int VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int FUNC_4 (float*,int *) ;
 int FUNC_5 (void*,size_t,int ,int ) ;
 size_t FUNC_6 (void*,size_t) ;
 size_t FUNC_7 (void*,size_t) ;
 size_t FUNC_8 (void*,size_t) ;
 int FUNC_9 (void*,size_t,size_t,int ,int ) ;
 int FUNC_10 (void*,size_t,size_t,int*) ;
 int FUNC_11 (void*,size_t,size_t,float*) ;
 int FUNC_12 (void*,size_t,size_t,float*) ;
 int FUNC_13 (void*,size_t,size_t,float*) ;

__attribute__((used)) static void FUNC_14(
    size_t VAR_3,
    const DeepmindModelGetters* VAR_4,
    void* VAR_5,
    md3Surface_t* VAR_6,
    aabb_t* VAR_7) {

  VAR_6->ident = FUNC_2(VAR_1);
  VAR_4->get_surface_name(VAR_5, VAR_3, VAR_0, VAR_6->name);
  VAR_6->flags = 0;
  VAR_6->numFrames = FUNC_2(1);
  size_t VAR_8 = VAR_4->get_surface_shader_count(VAR_5, VAR_3);
  VAR_6->numShaders = FUNC_2(VAR_8);
  size_t VAR_9 = VAR_4->get_surface_vertex_count(VAR_5, VAR_3);
  VAR_6->numVerts = FUNC_2(VAR_9);
  size_t VAR_10 = VAR_4->get_surface_face_count(VAR_5, VAR_3);
  VAR_6->numTriangles = FUNC_2(VAR_10);
  size_t VAR_11 = sizeof(md3Surface_t);
  VAR_6->ofsShaders = FUNC_2(VAR_11);
  size_t VAR_12 = VAR_11 + VAR_8 * sizeof(md3Shader_t);
  VAR_6->ofsTriangles = FUNC_2(VAR_12);
  size_t VAR_13 = VAR_12 + VAR_10 * sizeof(md3Triangle_t);
  VAR_6->ofsSt = FUNC_2(VAR_13);
  size_t VAR_14 = VAR_13 + VAR_9 * sizeof(md3St_t);
  VAR_6->ofsXyzNormals = FUNC_2(VAR_14);
  size_t VAR_15 = VAR_14 + VAR_9 * sizeof(md3XyzNormal_t);
  VAR_6->ofsEnd = FUNC_2(VAR_15);


  md3Shader_t* VAR_16 = (md3Shader_t*)((byte*)VAR_6 + VAR_11);
  for (size_t VAR_17 = 0; VAR_17 < VAR_8; ++VAR_17) {
    VAR_4->get_surface_shader(VAR_5, VAR_3, VAR_17, VAR_0,
                              VAR_16[VAR_17].name);
    VAR_16[VAR_17].shaderIndex = 0;
  }


  md3Triangle_t* VAR_18 =
      (md3Triangle_t*)((byte*)VAR_6 + VAR_12);
  for (size_t VAR_19 = 0; VAR_19 < VAR_10; ++VAR_19) {
    int VAR_20[3];
    VAR_4->get_surface_face(VAR_5, VAR_3, VAR_19, VAR_20);
    for (size_t VAR_21 = 0; VAR_21 < 3; ++VAR_21) {
      VAR_18[VAR_19].indexes[VAR_21] = FUNC_2(VAR_20[VAR_21]);
    }
  }


  md3St_t* VAR_22 = (md3St_t*)((byte*)VAR_6 + VAR_13);
  for (size_t VAR_23 = 0; VAR_23 < VAR_9; ++VAR_23) {
    float VAR_24[2];
    VAR_4->get_surface_vertex_st(VAR_5, VAR_3, VAR_23, VAR_24);
    for (size_t VAR_25 = 0; VAR_25 < 2; ++VAR_25) {
      VAR_22[VAR_23].st[VAR_25] = FUNC_1(VAR_24[VAR_25]);
    }
  }


  md3XyzNormal_t* VAR_26 =
      (md3XyzNormal_t*)((byte*)VAR_6 + VAR_14);
  for (size_t VAR_27 = 0; VAR_27 < VAR_9; ++VAR_27) {
    float VAR_28[3];
    float VAR_29[3];
    short VAR_30;


    VAR_4->get_surface_vertex_location(VAR_5, VAR_3, VAR_27, VAR_28);
    for (size_t VAR_31 = 0; VAR_31 < 3; ++VAR_31) {
      VAR_26[VAR_27].xyz[VAR_31] = FUNC_3(VAR_28[VAR_31] / VAR_2);
    }


    VAR_4->get_surface_vertex_normal(VAR_5, VAR_3, VAR_27, VAR_29);
    FUNC_4(VAR_29, (byte *)&VAR_30);
    VAR_26[VAR_27].normal = FUNC_3(VAR_30);


    FUNC_0(VAR_7, VAR_28);
  }
}
