
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ x; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ privacy_t ;
typedef scalar_t__ privacy_key_t ;



__attribute__((used)) static privacy_t *FUNC_0 (privacy_t *VAR_0, privacy_key_t VAR_1) {
  while (VAR_0 && VAR_1 != VAR_0->x) {
    VAR_0 = (VAR_1 < VAR_0->x) ? VAR_0->left : VAR_0->right;
  }
  return VAR_0;
}
