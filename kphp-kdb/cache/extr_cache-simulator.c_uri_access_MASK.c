
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {scalar_t__ local_copy; int last_access; } ;
struct TYPE_2__ {int cache_hits_files; int cache_hits_bytes; int cache_misses_files; int cache_misses_bytes; } ;


 long long FUNC_0 (struct cache_uri*,int) ;
 int FUNC_1 (struct cache_uri*,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2 (struct cache_uri *VAR_2, int VAR_3) {
  if (VAR_2 == ((void*)0)) {
    return;
  }
  VAR_2->last_access = VAR_0;
  FUNC_1 (VAR_2, VAR_3);
  if (VAR_2->local_copy) {
    const long long VAR_4 = FUNC_0 (VAR_2, 1);
    VAR_1.cache_hits_files += VAR_3;
    VAR_1.cache_hits_bytes += VAR_3 * VAR_4;
  } else {
    const long long VAR_5 = FUNC_0 (VAR_2, 0);
    VAR_1.cache_misses_files += VAR_3;
    VAR_1.cache_misses_bytes += VAR_3 * VAR_5;
  }
}
