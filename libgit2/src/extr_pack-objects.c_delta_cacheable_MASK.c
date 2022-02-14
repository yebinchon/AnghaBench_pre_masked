
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t max_delta_cache_size; size_t cache_max_small_delta_size; int delta_cache_size; } ;
typedef TYPE_1__ git_packbuilder ;


 scalar_t__ FUNC_0 (size_t*,int ,size_t) ;

__attribute__((used)) static int FUNC_1(
 git_packbuilder *VAR_0,
 size_t VAR_1,
 size_t VAR_2,
 size_t VAR_3)
{
 size_t VAR_4;

 if (FUNC_0(&VAR_4, VAR_0->delta_cache_size, VAR_3))
  return 0;

 if (VAR_0->max_delta_cache_size && VAR_4 > VAR_0->max_delta_cache_size)
  return 0;

 if (VAR_3 < VAR_0->cache_max_small_delta_size)
  return 1;


 if ((VAR_1 >> 20) + (VAR_2 >> 21) > (VAR_3 >> 10))
  return 1;

 return 0;
}
