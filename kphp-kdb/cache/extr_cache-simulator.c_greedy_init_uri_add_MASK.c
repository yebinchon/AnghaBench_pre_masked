
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lev_cache_uri {int data; } ;
struct cache_uri {char* local_copy; } ;
struct TYPE_4__ {scalar_t__ disk_size; } ;
struct TYPE_3__ {long long cache_init_bytes; int cache_init_files; } ;


 int FUNC_0 (struct cache_uri*) ;
 long long FUNC_1 (struct cache_uri*,int) ;
 scalar_t__ VAR_0 ;
 struct cache_uri* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_4 (struct lev_cache_uri *VAR_3, int VAR_4) {
  char VAR_5[256];
  FUNC_3 (VAR_5, VAR_3->data, VAR_4);
  VAR_5[VAR_4] = 0;
  struct cache_uri *VAR_6 = FUNC_2 (VAR_5, 0);
  FUNC_0 (VAR_6);
  if (VAR_6->local_copy == ((void*)0)) {
    long long VAR_7 = FUNC_1 (VAR_6, 1);
    if (VAR_0 + VAR_7 <= VAR_1.disk_size) {
      VAR_6->local_copy = "cached";
      VAR_0 += VAR_7;
      VAR_2.cache_init_files++;
      VAR_2.cache_init_bytes += VAR_7;
    }
  }
}
