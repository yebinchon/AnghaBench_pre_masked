
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int * data; } ;
struct amortization_counter_precise {double value; } ;
struct amortization_counter {double value; } ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct amortization_counter_precise*,int ) ;
 int FUNC_1 (int *,struct amortization_counter*) ;
 struct amortization_counter_precise* VAR_2 ;
 int FUNC_2 (int) ;
 struct cache_uri* FUNC_3 (char const* const,int ) ;
 scalar_t__ FUNC_4 (char const* const,char*) ;

int FUNC_5 (const char *const VAR_3, int VAR_4, double *VAR_5) {
  const int VAR_6 = FUNC_2 (VAR_4);
  if (VAR_6 < 0) {
    return -1;
  }
  struct cache_uri *VAR_7 = FUNC_3 (VAR_3, 0);
  if (VAR_7 == ((void*)0)) {
    if (FUNC_4 (VAR_3, "__CUMULATIVE__")) {
      return -2;
    }
    struct amortization_counter_precise *VAR_8 = VAR_2;
    VAR_8 += VAR_6;
    FUNC_0 (&VAR_0[VAR_6], VAR_8, 0);
    *VAR_5 = VAR_8->value;
    return 0;
  } else {
    struct amortization_counter *VAR_9 = (struct amortization_counter *) &VAR_7->data[VAR_1];
    VAR_9 += VAR_6;
    FUNC_1 (&VAR_0[VAR_6], VAR_9);
    *VAR_5 = VAR_9->value;
    return 0;
  }
}
