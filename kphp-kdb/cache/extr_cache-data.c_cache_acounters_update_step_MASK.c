
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {int * data; struct cache_uri* hnext; } ;
struct amortization_counter {int dummy; } ;
struct TYPE_2__ {int cur_idx; } ;


 struct cache_uri** VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,struct amortization_counter*) ;
 int FUNC_1 (struct cache_uri*) ;
 int VAR_5 ;

int FUNC_2 (int VAR_6) {
  const int VAR_7 = VAR_2 + VAR_4 * sizeof (struct amortization_counter);
  int VAR_8 = VAR_3.cur_idx, VAR_9 = 0, VAR_10 = 0;
  while (VAR_9 < VAR_6 && VAR_10 < VAR_6) {
    VAR_9++;
    struct cache_uri *VAR_11;
    for (VAR_11 = VAR_0[VAR_8]; VAR_11 != ((void*)0); VAR_11 = VAR_11->hnext) {
      FUNC_0 (VAR_1+VAR_4, (struct amortization_counter *) &VAR_11->data[VAR_7]);
      FUNC_1 (VAR_11);
      VAR_10++;
    }
    if (++VAR_8 >= VAR_5) {
      VAR_8 -= VAR_5;
    }
  }
  VAR_3.cur_idx = VAR_8;
  return VAR_10;
}
