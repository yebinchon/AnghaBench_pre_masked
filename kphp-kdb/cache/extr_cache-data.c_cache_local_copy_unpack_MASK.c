
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {char* local_copy; } ;
struct cache_local_copy {int flags; int cached_at; int* cached_counter_value; int yellow_light_start; int packed_location; int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cache_uri*,struct cache_local_copy*) ;
 int FUNC_1 (int*,char*,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;

int FUNC_4 (struct cache_uri *VAR_5, struct cache_local_copy *VAR_6, int VAR_7, int VAR_8, int *VAR_9) {
  int VAR_10 = 0;
  if (VAR_5->local_copy == ((void*)0)) {
    if (VAR_9) {
      *VAR_9 = 0;
    }
    return 0;
  }
  char *VAR_11 = VAR_5->local_copy;
  do {
    if (VAR_10 >= VAR_7) {
      return -1;
    }
    FUNC_1 (&VAR_6->flags, VAR_11, 4);
    VAR_11 += 4;
    FUNC_1 (&VAR_6->cached_at, VAR_11, 4);
    VAR_11 += 4;
    if (VAR_6->flags & VAR_3) {
      FUNC_1 (&VAR_6->yellow_light_start, VAR_11, 4);
      VAR_11 += 4;
    }
    if (VAR_6->flags & VAR_0) {
      FUNC_1 (&VAR_6->packed_location, VAR_11, 4);
      VAR_11 += 4;
      if (VAR_8) {
        FUNC_0 (VAR_5, VAR_6);
      }
    } else {
      VAR_6->packed_location = 0;
      FUNC_2 (VAR_6->location, VAR_11);
      VAR_11 += FUNC_3 (VAR_11) + 1;
    }
    VAR_10++;
    if (VAR_6->flags & VAR_1) {
      break;
    }
    VAR_6++;
  } while (1);

  if (VAR_9) {
    *VAR_9 = VAR_11 - VAR_5->local_copy;
  }
  return VAR_10;
}
