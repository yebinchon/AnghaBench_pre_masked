
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int user_id; int cat_mask; int* cat_ver; } ;
typedef TYPE_1__ user_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static user_t *FUNC_3 (int VAR_3) {
  int VAR_4 = FUNC_0 (VAR_3);
  user_t *VAR_5;
  if (VAR_4 < 0) { return 0; }
  VAR_5 = VAR_0[VAR_4];
  if (VAR_5) { return VAR_5; }
  VAR_5 = FUNC_2 (sizeof (user_t));
  FUNC_1 (VAR_5, 0, sizeof(user_t));
  VAR_5->user_id = VAR_4;
  VAR_5->cat_mask = 1;
  VAR_0[VAR_4] = VAR_5;
  if (VAR_4 > VAR_1) { VAR_1 = VAR_4; }
  VAR_2++;

  for (VAR_4 = 0; VAR_4 < 31; VAR_4++) {
    VAR_5->cat_ver[VAR_4] = VAR_4;
  }

  return VAR_5;
}
