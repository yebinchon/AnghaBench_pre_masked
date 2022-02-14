
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long item_id; } ;


 TYPE_1__* VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline long long FUNC_1 (int VAR_3) {
  if (FUNC_0(VAR_3 < 0)) {
    return -1LL;
  }
  if (FUNC_0(VAR_3 >= VAR_2)) {
    return VAR_1;
  }
  return VAR_0[VAR_3].item_id;
}
