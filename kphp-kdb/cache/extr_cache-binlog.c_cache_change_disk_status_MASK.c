
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disk_id; scalar_t__ server_id; scalar_t__ node_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; int i; } ;
struct lev_cache_change_disk_status {int packed_location; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2 (struct lev_cache_change_disk_status *VAR_1, int VAR_2) {
  if (FUNC_0 ("LEV_CACHE_CHANGE_DISK_STATUS")) {
    union cache_packed_local_copy_location VAR_3;
    VAR_3.i = VAR_1->packed_location;
    FUNC_1 (VAR_0, "+%d\t%d\t%d\t%d\n", VAR_2, (int) VAR_3.p.node_id, (int) VAR_3.p.server_id, (int) VAR_3.p.disk_id);
  }
  return 0;
}
