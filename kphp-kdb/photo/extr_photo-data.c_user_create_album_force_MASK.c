
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int current_album_id; } ;
typedef TYPE_1__ user ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;

int FUNC_5 (user *VAR_2, int VAR_3) {

  if (!FUNC_1 (VAR_3)) {
    return -1;
  }

  if (VAR_3 > VAR_2->current_album_id) {
    return -1;
  }

  if (VAR_1) {
    return 1;
  }

  FUNC_0 (FUNC_4 (VAR_2));

  if (FUNC_3 (VAR_2) >= VAR_0) {
    return -1;
  }

  return FUNC_2 (VAR_2, VAR_3);
}
