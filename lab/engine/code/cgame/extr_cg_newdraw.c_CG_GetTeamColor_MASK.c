
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_6__ {TYPE_2__* snap; } ;
struct TYPE_4__ {scalar_t__* persistant; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_0(vec4_t *VAR_4) {
  if (VAR_3.snap->ps.persistant[VAR_0] == VAR_2) {
    (*VAR_4)[0] = 1.0f;
    (*VAR_4)[3] = 0.25f;
    (*VAR_4)[1] = (*VAR_4)[2] = 0.0f;
  } else if (VAR_3.snap->ps.persistant[VAR_0] == VAR_1) {
    (*VAR_4)[0] = (*VAR_4)[1] = 0.0f;
    (*VAR_4)[2] = 1.0f;
    (*VAR_4)[3] = 0.25f;
  } else {
    (*VAR_4)[0] = (*VAR_4)[2] = 0.0f;
    (*VAR_4)[1] = 0.17f;
    (*VAR_4)[3] = 0.25f;
 }
}
