
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(char *VAR_2, vec3_t VAR_3) {
 int VAR_4, VAR_5 = 0;
 int VAR_6, VAR_7;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_6 = 0;
  while(VAR_2[VAR_5] == ' ') VAR_5++;
  if (VAR_2[VAR_5] == '-') {
   VAR_5++;
   VAR_7 = -1;
  }
  else {
   VAR_7 = 1;
  }
  while (VAR_2[VAR_5]) {
   if (VAR_2[VAR_5] >= '0' && VAR_2[VAR_5] <= '9') {
    VAR_6 = VAR_6 * 10 + VAR_2[VAR_5] - '0';
    VAR_5++;
   }
   else {
    VAR_5++;
    break;
   }
  }
  FUNC_0(VAR_0, "%d\n", VAR_7 * VAR_6);
  VAR_3[VAR_4] = (float) VAR_7 * VAR_6;
 }
 return VAR_1;
}
