
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int outmat ;
struct TYPE_4__ {scalar_t__ num_poses; float* jointMats; int num_joints; } ;
typedef TYPE_1__ iqmData_t ;


 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (TYPE_1__*,int,int,float,float*) ;
 int FUNC_2 (float*,float*,float*) ;

__attribute__((used)) static void FUNC_3( iqmData_t *VAR_0, int VAR_1, int VAR_2,
         float VAR_3, float *VAR_4 ) {
 float *VAR_5;
 int VAR_6;

 if ( VAR_0->num_poses == 0 ) {
  FUNC_0( VAR_4, VAR_0->jointMats, VAR_0->num_joints * 12 * sizeof(float) );
  return;
 }

 FUNC_1( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 );

 for( VAR_6 = 0; VAR_6 < VAR_0->num_joints; VAR_6++ ) {
  float VAR_7[12];
  VAR_5 = VAR_4 + 12 * VAR_6;

  FUNC_0(VAR_7, VAR_5, sizeof(VAR_7));

  FUNC_2( VAR_7, VAR_0->jointMats + 12*VAR_6, VAR_5 );
 }
}
