
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cat_mask; int fr_tree; } ;
typedef TYPE_1__ user_t ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2 (user_t *VAR_2, int VAR_3, int *VAR_4, int VAR_5) {
  int VAR_6;
  if (!VAR_2 || VAR_3 <= 0 || VAR_3 >= 32 || (unsigned) VAR_5 > 16384) {
    return -1;
  }
  FUNC_0 (!VAR_5 || VAR_4[0] > 0);
  for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++) {
    FUNC_0 (VAR_4[VAR_6-1] < VAR_4[VAR_6]);
  }
  VAR_0 = VAR_4;
  VAR_1 = VAR_4 + VAR_5;
  FUNC_1 (VAR_2->fr_tree, 1 << VAR_3);
  VAR_2->cat_mask |= (1 << VAR_3);
  return 1;
}
