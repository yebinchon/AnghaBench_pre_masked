
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ delay_between_priority_lists_requests; scalar_t__ optimization; } ;
struct TYPE_3__ {int max_erased_files_between_two_priority_requests; int max_retrieved_files_between_two_priority_requests; double max_priority_lists_request_time; int priority_lists_requests; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int,int *,int *) ;
 int VAR_1 ;
 double FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int,char*,int ,...) ;

__attribute__((used)) static void FUNC_3 (void) {
  FUNC_2 (3, "<%d> cache_priority_list_request\n", VAR_7);
  double VAR_11 = -FUNC_1 ();
  int VAR_12 = 0, VAR_13 = 0;
  if (VAR_8.optimization) {
    VAR_12 = 2 * VAR_9.max_erased_files_between_two_priority_requests;
    if (VAR_12 > VAR_0) {
      VAR_12 = VAR_0;
    }
    VAR_13 = 2 * VAR_9.max_retrieved_files_between_two_priority_requests;
    if (VAR_13 > VAR_0) {
      VAR_13 = VAR_0;
    }
  }

  if (!VAR_12) {
    VAR_12 = VAR_0;
  }
  if (!VAR_13) {
    VAR_13 = VAR_0;
  }

  FUNC_0 (&VAR_2, &VAR_4, VAR_12, VAR_13, &VAR_3, &VAR_5);
  FUNC_2 (2, "heap_cached_files: %d, heap_uncached_files: %d\n", VAR_3, VAR_5);




  VAR_11 += FUNC_1 ();
  if (VAR_9.max_priority_lists_request_time < VAR_11) {
    VAR_9.max_priority_lists_request_time = VAR_11;
  }
  VAR_1 = 1;
  VAR_10 = 0;
  VAR_6 = VAR_7;
  VAR_7 += VAR_8.delay_between_priority_lists_requests;
  VAR_9.priority_lists_requests++;
}
