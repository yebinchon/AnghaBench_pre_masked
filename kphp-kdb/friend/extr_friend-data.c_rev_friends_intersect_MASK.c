
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x1; scalar_t__ x2; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ rev_friends_t ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_0 (rev_friends_t *VAR_3, int VAR_4) {
  if (!VAR_3) {
    return 0;
  }
  int VAR_5 = 0;
  if (VAR_3->x1 >= VAR_4) {
    VAR_5 += FUNC_0 (VAR_3->left, VAR_4);
  }
  if (VAR_3->x1 == VAR_4) {
    while (VAR_2 < VAR_0 && VAR_1[VAR_2] < VAR_3->x2) {
      VAR_2 ++;
    }
    if (VAR_2 < VAR_0 && VAR_1[VAR_2] == VAR_3->x2) {
      VAR_5 ++;
      VAR_2 ++;
    }
  }
  if (VAR_3->x1 <= VAR_4) {
    VAR_5 += FUNC_0 (VAR_3->right, VAR_4);
  }
  return VAR_5;
}
