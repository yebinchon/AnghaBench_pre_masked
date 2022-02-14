
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(char *VAR_1) {
 int VAR_2, VAR_3;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_1[VAR_3] != '\0'; VAR_3++) {
  if (VAR_1[VAR_3] >= 'A' && VAR_1[VAR_3] <= 'Z')
   VAR_2 += (VAR_1[VAR_3] + ('a' - 'A')) * (119 + VAR_3);
  else
   VAR_2 += VAR_1[VAR_3] * (119 + VAR_3);
 }
 VAR_2 = (VAR_2 ^ (VAR_2 >> 10) ^ (VAR_2 >> 20)) & (VAR_0-1);
 return VAR_2;
}
