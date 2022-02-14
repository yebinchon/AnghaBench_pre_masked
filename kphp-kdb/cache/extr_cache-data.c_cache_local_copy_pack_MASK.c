
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_local_copy {int flags; int packed_location; int cached_at; int cached_counter_value; int yellow_light_start; int* location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (int*) ;

int FUNC_2 (struct cache_local_copy *VAR_5, int VAR_6, char *VAR_7, int VAR_8) {
  int VAR_9, VAR_10 = 0;
  if (VAR_6 <= 0) {
    return 0;
  }
  for (VAR_9 = VAR_6 - 2; VAR_9 >= 0; VAR_9--) {
    VAR_5[VAR_9].flags &= ~VAR_1;
  }
  VAR_5[VAR_6-1].flags |= VAR_1;
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
    VAR_5[VAR_9].flags &= ~VAR_0;
    if (VAR_5[VAR_9].packed_location) {
      VAR_5[VAR_9].flags |= VAR_0;
    }

    if (VAR_10 + 4 > VAR_8) {
      return -1;
    }
    FUNC_0 (VAR_7 + VAR_10, &VAR_5[VAR_9].flags, 4);
    VAR_10 += 4;
    if (VAR_10 + 4 > VAR_8) {
      return -1;
    }
    FUNC_0 (VAR_7 + VAR_10, &VAR_5[VAR_9].cached_at, 4);
    VAR_10 += 4;
    if (VAR_5[VAR_9].flags & VAR_3) {
      if (VAR_10 + 4 > VAR_8) {
        return -1;
      }
      FUNC_0 (VAR_7 + VAR_10, &VAR_5[VAR_9].yellow_light_start, 4);
      VAR_10 += 4;
    }
    if (VAR_5[VAR_9].flags & VAR_0) {
      if (VAR_10 + 4 > VAR_8) {
        return -1;
      }
      FUNC_0 (VAR_7 + VAR_10, &VAR_5[VAR_9].packed_location, 4);
      VAR_10 += 4;
    } else {
      int VAR_11 = FUNC_1 (VAR_5[VAR_9].location) + 1;
      if (VAR_10 + VAR_11 > VAR_8) {
        return -1;
      }
      FUNC_0 (VAR_7 + VAR_10, VAR_5[VAR_9].location, VAR_11);
      VAR_10 += VAR_11;
    }
  }
  return VAR_10;
}
