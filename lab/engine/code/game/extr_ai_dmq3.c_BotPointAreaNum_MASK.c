
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int*,int*,int *,int) ;

int FUNC_3(vec3_t VAR_0) {
 int VAR_1, VAR_2, VAR_3[10];
 vec3_t VAR_4;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) return VAR_1;
 FUNC_0(VAR_0, VAR_4);
 VAR_4[2] += 10;
 VAR_2 = FUNC_2(VAR_0, VAR_4, VAR_3, ((void*)0), 10);
 if (VAR_2 > 0) return VAR_3[0];
 return 0;
}
