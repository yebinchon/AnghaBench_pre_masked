
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int md3XyzNormal_t ;
typedef int md3Triangle_t ;
typedef int md3Surface_t ;
typedef int md3St_t ;
typedef int md3Shader_t ;
struct TYPE_3__ {int (* get_surface_shader_count ) (void*,size_t) ;int (* get_surface_face_count ) (void*,size_t) ;int (* get_surface_vertex_count ) (void*,size_t) ;} ;
typedef TYPE_1__ DeepmindModelGetters ;


 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*,size_t) ;

__attribute__((used)) static size_t FUNC_3(
    size_t VAR_0,
    const DeepmindModelGetters* VAR_1,
    void* VAR_2) {
  size_t VAR_3;
  VAR_3 = sizeof(md3Surface_t);
  VAR_3 += VAR_1->get_surface_shader_count(VAR_2, VAR_0) *
      sizeof(md3Shader_t);
  VAR_3 += VAR_1->get_surface_face_count(VAR_2, VAR_0) *
      sizeof(md3Triangle_t);
  VAR_3 += VAR_1->get_surface_vertex_count(VAR_2, VAR_0) *
      (sizeof(md3St_t) + sizeof(md3XyzNormal_t));
  return VAR_3;
}
