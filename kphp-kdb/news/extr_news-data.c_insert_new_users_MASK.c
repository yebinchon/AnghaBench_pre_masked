
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bookmark_user {int dummy; } ;
struct TYPE_6__ {int next; } ;
struct TYPE_5__ {int user_id; size_t offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 () ;

int FUNC_3 (int VAR_5) {
  int VAR_6 = -1;
  int VAR_7 = VAR_4;
  while (VAR_7 - VAR_6 > 1) {
    int VAR_8 = (VAR_7 + VAR_6) >> 1;
    if (VAR_3[VAR_8].user_id <= VAR_5) {
      VAR_6 = VAR_8;
    } else {
      VAR_7 = VAR_8;
    }
  }
  if (VAR_6 >= 0 && VAR_3[VAR_6].user_id == VAR_5) {
    return VAR_6;
  }
  VAR_6++;
  FUNC_0 (VAR_4 < VAR_0);
  FUNC_1 (VAR_3 + VAR_6 + 1, VAR_3 + VAR_6, sizeof (struct bookmark_user) * (VAR_4 - VAR_6));
  VAR_3[VAR_6].user_id = VAR_5;
  VAR_3[VAR_6].offset = FUNC_2 ();
  VAR_2[VAR_3[VAR_6].offset].next = VAR_1;
  VAR_4 ++;
  return VAR_6;
}
