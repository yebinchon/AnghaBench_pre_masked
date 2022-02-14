
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** o_tree_sub; } ;
struct TYPE_5__ {int* sublist_size_cum; } ;
struct TYPE_4__ {scalar_t__ delta; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) inline static int FUNC_1 (int VAR_2) {
  FUNC_0 (!(VAR_2 & -8));
  int VAR_3 = VAR_1 ? VAR_1->sublist_size_cum[VAR_2+1] - VAR_1->sublist_size_cum[VAR_2] : 0;
  VAR_3 += VAR_0->o_tree_sub[VAR_2]->delta;
  return VAR_3;
}
