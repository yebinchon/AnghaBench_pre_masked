
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct results_queue_entry {int dummy; } ;


 size_t VAR_0 ;
 struct results_queue_entry* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

struct results_queue_entry *FUNC_0 (void) {
  if (!VAR_3) {
    return ((void*)0);
  }
  struct results_queue_entry *VAR_4 = &VAR_1[VAR_2];
  if (++VAR_2 == VAR_0) {
    VAR_2 = 0;
  }
  VAR_3--;
  return VAR_4;
}
