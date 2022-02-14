
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int node_id; int server_id; int disk_id; } ;
union cache_packed_local_copy_location {int i; TYPE_1__ p; } ;
struct cache_uri {int dummy; } ;
struct amortization_counter {int dummy; } ;
typedef enum cache_sorted_order { ____Placeholder_cache_sorted_order } cache_sorted_order ;
struct TYPE_7__ {int max_size; int compare; scalar_t__ size; } ;
typedef TYPE_2__ cache_heap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cache_uri* FUNC_0 (struct cache_uri*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int (*) (struct cache_uri*),int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct cache_uri*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_2__* VAR_14 ;
 struct cache_uri* VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static int FUNC_9 (cache_heap_t *VAR_17, int VAR_18, int VAR_19, int VAR_20, int VAR_21, int VAR_22, enum cache_sorted_order VAR_23) {
  FUNC_1 (VAR_23 == VAR_10 || VAR_23 == VAR_9);
  int VAR_24 = FUNC_6 (VAR_20, VAR_21, VAR_22);
  if (VAR_24 < 0) {
    return VAR_24;
  }

  if (VAR_19 <= 0) {
    return VAR_0;
  }

  VAR_14 = VAR_17;
  VAR_12 = FUNC_7 (VAR_18);

  if (VAR_12 < 0) {
    return VAR_1;
  }
  VAR_13 = VAR_5 + VAR_12 * sizeof (struct amortization_counter);

  VAR_17->size = 0;
  VAR_17->max_size = (VAR_19 < VAR_3) ? VAR_19 : VAR_3;
  VAR_17->compare = VAR_23 == VAR_10 ? VAR_8 : VAR_7;
  VAR_16 = VAR_4 + VAR_12;
  union cache_packed_local_copy_location VAR_25;
  VAR_25.p.node_id = VAR_20;
  VAR_25.p.server_id = VAR_21;
  VAR_25.p.disk_id = VAR_22;
  FUNC_3 (&VAR_11, VAR_25.i);
  if (VAR_6 & VAR_2) {
    int VAR_26;
    const int VAR_27 = FUNC_8 (VAR_25.i);

    for (VAR_26 = VAR_27; VAR_26 >= 0; VAR_26 -= VAR_27) {
      struct cache_uri *VAR_28 = &VAR_15[VAR_26], *VAR_29;
      for (VAR_29 = FUNC_0(VAR_28); VAR_29 != VAR_28; VAR_29 = FUNC_0(VAR_29)) {
        FUNC_4 (VAR_29);
      }
    }
  } else {
    FUNC_2 (FUNC_4, VAR_23);
  }
  return FUNC_5 (VAR_17);
}
