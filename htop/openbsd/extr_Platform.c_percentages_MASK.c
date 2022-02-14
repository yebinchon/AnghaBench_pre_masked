
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int64_t *VAR_2, int64_t *VAR_3, int64_t *VAR_4, int64_t *VAR_5) {
   int64_t VAR_6, VAR_7, *VAR_8, VAR_9;
   int VAR_10;


   VAR_7 = 0;
   VAR_8 = VAR_5;


   for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
      if ((VAR_6 = *VAR_3 - *VAR_4) < 0) {

         VAR_6 = VAR_0 - *VAR_4 + *VAR_3;
      }
      VAR_7 += (*VAR_8++ = VAR_6);
      *VAR_4++ = *VAR_3++;
   }


   if (VAR_7 == 0)
      VAR_7 = 1;


   VAR_9 = VAR_7 / 2l;
   for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
      *VAR_2++ = ((*VAR_5++ * 1000 + VAR_9) / VAR_7);


   return (VAR_7);
}
