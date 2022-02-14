
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ node_id; scalar_t__ server_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; int i; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_2__ cache_stat_server_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  cache_stat_server_t *VAR_2 = *(cache_stat_server_t **) VAR_0;
  cache_stat_server_t *VAR_3 = *(cache_stat_server_t **) VAR_1;
  union cache_packed_local_copy_location VAR_4, VAR_5;
  VAR_4.i = VAR_2->id;
  VAR_5.i = VAR_3->id;
  if (VAR_4.p.node_id < VAR_5.p.node_id) {
    return -1;
  }
  if (VAR_4.p.node_id > VAR_5.p.node_id) {
    return 1;
  }
  if (VAR_4.p.server_id < VAR_5.p.server_id) {
    return -1;
  }
  if (VAR_4.p.server_id > VAR_5.p.server_id) {
    return 1;
  }
  return 0;
}
