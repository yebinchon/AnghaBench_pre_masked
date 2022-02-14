
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_3__ {scalar_t__ dist; scalar_t__* normal; } ;
typedef TYPE_1__ th_plane_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

qboolean FUNC_1(th_plane_t *VAR_2, vec3_t VAR_3, vec_t VAR_4)
{
 if (
    FUNC_0(VAR_2->normal[0] - VAR_3[0]) < VAR_1
 && FUNC_0(VAR_2->normal[1] - VAR_3[1]) < VAR_1
 && FUNC_0(VAR_2->normal[2] - VAR_3[2]) < VAR_1
 && FUNC_0(VAR_2->dist - VAR_4) < VAR_0 )
  return 1;
 return 0;
}
