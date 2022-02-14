
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_local_copy {int flags; scalar_t__ yellow_light_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0 (struct cache_local_copy *VAR_2, int *VAR_3, int *VAR_4) {
  *VAR_3 = *VAR_4 = 0;
  int VAR_5 = VAR_2->flags & VAR_0;
  if (!VAR_5 || (VAR_2->yellow_light_start + VAR_5 <= VAR_1)) {
    return;
  }
  *VAR_4 = VAR_1 - VAR_2->yellow_light_start;
  *VAR_3 = VAR_5 - (*VAR_4);
}
