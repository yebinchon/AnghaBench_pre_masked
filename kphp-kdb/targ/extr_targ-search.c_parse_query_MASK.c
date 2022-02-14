
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ complexity; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ query_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_1 ;
 char FUNC_2 () ;

query_t *FUNC_3 (int VAR_2) {
  query_t *VAR_3, *VAR_4, *VAR_5;
  VAR_3 = FUNC_1 (VAR_2);
  if (!VAR_3) { return VAR_3; }
  while (FUNC_2() == '|') {
    VAR_0++;
    VAR_4 = FUNC_1 (VAR_2);
    if (!VAR_4) { return VAR_4; }
    VAR_5 = FUNC_0 (VAR_1, 0);
    if (!VAR_5) { return VAR_5; }
    VAR_5->left = VAR_3;
    VAR_5->right = VAR_4;
    VAR_5->complexity = VAR_3->complexity + VAR_4->complexity;
    VAR_3 = VAR_5;
  }
  return VAR_3;
}
