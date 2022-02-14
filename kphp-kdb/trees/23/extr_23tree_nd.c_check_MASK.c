
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ depth; int root; } ;
typedef TYPE_1__ tree23_root_t ;


 scalar_t__ FUNC_0 (int ,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1 (tree23_root_t *VAR_0) {
  if (!VAR_0->root) {
    if (VAR_0->depth) {
      return -1;
    }
    return 0;
  }
  if (VAR_0->depth < 0) {
    return -1;
  }
  return FUNC_0 (VAR_0->root, -1 << 31, ~(-1 << 31), VAR_0->depth) ? VAR_0->depth : -1;
}
