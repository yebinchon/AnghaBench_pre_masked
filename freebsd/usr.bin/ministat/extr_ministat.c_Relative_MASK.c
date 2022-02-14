
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataset {int n; } ;


 double FUNC_0 (struct dataset*) ;
 int VAR_0 ;
 int FUNC_1 (struct dataset*) ;
 double FUNC_2 (double) ;
 int FUNC_3 (char*,double,...) ;
 double FUNC_4 (double) ;
 double** VAR_1 ;
 double* VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct dataset *VAR_3, struct dataset *VAR_4, int VAR_5)
{
 double VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 double VAR_11;
 int VAR_12;

 VAR_12 = VAR_3->n + VAR_4->n - 2;
 if (VAR_12 > VAR_0)
  VAR_10 = VAR_1[0][VAR_5];
 else
  VAR_10 = VAR_1[VAR_12][VAR_5];
 VAR_6 = (VAR_3->n - 1) * FUNC_1(VAR_3) + (VAR_4->n - 1) * FUNC_1(VAR_4);
 VAR_6 /= VAR_3->n + VAR_4->n - 2;
 VAR_6 = FUNC_4(VAR_6);
 VAR_7 = VAR_6 * FUNC_4(1.0 / VAR_3->n + 1.0 / VAR_4->n);
 VAR_8 = FUNC_0(VAR_3) - FUNC_0(VAR_4);
 VAR_9 = VAR_10 * VAR_7;

 VAR_11 = (VAR_3->n - 1) * FUNC_1(VAR_3) + (VAR_4->n - 1) * FUNC_1(VAR_4) *
     (FUNC_0(VAR_3) * FUNC_0(VAR_3)) / (FUNC_0(VAR_4) * FUNC_0(VAR_4));
 VAR_11 *= (VAR_3->n + VAR_4->n) / (VAR_3->n * VAR_4->n * (VAR_3->n + VAR_4->n - 2.0));
 VAR_11 = VAR_10 * FUNC_4(VAR_11);

 if (FUNC_2(VAR_8) > VAR_9) {

  FUNC_3("Difference at %.1f%% confidence\n", VAR_2[VAR_5]);
  FUNC_3("	%g +/- %g\n", VAR_8, VAR_9);
  FUNC_3("	%g%% +/- %g%%\n", VAR_8 * 100 / FUNC_0(VAR_4), VAR_11 * 100 / FUNC_0(VAR_4));
  FUNC_3("	(Student's t, pooled s = %g)\n", VAR_6);
 } else {
  FUNC_3("No difference proven at %.1f%% confidence\n",
      VAR_2[VAR_5]);
 }
}
