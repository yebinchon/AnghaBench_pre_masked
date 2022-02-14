
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_3__ {scalar_t__* origin; scalar_t__* extents; } ;
typedef TYPE_1__ aabb_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(aabb_t *VAR_0, const vec3_t VAR_1) {
  vec_t VAR_2, VAR_3, VAR_4;
  for (int VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
    VAR_4 = VAR_1[VAR_5] - VAR_0->origin[VAR_5];
    if (FUNC_0(VAR_4) > VAR_0->extents[VAR_5]) {
      if (VAR_0->extents[VAR_5] < 0) {
        VAR_2 = VAR_3 = VAR_1[VAR_5];
      } else if (VAR_4 > 0) {
        VAR_2 = VAR_0->origin[VAR_5] - VAR_0->extents[VAR_5];
        VAR_3 = VAR_0->origin[VAR_5] + VAR_4;
      } else {
        VAR_3 = VAR_0->origin[VAR_5] + VAR_0->extents[VAR_5];
        VAR_2 = VAR_0->origin[VAR_5] + VAR_4;
      }
      VAR_0->origin[VAR_5] = (VAR_2 + VAR_3) * 0.5f;
      VAR_0->extents[VAR_5] = VAR_3 - VAR_0->origin[VAR_5];
    }
  }
}
