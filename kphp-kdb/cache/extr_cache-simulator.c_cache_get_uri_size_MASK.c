
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {long long size; } ;
struct TYPE_2__ {long long default_file_size; } ;


 TYPE_1__ VAR_0 ;

inline long long FUNC_0 (struct cache_uri *VAR_1, int VAR_2) {
  if (VAR_1->size < 0) {
    if (VAR_2) {
      VAR_1->size = -2LL;
    }
    return VAR_0.default_file_size;
  }
  return VAR_1->size;
}
