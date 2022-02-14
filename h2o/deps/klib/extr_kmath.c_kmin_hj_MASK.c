
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double (* kmin_f ) (int,double*,void*) ;


 double FUNC_0 (double (*) (int,double*,void*),int,double*,void*,double,double*,int*) ;
 scalar_t__ FUNC_1 (int,int) ;
 double FUNC_2 (double) ;
 int FUNC_3 (double*) ;
 int FUNC_4 (double*,double*,int) ;

double FUNC_5(kmin_f VAR_0, int VAR_1, double *VAR_2, void *VAR_3, double VAR_4, double VAR_5, int VAR_6)
{
 double VAR_7, VAR_8, *VAR_9, *VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;
 VAR_9 = (double*)FUNC_1(VAR_1, sizeof(double));
 VAR_10 = (double*)FUNC_1(VAR_1, sizeof(double));
 for (VAR_12 = 0; VAR_12 != VAR_1; ++VAR_12) {
  VAR_10[VAR_12] = FUNC_2(VAR_2[VAR_12]) * VAR_4;
  if (VAR_10[VAR_12] == 0) VAR_10[VAR_12] = VAR_4;
 }
 VAR_11 = VAR_4;
 VAR_8 = VAR_7 = VAR_0(VAR_1, VAR_2, VAR_3); ++VAR_13;
 for (;;) {
  FUNC_4(VAR_9, VAR_2, VAR_1 * sizeof(double));
  VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_9, VAR_3, VAR_7, VAR_10, &VAR_13);
  while (VAR_8 < VAR_7) {
   for (VAR_12 = 0; VAR_12 != VAR_1; ++VAR_12) {
    double VAR_14 = VAR_2[VAR_12];
    VAR_10[VAR_12] = VAR_9[VAR_12] > VAR_2[VAR_12]? FUNC_2(VAR_10[VAR_12]) : 0.0 - FUNC_2(VAR_10[VAR_12]);
    VAR_2[VAR_12] = VAR_9[VAR_12];
    VAR_9[VAR_12] = VAR_9[VAR_12] + VAR_9[VAR_12] - VAR_14;
   }
   VAR_7 = VAR_8;
   if (VAR_13 >= VAR_6) break;
   VAR_8 = VAR_0(VAR_1, VAR_9, VAR_3); ++VAR_13;
   VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_9, VAR_3, VAR_8, VAR_10, &VAR_13);
   if (VAR_8 >= VAR_7) break;
   for (VAR_12 = 0; VAR_12 != VAR_1; ++VAR_12)
    if (FUNC_2(VAR_9[VAR_12] - VAR_2[VAR_12]) > .5 * FUNC_2(VAR_10[VAR_12])) break;
   if (VAR_12 == VAR_1) break;
  }
  if (VAR_11 >= VAR_5) {
   if (VAR_13 >= VAR_6) break;
   VAR_11 *= VAR_4;
   for (VAR_12 = 0; VAR_12 != VAR_1; ++VAR_12) VAR_10[VAR_12] *= VAR_4;
  } else break;
 }
 FUNC_3(VAR_9); FUNC_3(VAR_10);
 return VAR_8;
}
