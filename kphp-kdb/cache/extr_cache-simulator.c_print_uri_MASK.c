
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_uri {int last_access; long long size; int * hnext; } ;
struct TYPE_2__ {long long with_known_size_bytes; long long max_known_size; scalar_t__ max_uries_in_one_bucket; int with_known_size_files; int required_files_with_unknown_size; int uries_last_month_access; int uries_last_week_access; int uries_last_day_access; int uries_last_hour_access; } ;


 char* FUNC_0 (struct cache_uri*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*,int,int) ;

void FUNC_3 (struct cache_uri *VAR_4) {
  if (VAR_4->last_access > VAR_0) {
    FUNC_2 (1, "U->last_access: %d, now: %d\n", VAR_4->last_access, VAR_0);
  }
  if (VAR_4->last_access >= VAR_0 - 3600) {
    VAR_2.uries_last_hour_access++;
  }
  if (VAR_4->last_access >= VAR_0 - 86400) {
    VAR_2.uries_last_day_access++;
  }
  if (VAR_4->last_access >= VAR_0 - 86400 * 7) {
    VAR_2.uries_last_week_access++;
  }
  if (VAR_4->last_access >= VAR_0 - 86400 * 30) {
    VAR_2.uries_last_month_access++;
  }

  if (VAR_4->size == -2LL) {
    VAR_2.required_files_with_unknown_size++;
    if (VAR_1) {
      FUNC_1 ("%s\n", FUNC_0 (VAR_4));
    }
  } else if (VAR_4->size >= 0) {
    VAR_2.with_known_size_files++;
    VAR_2.with_known_size_bytes += VAR_4->size;
    if (VAR_2.max_known_size < VAR_4->size) {
      VAR_2.max_known_size = VAR_4->size;
    }
  }
  VAR_3++;
  if (VAR_4->hnext == ((void*)0)) {
    if (VAR_2.max_uries_in_one_bucket < VAR_3) {
      VAR_2.max_uries_in_one_bucket = VAR_3;
    }
    VAR_3 = 0;
  }
}
