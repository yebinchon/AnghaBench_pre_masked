
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ disk_id; scalar_t__ server_id; scalar_t__ node_id; } ;
union cache_packed_local_copy_location {int i; TYPE_1__ p; } ;
struct TYPE_5__ {int packed_location; int packed_location_len; int prefix_len; int packed_prefix; } ;
typedef TYPE_2__ cache_disk_filter_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int,char*,int,int,...) ;

__attribute__((used)) static void FUNC_2 (cache_disk_filter_t *VAR_0, int VAR_1) {
  union cache_packed_local_copy_location VAR_2;
  VAR_2.i = VAR_0->packed_location = VAR_1;
  VAR_0->packed_location_len = 4;
  if (!VAR_2.p.disk_id) {
    VAR_0->packed_location_len--;
    VAR_0->prefix_len = FUNC_1 (VAR_0->packed_prefix, sizeof (VAR_0->packed_prefix), "cs%d_%d/d",
          (int) VAR_2.p.node_id, (int) VAR_2.p.server_id);
  } else {
    VAR_0->prefix_len = FUNC_1 (VAR_0->packed_prefix, sizeof (VAR_0->packed_prefix), "cs%d_%d/d%d/",
          (int) VAR_2.p.node_id, (int) VAR_2.p.server_id, (int) VAR_2.p.disk_id);
  }
  FUNC_0 (VAR_0->prefix_len < sizeof (VAR_0->packed_prefix));
}
