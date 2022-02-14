
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* jointParents; float* poseMats; int num_poses; } ;
typedef TYPE_1__ iqmData_t ;


 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (float*,float*,float,float*) ;
 int FUNC_2 (float*,float*,float*) ;

__attribute__((used)) static void FUNC_3( iqmData_t *VAR_0, int VAR_1, int VAR_2,
         float VAR_3, float *VAR_4 ) {
 float *VAR_5, *VAR_6;
 int *VAR_7 = VAR_0->jointParents;
 int VAR_8;

 if ( VAR_2 == VAR_1 ) {
  VAR_5 = VAR_0->poseMats + 12 * VAR_0->num_poses * VAR_1;
  for( VAR_8 = 0; VAR_8 < VAR_0->num_poses; VAR_8++, VAR_7++ ) {
   if( *VAR_7 >= 0 ) {
    FUNC_2( VAR_4 + 12 * *VAR_7,
        VAR_5 + 12*VAR_8, VAR_4 + 12*VAR_8 );
   } else {
    FUNC_0( VAR_4 + 12*VAR_8, VAR_5 + 12*VAR_8, 12 * sizeof(float) );
   }
  }
 } else {
  VAR_5 = VAR_0->poseMats + 12 * VAR_0->num_poses * VAR_1;
  VAR_6 = VAR_0->poseMats + 12 * VAR_0->num_poses * VAR_2;

  for( VAR_8 = 0; VAR_8 < VAR_0->num_poses; VAR_8++, VAR_7++ ) {
   if( *VAR_7 >= 0 ) {
    float VAR_9[12];
    FUNC_1( VAR_5 + 12*VAR_8, VAR_6 + 12*VAR_8,
         VAR_3, VAR_9 );
    FUNC_2( VAR_4 + 12 * *VAR_7,
        VAR_9, VAR_4 + 12*VAR_8 );

   } else {
    FUNC_1( VAR_5 + 12*VAR_8, VAR_6 + 12*VAR_8,
         VAR_3, VAR_4 + 12*VAR_8 );
   }
  }
 }
}
