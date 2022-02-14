
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disk_id; scalar_t__ server_id; scalar_t__ node_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; } ;
struct cache_local_copy {char* location; int cached_at; } ;


 int VAR_0 ;
 int FUNC_0 (struct cache_local_copy*,union cache_packed_local_copy_location*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,char*,char*,int,int,int,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2 (struct cache_local_copy *VAR_2, int VAR_3) {
  int VAR_4, VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    union cache_packed_local_copy_location VAR_6;
    int VAR_7 = FUNC_0 (VAR_2 + VAR_4, &VAR_6);
    VAR_5 += FUNC_1 (VAR_1 + VAR_5, VAR_0 - VAR_5, "%s\t%d\t%d\t%d\t%d\t%d\n",
        VAR_2[VAR_4].location,
        (int) VAR_6.p.node_id, (int) VAR_6.p.server_id, (int) VAR_6.p.disk_id,
        VAR_7, VAR_2[VAR_4].cached_at);
    if (VAR_5 >= VAR_0) {
      return -1;
    }
  }
  return VAR_5;
}
