
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ x; struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_1__ privacy_t ;
typedef scalar_t__ privacy_key_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static privacy_t *FUNC_2 (privacy_t *VAR_0, privacy_key_t VAR_1) {
  if (VAR_0->x == VAR_1) {
    privacy_t *VAR_2 = FUNC_1 (VAR_0->left, VAR_0->right);
    FUNC_0 (VAR_0);
    return VAR_2;
  }
  if (VAR_1 < VAR_0->x) {
    VAR_0->left = FUNC_2 (VAR_0->left, VAR_1);
  } else {
    VAR_0->right = FUNC_2 (VAR_0->right, VAR_1);
  }
  return VAR_0;
}
