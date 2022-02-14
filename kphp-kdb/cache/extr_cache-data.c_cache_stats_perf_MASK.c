
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amortization_counter_precise {double value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,char,double) ;
 int VAR_0 ;

void FUNC_2 (char *VAR_1, int VAR_2, struct amortization_counter_precise *VAR_3, struct amortization_counter_precise *VAR_4) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
    double VAR_6 = VAR_3->value, VAR_7 = VAR_6 + VAR_4->value;
    VAR_6 = 100.0 * VAR_6;
    VAR_6 = (VAR_7 < 1e-6) ? 0.0 : VAR_6 / VAR_7;
    int VAR_8 = FUNC_1 (VAR_1, VAR_2, "%c%.6lf", VAR_5 ? ',' : '\t', VAR_6);
    FUNC_0 (VAR_8 < VAR_2);
    VAR_2 -= VAR_8;
    VAR_1 += VAR_8;
    VAR_3++;
    VAR_4++;
  }
}
