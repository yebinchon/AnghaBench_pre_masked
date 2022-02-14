
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* picoVec3_t ;
typedef size_t* picoIndexIter_t ;


 int FUNC_0 (float*,float*,float*) ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*,float*,float*) ;

void FUNC_3(picoIndexIter_t VAR_0, picoIndexIter_t VAR_1, picoVec3_t* VAR_2, picoVec3_t* VAR_3) {
 for (; VAR_0 != VAR_1; VAR_0 += 3)
 {
  {
   int VAR_4 = 0;
   for (; VAR_4 < 3; ++VAR_4)
   {
    float* VAR_5 = VAR_3[*(VAR_0 + VAR_4)];

    picoVec3_t VAR_6;
    {
     float* VAR_7 = VAR_2[*(VAR_0 + ((VAR_4 + 0) % 3))];
     float* VAR_8 = VAR_2[*(VAR_0 + ((VAR_4 + 1) % 3))];
     float* VAR_9 = VAR_2[*(VAR_0 + ((VAR_4 + 2) % 3))];
     picoVec3_t VAR_10, VAR_11;
     FUNC_2(VAR_8, VAR_7, VAR_10);
     FUNC_2(VAR_9, VAR_7, VAR_11);
     FUNC_1(VAR_11, VAR_10, VAR_6);
    }

    FUNC_0(VAR_6, VAR_5, VAR_5);
   }
  }
 }
}
