
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int * data; } ;
struct amortization_counter {double value; } ;


 double VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

inline int FUNC_1 (struct cache_uri *VAR_3) {
  struct amortization_counter *VAR_4 = ((struct amortization_counter *) &VAR_3->data[VAR_1]) + VAR_2;
  int VAR_5 = (VAR_4->value < VAR_0 - 0.5) ? (int) VAR_4->value : VAR_0 - 1;
  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_0);
  return VAR_5;
}
