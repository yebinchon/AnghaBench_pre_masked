
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;
typedef float byte ;


 int FUNC_0 (float) ;
 float VAR_0 ;
 int FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(byte VAR_1[2], vec3_t VAR_2) {
  float VAR_3 = VAR_1[0] * 2.0f * VAR_0 / 255.0f;
  float VAR_4 = VAR_1[1] * 2.0f * VAR_0 / 255.0f;
  VAR_2[0] = FUNC_0(VAR_4) * FUNC_1(VAR_3);
  VAR_2[1] = FUNC_1(VAR_4) * FUNC_1(VAR_3);
  VAR_2[2] = FUNC_0(VAR_3);
}
