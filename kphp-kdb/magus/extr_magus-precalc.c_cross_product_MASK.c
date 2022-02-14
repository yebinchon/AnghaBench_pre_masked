
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fid; float val; } ;
typedef TYPE_1__ score ;



inline float FUNC_0 (score *VAR_0, score *VAR_1) {

  float VAR_2 = 0.2;
  while (VAR_0->fid >= 0 && VAR_1->fid >= 0) {
    if (VAR_0->fid == VAR_1->fid) {
      VAR_2 += VAR_0->val * VAR_1->val;
      VAR_0++;
      VAR_1++;
    } else {
      if (VAR_0->val < VAR_1->val) {
        VAR_0++;
      } else {
        VAR_1++;
      }
    }
  }
  return VAR_2;
}
