
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; int root; } ;
typedef TYPE_1__ tree23_root_t ;


 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_1 (tree23_root_t *VAR_0, int *VAR_1) {
  VAR_1[0] = VAR_1[1] = VAR_1[2] = 0;
  if (!VAR_0->root) {
    return;
  }
  FUNC_0 (VAR_0->root, VAR_0->depth, VAR_1);
}
