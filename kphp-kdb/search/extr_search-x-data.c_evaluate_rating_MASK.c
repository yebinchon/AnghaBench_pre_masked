
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct item {double sum_sqr_freq_title; double sum_freq_title_freq_text; double sum_sqr_freq_text; } ;
struct TYPE_3__ {double weight; double (* f ) (struct item*,TYPE_1__*) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double FUNC_0 (double) ;
 double FUNC_1 (struct item*,TYPE_1__*) ;
 double VAR_4 ;

__attribute__((used)) static inline double FUNC_2 (struct item *VAR_5, double VAR_6) {
  int VAR_7;

  double VAR_8 = VAR_3 * VAR_5->sum_sqr_freq_title +
             VAR_4 * VAR_5->sum_freq_title_freq_text +
             VAR_2 * VAR_5->sum_sqr_freq_text;
  if (VAR_8 < 1e-9) { return 1.0; }
  VAR_6 /= FUNC_0 (VAR_8);
  double VAR_9 = 1.0 - VAR_6 * VAR_0[0].weight;
  for (VAR_7 = 1; VAR_7 < VAR_1; VAR_7++) {
    VAR_9 -= VAR_0[VAR_7].f (VAR_5, VAR_0 + VAR_7) * VAR_0[VAR_7].weight;
  }
  if (VAR_9 < 0.0) { VAR_9 = 0.0; }
  if (VAR_9 > 1.0) { VAR_9 = 1.0; }
  return VAR_9;
}
