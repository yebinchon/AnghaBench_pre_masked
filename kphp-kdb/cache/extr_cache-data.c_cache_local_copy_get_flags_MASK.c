
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disk_id; int server_id; int node_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; scalar_t__ i; } ;
struct cache_local_copy {int flags; scalar_t__ yellow_light_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct cache_local_copy*,union cache_packed_local_copy_location*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*,int) ;

int FUNC_3 (struct cache_local_copy *VAR_3, union cache_packed_local_copy_location *VAR_4) {
  if (VAR_3->flags & VAR_0) {
    return 0;
  }
  FUNC_1 (VAR_3, VAR_4);
  int VAR_5 = VAR_3->flags & VAR_1;
  FUNC_2 (4, "cache_local_copy_get_flags: yellow_light_duration = %d\n", VAR_5);
  if (VAR_5 && VAR_2 <= VAR_3->yellow_light_start + VAR_5) {
    return 2;
  }
  return (VAR_4->i) ? FUNC_0 (VAR_4->p.node_id, VAR_4->p.server_id, VAR_4->p.disk_id) : 1;
}
