
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_id; int server_id; int disk_id; } ;
union cache_packed_local_copy_location {scalar_t__ i; TYPE_1__ p; } ;
typedef int tmp ;
struct cache_uri {int dummy; } ;
struct cache_local_copy {char* location; int flags; scalar_t__ packed_location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (struct cache_uri*) ;
 int FUNC_2 (char*,int,char*,int,int,int,char*) ;
 int FUNC_3 (char*,char*,int*,int*,int*,char*) ;
 int FUNC_4 (char*,char*) ;

int FUNC_5 (struct cache_uri *VAR_4, struct cache_local_copy *VAR_5) {
  int VAR_6, VAR_7, VAR_8;
  char VAR_9[256], VAR_10[256+64];
  VAR_5->packed_location = 0;
  VAR_5->flags &= ~VAR_0;
  if (FUNC_3 (VAR_5->location, "cs%d_%d/d%d/%255s", &VAR_6, &VAR_7, &VAR_8, VAR_9) == 4 &&
     VAR_6 >= 1 && VAR_6 <= VAR_2 &&
     VAR_7 >= 1 && VAR_7 <= VAR_3 &&
     VAR_8 >= 1 && VAR_8 <= VAR_1 &&
     !FUNC_4 (FUNC_1 (VAR_4), VAR_9)) {

    FUNC_0 (FUNC_2 (VAR_10, sizeof (VAR_10), "cs%d_%d/d%d/%s", VAR_6, VAR_7, VAR_8, VAR_9) < sizeof (VAR_10));
    if (!FUNC_4 (VAR_10, VAR_5->location)) {
      union cache_packed_local_copy_location VAR_11;
      VAR_11.p.node_id = VAR_6;
      VAR_11.p.server_id = VAR_7;
      VAR_11.p.disk_id = VAR_8;
      VAR_5->packed_location = VAR_11.i;
      VAR_5->flags |= VAR_0;
      return 0;
    }
  }
  return -1;
}
