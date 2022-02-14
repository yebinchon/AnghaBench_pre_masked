
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disk_id; scalar_t__ server_id; scalar_t__ node_id; } ;
union cache_packed_local_copy_location {int i; TYPE_1__ p; } ;
struct cache_uri {int dummy; } ;
struct cache_local_copy {int packed_location; int location; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (struct cache_uri*) ;
 int FUNC_2 (int ,int,char*,int,int,int,char*) ;

void FUNC_3 (struct cache_uri *VAR_0, struct cache_local_copy *VAR_1) {
  FUNC_0 (VAR_1->packed_location);
  union cache_packed_local_copy_location VAR_2;
  VAR_2.i = VAR_1->packed_location;
  FUNC_0 (FUNC_2 (VAR_1->location, sizeof (VAR_1->location), "cs%d_%d/d%d/%s",
          (int) VAR_2.p.node_id,
          (int) VAR_2.p.server_id,
          (int) VAR_2.p.disk_id,
          FUNC_1 (VAR_0)) < sizeof (VAR_1->location));
}
