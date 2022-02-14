
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double* vec3_t ;


 int FUNC_0 (int,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (double*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,double*,double*,double*) ;

int FUNC_3(int VAR_3, char *VAR_4, vec3_t VAR_5)
{
 char VAR_6[VAR_0];
 double VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_5);
 if (!FUNC_0(VAR_3, VAR_4, VAR_6, VAR_0)) return VAR_1;

 VAR_7 = VAR_8 = VAR_9 = 0;
 FUNC_2(VAR_6, "%lf %lf %lf", &VAR_7, &VAR_8, &VAR_9);
 VAR_5[0] = VAR_7;
 VAR_5[1] = VAR_8;
 VAR_5[2] = VAR_9;
 return VAR_2;
}
