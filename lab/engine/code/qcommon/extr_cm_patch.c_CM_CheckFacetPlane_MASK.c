
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;


 float FUNC_0 (int ,float*) ;
 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(float *VAR_3, vec3_t VAR_4, vec3_t VAR_5, float *VAR_6, float *VAR_7, int *VAR_8) {
 float VAR_9, VAR_10, VAR_11;

 *VAR_8 = VAR_1;

 VAR_9 = FUNC_0( VAR_4, VAR_3 ) - VAR_3[3];
 VAR_10 = FUNC_0( VAR_5, VAR_3 ) - VAR_3[3];


 if (VAR_9 > 0 && ( VAR_10 >= VAR_0 || VAR_10 >= VAR_9 ) ) {
  return VAR_1;
 }


 if (VAR_9 <= 0 && VAR_10 <= 0 ) {
  return VAR_2;
 }


 if (VAR_9 > VAR_10) {
  VAR_11 = (VAR_9-VAR_0) / (VAR_9-VAR_10);
  if ( VAR_11 < 0 ) {
   VAR_11 = 0;
  }

  if (VAR_11 > *VAR_6) {
   *VAR_6 = VAR_11;
   *VAR_8 = VAR_2;
  }
 } else {
  VAR_11 = (VAR_9+VAR_0) / (VAR_9-VAR_10);
  if ( VAR_11 > 1 ) {
   VAR_11 = 1;
  }
  if (VAR_11 < *VAR_7) {
   *VAR_7 = VAR_11;
  }
 }
 return VAR_2;
}
