
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cache_uri {int * data; } ;
struct amortization_counter {int value; } ;
struct TYPE_5__ {int flags; int min_rate; int real_min_rate; size_t heap_acounter_off; int cnt; int * disk_filter; TYPE_2__* heap; } ;
typedef TYPE_1__ cache_top_access_result_t ;
struct TYPE_6__ {struct cache_uri** H; } ;
typedef TYPE_2__ cache_heap_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_0 (cache_top_access_result_t *VAR_3, cache_heap_t *VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  int VAR_8;
  VAR_3->heap = VAR_4;
  VAR_3->flags = VAR_6;
  VAR_3->min_rate = VAR_7;
  VAR_3->real_min_rate = VAR_7 >= 1000000 ? VAR_7 * 1e-6 : VAR_7;
  VAR_3->disk_filter = (VAR_3->flags & 0x80000000) ? &VAR_0 : ((void*)0);
  VAR_3->heap_acounter_off = VAR_1;
  int VAR_9 = 0;
  for (VAR_8 = 1; VAR_8 <= VAR_5; VAR_8++) {
    struct cache_uri *VAR_10 = VAR_4->H[VAR_8];
    if (!VAR_10->data[VAR_2]) {
      continue;
    }
    struct amortization_counter *VAR_11 = ((struct amortization_counter *) &VAR_10->data[VAR_1]);
    if (VAR_7 && VAR_11->value <= VAR_3->real_min_rate) {
      continue;
    }
    VAR_4->H[++VAR_9] = VAR_4->H[VAR_8];
  }
  VAR_3->cnt = VAR_9;
  return 0;
}
