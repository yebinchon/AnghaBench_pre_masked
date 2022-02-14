
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_id; int disk_id; scalar_t__ server_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; int i; } ;
struct lev_cache_change_disk_status {int packed_location; } ;
struct cache_local_copy_server {unsigned int* bitset; } ;


 int VAR_0 ;
 struct cache_local_copy_server* FUNC_0 (int,int) ;
 int FUNC_1 (unsigned int*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (int,char*,int,int,int,int) ;
 int FUNC_3 (struct cache_local_copy_server*,int) ;

__attribute__((used)) static int FUNC_4 (struct lev_cache_change_disk_status *VAR_2, int VAR_3) {
  union cache_packed_local_copy_location VAR_4;
  VAR_4.i = VAR_2->packed_location;
  FUNC_2 (3, "cache_change_disk_status (node_id:%d, server_id:%d, disk_id:%d, enable:%d)\n",
    (int) VAR_4.p.node_id, (int) VAR_4.p.server_id, (int) VAR_4.p.disk_id, VAR_3);
  int VAR_5 = VAR_4.p.node_id;
  VAR_5 *= (VAR_0+1);
  VAR_5 += VAR_4.p.server_id;
  if (VAR_3) {
    struct cache_local_copy_server *VAR_6 = FUNC_0 (VAR_5, 0);
    if (VAR_6 != ((void*)0)) {
      int VAR_7 = 0;
      if (VAR_4.p.disk_id) {
        int VAR_8;
        VAR_6->bitset[VAR_4.p.disk_id >> 5] &= ~(1U << (VAR_4.p.disk_id & 31));
        for (VAR_8 = 0; VAR_8 < 8 && !(VAR_6->bitset[VAR_8]); VAR_8++);
        VAR_7 = VAR_8 < 8;
      }
      if (!VAR_7) {
        VAR_6 = FUNC_0 (VAR_5, -1);
        FUNC_3 (VAR_6, sizeof (*VAR_6));
        VAR_1--;
      }
    }
  } else {
    struct cache_local_copy_server *VAR_9 = FUNC_0 (VAR_5, 1);
    if (VAR_4.p.disk_id) {
      VAR_9->bitset[VAR_4.p.disk_id >> 5] |= (1U << (VAR_4.p.disk_id & 31));
    } else {
      FUNC_1 (VAR_9->bitset, -1, sizeof (VAR_9->bitset));
    }
  }
  return 1;
}
