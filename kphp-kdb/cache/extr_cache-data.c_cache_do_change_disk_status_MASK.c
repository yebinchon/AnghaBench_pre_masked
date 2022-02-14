
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_id; int server_id; int disk_id; } ;
union cache_packed_local_copy_location {int i; TYPE_1__ p; } ;
struct lev_cache_change_disk_status {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct lev_cache_change_disk_status* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_cache_change_disk_status*,int) ;
 int FUNC_3 (int,int,int) ;

int FUNC_4 (int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  FUNC_1 (VAR_4 == 0 || VAR_4 == 1);
  int VAR_5 = FUNC_3 (VAR_1, VAR_2, VAR_3);
  if (VAR_5 < 0) {
    return VAR_5;
  }
  union cache_packed_local_copy_location VAR_6;
  VAR_6.p.node_id = VAR_1;
  VAR_6.p.server_id = VAR_2;
  VAR_6.p.disk_id = VAR_3;
  struct lev_cache_change_disk_status *VAR_7 = FUNC_0 (VAR_0 + VAR_4, sizeof (*VAR_7), VAR_6.i);
  return FUNC_2 (VAR_7, VAR_4);
}
