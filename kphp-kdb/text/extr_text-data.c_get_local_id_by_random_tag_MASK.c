
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** insert_tags; } ;
typedef TYPE_1__ user_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

int FUNC_1 (int VAR_1, int VAR_2) {
  int VAR_3;
  user_t *VAR_4 = FUNC_0 (VAR_1);

  if (!VAR_4 || VAR_2 <= 0) {
    return 0;
  }
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
    if (VAR_4->insert_tags[VAR_3][0] == VAR_2) {
      return VAR_4->insert_tags[VAR_3][1];
    }
  }
  return 0;
}
