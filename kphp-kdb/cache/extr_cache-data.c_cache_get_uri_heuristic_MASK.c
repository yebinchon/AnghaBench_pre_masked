
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int * data; } ;
struct amortization_counter {double value; } ;


 size_t VAR_0 ;
 int VAR_1 ;

double FUNC_0 (const struct cache_uri *VAR_2) {
  int VAR_3;
  struct amortization_counter *VAR_4 = (struct amortization_counter *) &VAR_2->data[VAR_0];
  double VAR_5 = VAR_4->value;
  VAR_4++;
  for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
    if (VAR_5 < VAR_4->value) {
      VAR_5 = VAR_4->value;
    }
    VAR_4++;
  }
  return VAR_5;
}
