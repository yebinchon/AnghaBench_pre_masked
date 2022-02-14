
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int startsolid; } ;
typedef TYPE_2__ trace_t ;
struct TYPE_7__ {float* currentOrigin; float* currentAngles; } ;
struct TYPE_9__ {TYPE_1__ r; } ;
typedef TYPE_3__ sharedEntity_t ;
typedef int qboolean ;
typedef int clipHandle_t ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ,int ,int,float const*,float const*,int) ;
 int FUNC_1 (TYPE_3__ const*) ;
 int VAR_0 ;

qboolean FUNC_2( vec3_t VAR_1, vec3_t VAR_2, const sharedEntity_t *VAR_3, int VAR_4 ) {
 const float *VAR_5, *VAR_6;
 clipHandle_t VAR_7;
 trace_t VAR_8;


 VAR_5 = VAR_3->r.currentOrigin;
 VAR_6 = VAR_3->r.currentAngles;

 VAR_7 = FUNC_1( VAR_3 );
 FUNC_0 ( &VAR_8, VAR_0, VAR_0, VAR_1, VAR_2,
  VAR_7, -1, VAR_5, VAR_6, VAR_4 );

 return VAR_8.startsolid;
}
