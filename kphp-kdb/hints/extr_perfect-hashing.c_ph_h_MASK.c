
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* sums; int* used; int code; scalar_t__ d; int mul1; int mul0; } ;
typedef TYPE_1__ perfect_hash ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (long long,int ,scalar_t__) ;

int FUNC_3 (perfect_hash *VAR_0, long long VAR_1) {
  int VAR_2 = FUNC_2 (VAR_1, VAR_0->mul0, VAR_0->d),
      VAR_3 = FUNC_2 (VAR_1, VAR_0->mul1, VAR_0->d);

  VAR_3 += VAR_0->d;

  int VAR_4;
  if (FUNC_1 (VAR_0->code, VAR_2) ^ FUNC_1 (VAR_0->code, VAR_3)) {
    VAR_4 = VAR_3;
  } else {
    VAR_4 = VAR_2;
  }



  int VAR_5 = 0;
  VAR_5 = VAR_0->sums[VAR_4 >> 6];

  int VAR_6 = (VAR_4 & 63);
  VAR_4 = (VAR_4 >> 5) & -2;
  if (VAR_6 >= 32) {
    VAR_5 += FUNC_0 (VAR_0->used[VAR_4++]);
    VAR_6 -= 32;
  }

  VAR_5 += FUNC_0 (VAR_0->used[VAR_4] & ((1 << VAR_6) - 1));
  return VAR_5;
}
