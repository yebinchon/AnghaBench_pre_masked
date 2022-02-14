
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heap_entry {float expected_gain; size_t domain; int views; int ad_id; } ;
struct hash_entry {scalar_t__ generation; int heapref; } ;
struct advert {float factor; scalar_t__ domain; int ad_id; } ;


 struct heap_entry* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hash_entry* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,float) ;
 int FUNC_2 (float) ;

struct heap_entry *FUNC_3 (float VAR_6, struct advert *VAR_7, int VAR_8) {
  int VAR_9 = 0;
  if (VAR_5) {
    VAR_6 *= VAR_7->factor;
  }

  if (VAR_7->domain) {
    int VAR_10 = FUNC_0 (VAR_7->domain);
    if (VAR_2[VAR_10].generation == VAR_3) {
      VAR_9 = VAR_2[VAR_10].heapref;
      if (VAR_0[VAR_9].expected_gain >= VAR_6) {
 return 0;
      }
      VAR_9 = FUNC_1 (VAR_9, VAR_6);
    }
  }

  if (!VAR_9) {
    if (VAR_1 == VAR_4) {
      if (VAR_0[1].expected_gain >= VAR_6) {
 return 0;
      }
      if (VAR_0[1].domain >= 0) {
 --VAR_2[VAR_0[1].domain].generation;
      }
      VAR_9 = FUNC_1 (1, VAR_6);
    } else {
      VAR_9 = FUNC_2 (VAR_6);
    }
  }

  VAR_0[VAR_9].ad_id = VAR_7->ad_id;
  VAR_0[VAR_9].views = VAR_8;
  if (!VAR_7->domain) {
    VAR_0[VAR_9].domain = -1;
  } else {
    struct hash_entry *VAR_11 = &VAR_2[VAR_0[VAR_9].domain = FUNC_0 (VAR_7->domain)];
    VAR_11->heapref = VAR_9;
    VAR_11->generation = VAR_3;
  }
  VAR_0[VAR_9].expected_gain = VAR_6;
  return &VAR_0[VAR_9];
}
