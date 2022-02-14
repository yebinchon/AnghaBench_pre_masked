
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cache_uri {int dummy; } ;
struct TYPE_8__ {struct cache_uri** H; } ;
struct TYPE_7__ {struct cache_uri** H; } ;
struct TYPE_6__ {long long const download_speed; long long const disk_size; } ;
struct TYPE_5__ {size_t max_retrieved_files_between_two_priority_requests; int max_erased_files_between_two_priority_requests; int priority_lists_requests; } ;


 long long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cache_uri*,int const) ;
 double FUNC_2 (struct cache_uri*) ;
 long long FUNC_3 (struct cache_uri*,int) ;
 int FUNC_4 (struct cache_uri*,int const) ;
 long long VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 size_t VAR_6 ;
 long long VAR_7 ;
 long long VAR_8 ;
 int FUNC_5 (int const) ;
 TYPE_2__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 size_t VAR_11 ;
 int FUNC_6 (int,char*,long long) ;

__attribute__((used)) static void FUNC_7 (void) {
  if (!VAR_10.priority_lists_requests) {
    return;
  }
  const int VAR_12 = VAR_7;
  FUNC_6 (3, "<%d> cache_download_next_file\n", VAR_7);
  if (VAR_11 > 0) {
    FUNC_1 (VAR_5.H[VAR_11], VAR_12);
  }
  if (VAR_10.max_retrieved_files_between_two_priority_requests < VAR_11) {
    VAR_10.max_retrieved_files_between_two_priority_requests = VAR_11;
  }
  VAR_11++;
  if (VAR_11 > VAR_6) {
    if (VAR_6 > 0) {
      FUNC_5 (VAR_12);
    } else {
      VAR_7 = VAR_0;
    }
    return;
  }
  struct cache_uri *VAR_13 = VAR_5.H[VAR_11];
  const long long VAR_14 = FUNC_3 (VAR_13, 1);
  long long VAR_15 = VAR_14 / VAR_9.download_speed;
  if (VAR_14 % VAR_9.download_speed) {
    VAR_15++;
  }
  FUNC_0 (VAR_15 + VAR_7 <= VAR_0);
  VAR_7 += VAR_15;
  if (VAR_7 >= VAR_8) {
    return;
  }

  long long VAR_16 = VAR_9.disk_size - VAR_14;
  FUNC_0 (VAR_16 >= 0);
  long long VAR_17 = 0;
  int VAR_18 = VAR_2;
  double VAR_19 = FUNC_2 (VAR_13) - 1.0;
  while (VAR_1 - VAR_17 > VAR_16 && VAR_18 <= VAR_4) {
    if (FUNC_2 ((struct cache_uri *) VAR_3.H[VAR_18]) >= VAR_19) {
      VAR_7 = VAR_0;
      return;
    }
    VAR_17 += FUNC_3 (VAR_3.H[VAR_18], 1);
    VAR_18++;
  }

  if (VAR_1 - VAR_17 > VAR_16 && VAR_18 > VAR_4) {
    FUNC_5 (VAR_12);
    return;
  }

  while (VAR_2 < VAR_18) {
    FUNC_4 (VAR_3.H[VAR_2++], VAR_12);
  }

  if (VAR_10.max_erased_files_between_two_priority_requests < VAR_2 - 1) {
    VAR_10.max_erased_files_between_two_priority_requests = VAR_2 - 1;
  }
}
