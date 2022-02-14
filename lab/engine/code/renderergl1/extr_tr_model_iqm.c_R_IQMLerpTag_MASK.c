
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float** axis; float* origin; } ;
typedef TYPE_1__ orientation_t ;
struct TYPE_7__ {char* jointNames; int num_joints; } ;
typedef TYPE_2__ iqmData_t ;


 int FUNC_0 (float**) ;
 int FUNC_1 (TYPE_2__*,int,int,float,float*) ;
 int VAR_0 ;
 int FUNC_2 (float*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5( orientation_t *VAR_3, iqmData_t *VAR_4,
    int VAR_5, int VAR_6,
    float VAR_7, const char *VAR_8 ) {
 float VAR_9[VAR_0 * 12];
 int VAR_10;
 char *VAR_11 = VAR_4->jointNames;


 for( VAR_10 = 0; VAR_10 < VAR_4->num_joints; VAR_10++ ) {
  if( !FUNC_3( VAR_8, VAR_11 ) )
   break;
  VAR_11 += FUNC_4( VAR_11 ) + 1;
 }
 if( VAR_10 >= VAR_4->num_joints ) {
  FUNC_0( VAR_3->axis );
  FUNC_2( VAR_3->origin );
  return VAR_1;
 }

 FUNC_1( VAR_4, VAR_5, VAR_6, VAR_7, VAR_9 );

 VAR_3->axis[0][0] = VAR_9[12 * VAR_10 + 0];
 VAR_3->axis[1][0] = VAR_9[12 * VAR_10 + 1];
 VAR_3->axis[2][0] = VAR_9[12 * VAR_10 + 2];
 VAR_3->origin[0] = VAR_9[12 * VAR_10 + 3];
 VAR_3->axis[0][1] = VAR_9[12 * VAR_10 + 4];
 VAR_3->axis[1][1] = VAR_9[12 * VAR_10 + 5];
 VAR_3->axis[2][1] = VAR_9[12 * VAR_10 + 6];
 VAR_3->origin[1] = VAR_9[12 * VAR_10 + 7];
 VAR_3->axis[0][2] = VAR_9[12 * VAR_10 + 8];
 VAR_3->axis[1][2] = VAR_9[12 * VAR_10 + 9];
 VAR_3->axis[2][2] = VAR_9[12 * VAR_10 + 10];
 VAR_3->origin[2] = VAR_9[12 * VAR_10 + 11];

 return VAR_2;
}
