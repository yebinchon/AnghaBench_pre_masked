
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_id; int server_id; int disk_id; } ;
union cache_packed_local_copy_location {TYPE_1__ p; scalar_t__ i; } ;
struct cache_local_copy {int flags; int location; scalar_t__ packed_location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_1 (struct cache_local_copy *VAR_4, union cache_packed_local_copy_location *VAR_5) {
  if (VAR_4->flags & VAR_0) {
    VAR_5->i = VAR_4->packed_location;
  } else {
    int VAR_6, VAR_7, VAR_8;
    VAR_5->i = 0;
    if (FUNC_0 (VAR_4->location, "cs%d_%d/d%d", &VAR_6, &VAR_7, &VAR_8) == 3 &&
        VAR_6 >= 1 && VAR_6 <= VAR_2 &&
        VAR_7 >= 1 && VAR_7 <= VAR_3 &&
        VAR_8 >= 1 && VAR_8 <= VAR_1
      ) {
      VAR_5->p.node_id = VAR_6;
      VAR_5->p.server_id = VAR_7;
      VAR_5->p.disk_id = VAR_8;
    }
  }
}
