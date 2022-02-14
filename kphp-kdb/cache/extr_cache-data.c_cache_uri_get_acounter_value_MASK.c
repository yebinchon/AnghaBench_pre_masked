
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int * data; } ;
struct amortization_counter {float value; } ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct amortization_counter*) ;
 int FUNC_1 (int) ;

float FUNC_2 (struct cache_uri *VAR_3, int VAR_4) {
  FUNC_1 (VAR_4 >= 0 && VAR_4 < VAR_2);
  struct amortization_counter *VAR_5 = (struct amortization_counter *) &VAR_3->data[VAR_1];
  VAR_5 += VAR_4;
  FUNC_0 (&VAR_0[VAR_4], VAR_5);
  return VAR_5->value;
}
