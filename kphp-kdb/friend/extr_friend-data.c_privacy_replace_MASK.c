
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ x; int y; struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_1__ privacy_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static privacy_t *FUNC_2 (privacy_t *VAR_0, privacy_t *VAR_1, int VAR_2) {
  int VAR_3 = 1;
  if (VAR_0) {
    if (VAR_1->x == VAR_0->x) {
      VAR_1->y = (VAR_1->y & 255) | (VAR_0->y & -256);
      VAR_1->left = VAR_0->left;
      VAR_1->right = VAR_0->right;
      FUNC_0 (VAR_0);
      return VAR_1;
    }
    VAR_3 = VAR_1->y > (VAR_0->y | 255);
    if (VAR_1->x < VAR_0->x) {
      privacy_t *VAR_4 = FUNC_2 (VAR_0->left, VAR_1, VAR_3);
      if (VAR_4) {
        VAR_0->left = VAR_4;
        return VAR_0;
      }
    } else {
      privacy_t *VAR_5 = FUNC_2 (VAR_0->right, VAR_1, VAR_3);
      if (VAR_5) {
        VAR_0->right = VAR_5;
        return VAR_0;
      }
    }
  }
  if (!VAR_2 && VAR_3) {
    FUNC_1 (&VAR_1->left, &VAR_1->right, VAR_0, VAR_1->x);
    return VAR_1;
  } else {
    return 0;
  }
}
