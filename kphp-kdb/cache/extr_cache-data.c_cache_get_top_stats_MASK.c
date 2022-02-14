
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct cache_uri {int * data; } ;
struct cache_top_stats {int selection_size; int known_size_files; long long sum_filesize; double weighted_sum_filesize; int sum_acounter; } ;
struct amortization_counter {scalar_t__ value; } ;
typedef enum cache_sorted_order { ____Placeholder_cache_sorted_order } cache_sorted_order ;
struct TYPE_8__ {struct cache_uri** H; } ;
typedef TYPE_1__ cache_heap_t ;
struct TYPE_9__ {int pos; } ;
typedef TYPE_2__ cache_buffer_t ;
struct TYPE_10__ {int value; } ;
typedef int S ;


 int * VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int ,int ,int ) ;
 long long FUNC_4 (struct cache_uri*) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (struct cache_top_stats*,int ,int) ;
 int FUNC_6 (int,int) ;
 int VAR_4 ;

int FUNC_7 (int VAR_5, enum cache_sorted_order VAR_6, int VAR_7, char *VAR_8, int VAR_9) {
  cache_heap_t VAR_10;
  struct cache_top_stats VAR_11;
  FUNC_5 (&VAR_11, 0, sizeof (VAR_11));
  int VAR_12;
  VAR_11.selection_size = FUNC_3 (&VAR_10, VAR_5, VAR_6, VAR_7, 0, 0, 0);
  if (VAR_11.selection_size < 0) {
    return -1;
  }
  for (VAR_12 = 1; VAR_12 <= VAR_11.selection_size; VAR_12++) {
    struct cache_uri *VAR_13 = VAR_10.H[VAR_12];
    struct amortization_counter *VAR_14 = ((struct amortization_counter *) &VAR_13->data[VAR_3]);
    long long VAR_15 = FUNC_4 (VAR_13);
    if (VAR_15 >= 0) {
      VAR_11.known_size_files++;
      VAR_11.sum_filesize += VAR_15;
      VAR_11.weighted_sum_filesize += ((double) VAR_14->value) * VAR_15;
    }
    VAR_11.sum_acounter += VAR_14->value;
  }
  FUNC_0 (&VAR_0[VAR_2], VAR_1 + VAR_2, 0);

  cache_buffer_t VAR_16;
  FUNC_1 (&VAR_16, VAR_8, VAR_9);
  FUNC_2 (&VAR_16, "selection_size\t%d\n", VAR_11.selection_size);
  FUNC_2 (&VAR_16, "total_files\t%lld\n", VAR_4);
  FUNC_2 (&VAR_16, "selection_relative_size\t%.10lf\n", FUNC_6 (VAR_11.selection_size, VAR_4));
  FUNC_2 (&VAR_16, "known_size_files\t%d\n", VAR_11.known_size_files);
  FUNC_2 (&VAR_16, "sum_acounter\t%.10lg\n", VAR_11.sum_acounter);
  FUNC_2 (&VAR_16, "relative_sum_acounter\t%.10lf\n", FUNC_6 (VAR_11.sum_acounter, VAR_1[VAR_2].value));
  FUNC_2 (&VAR_16, "sum_filesize\t%lld\n", VAR_11.sum_filesize);
  FUNC_2 (&VAR_16, "weighted_sum_filesize\t%.10lg\n", VAR_11.weighted_sum_filesize);
  if (VAR_16.pos >= VAR_9) {
    return -1;
  }
  return VAR_16.pos;
}
