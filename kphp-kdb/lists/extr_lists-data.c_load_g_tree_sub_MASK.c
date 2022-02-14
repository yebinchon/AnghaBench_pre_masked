
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int N; scalar_t__ DA; scalar_t__ IA; int * root; } ;
typedef TYPE_1__ listree_xglobal_t ;
struct TYPE_7__ {int * g_tree_sub; } ;
struct TYPE_6__ {int* sublist_size_cum; } ;


 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1 (listree_xglobal_t *VAR_5, int VAR_6) {
  FUNC_0 (!(VAR_6 & -8));
  VAR_5->root = &VAR_0->g_tree_sub[VAR_6];
  if (VAR_2) {
    int VAR_7 = VAR_2->sublist_size_cum[VAR_6], VAR_8 = VAR_2->sublist_size_cum[VAR_6 + 1];
    FUNC_0 (VAR_7 >= 0 && VAR_7 <= VAR_8 && VAR_8 <= VAR_4);
    VAR_5->N = VAR_8 - VAR_7;
    VAR_5->IA = VAR_3 + VAR_7;
    VAR_5->DA = VAR_1;
  } else {
    VAR_5->N = 0;
    VAR_5->IA = 0;
    VAR_5->DA = 0;
  }
}
