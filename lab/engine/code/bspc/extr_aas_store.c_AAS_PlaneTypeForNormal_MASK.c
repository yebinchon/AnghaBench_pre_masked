
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vec_t ;
typedef double* vec3_t ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (double) ;

int FUNC_1(vec3_t VAR_7)
{
 vec_t VAR_8, VAR_9, VAR_10;


 if ( (VAR_7[0] >= 1.0 -VAR_0) ||
   (VAR_7[0] <= -1.0 + VAR_0)) return VAR_4;
 if ( (VAR_7[1] >= 1.0 -VAR_0) ||
   (VAR_7[1] <= -1.0 + VAR_0)) return VAR_5;
 if ( (VAR_7[2] >= 1.0 -VAR_0) ||
   (VAR_7[2] <= -1.0 + VAR_0)) return VAR_6;

 VAR_8 = FUNC_0(VAR_7[0]);
 VAR_9 = FUNC_0(VAR_7[1]);
 VAR_10 = FUNC_0(VAR_7[2]);

 if (VAR_8 >= VAR_9 && VAR_8 >= VAR_10) return VAR_1;
 if (VAR_9 >= VAR_8 && VAR_9 >= VAR_10) return VAR_2;
 return VAR_3;
}
