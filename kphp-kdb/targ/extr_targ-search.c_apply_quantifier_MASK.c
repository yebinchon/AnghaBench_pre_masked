
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int complexity; int flags; int max_res; struct TYPE_6__* left; } ;
typedef TYPE_1__ query_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;

__attribute__((used)) static query_t *FUNC_2 (int VAR_0, query_t *VAR_1) {
  query_t *VAR_2 = FUNC_1 (VAR_0, 0);

  FUNC_0 (VAR_2);
  VAR_2->left = VAR_1;
  VAR_2->complexity = VAR_1->complexity * 4;
  VAR_2->max_res = VAR_1->max_res;
  VAR_2->flags = 2;

  return VAR_2;
}
