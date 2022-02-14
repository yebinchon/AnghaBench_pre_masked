
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

void FUNC_2( const vec3_t VAR_4, vec3_t VAR_5, vec3_t VAR_6, vec3_t VAR_7) {
 float VAR_8;
 static float VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


 VAR_8 = VAR_4[VAR_3] * (VAR_0*2 / 360);
 VAR_11 = FUNC_1(VAR_8);
 VAR_14 = FUNC_0(VAR_8);
 VAR_8 = VAR_4[VAR_1] * (VAR_0*2 / 360);
 VAR_10 = FUNC_1(VAR_8);
 VAR_13 = FUNC_0(VAR_8);
 VAR_8 = VAR_4[VAR_2] * (VAR_0*2 / 360);
 VAR_9 = FUNC_1(VAR_8);
 VAR_12 = FUNC_0(VAR_8);

 if (VAR_5)
 {
  VAR_5[0] = VAR_13*VAR_14;
  VAR_5[1] = VAR_13*VAR_11;
  VAR_5[2] = -VAR_10;
 }
 if (VAR_6)
 {
  VAR_6[0] = (-1*VAR_9*VAR_10*VAR_14+-1*VAR_12*-VAR_11);
  VAR_6[1] = (-1*VAR_9*VAR_10*VAR_11+-1*VAR_12*VAR_14);
  VAR_6[2] = -1*VAR_9*VAR_13;
 }
 if (VAR_7)
 {
  VAR_7[0] = (VAR_12*VAR_10*VAR_14+-VAR_9*-VAR_11);
  VAR_7[1] = (VAR_12*VAR_10*VAR_11+-VAR_9*VAR_14);
  VAR_7[2] = VAR_12*VAR_13;
 }
}
