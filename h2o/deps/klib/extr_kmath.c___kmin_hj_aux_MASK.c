
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double (* kmin_f ) (int,double*,void*) ;



__attribute__((used)) static double FUNC_0(kmin_f VAR_0, int VAR_1, double *VAR_2, void *VAR_3, double VAR_4, double *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8 = *VAR_6;
 double VAR_9;
 for (VAR_7 = 0; VAR_7 != VAR_1; ++VAR_7) {
  VAR_2[VAR_7] += VAR_5[VAR_7];
  VAR_9 = VAR_0(VAR_1, VAR_2, VAR_3); ++VAR_8;
  if (VAR_9 < VAR_4) VAR_4 = VAR_9;
  else {
   VAR_5[VAR_7] = 0.0 - VAR_5[VAR_7];
   VAR_2[VAR_7] += VAR_5[VAR_7] + VAR_5[VAR_7];
   VAR_9 = VAR_0(VAR_1, VAR_2, VAR_3); ++VAR_8;
   if (VAR_9 < VAR_4) VAR_4 = VAR_9;
   else VAR_2[VAR_7] -= VAR_5[VAR_7];
  }
 }
 *VAR_6 = VAR_8;
 return VAR_4;
}
