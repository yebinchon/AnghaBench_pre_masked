
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cache_local_copy {int flags; int * location; int packed_location; } ;
struct TYPE_3__ {int prefix_len; int * packed_prefix; int packed_location_len; int packed_location; } ;
typedef TYPE_1__ cache_disk_filter_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_1 (struct cache_local_copy *VAR_1, cache_disk_filter_t *VAR_2) {
  if (VAR_1->flags & VAR_0) {
    if (!FUNC_0 (&VAR_1->packed_location, &VAR_2->packed_location, VAR_2->packed_location_len)) {
      return 1;
    }
  } else {
    if (!FUNC_0 (VAR_1->location, VAR_2->packed_prefix, VAR_2->prefix_len)) {
      return 1;
    }
  }
  return 0;
}
