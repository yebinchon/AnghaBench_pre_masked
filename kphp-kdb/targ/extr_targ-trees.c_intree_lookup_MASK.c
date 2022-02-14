
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int treespace_t ;
typedef scalar_t__ treeref_t ;
struct TYPE_2__ {int x; scalar_t__ right; scalar_t__ left; } ;


 TYPE_1__* FUNC_0 (scalar_t__) ;

inline treeref_t FUNC_1 (treespace_t VAR_0, treeref_t VAR_1, int VAR_2) {
  while (VAR_1 && FUNC_0(VAR_1)->x != VAR_2) {
    if (VAR_2 < FUNC_0(VAR_1)->x) {
      VAR_1 = FUNC_0(VAR_1)->left;
    } else {
      VAR_1 = FUNC_0(VAR_1)->right;
    }
  }
  return VAR_1;
}
