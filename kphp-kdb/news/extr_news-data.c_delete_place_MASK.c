
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int place; } ;
typedef TYPE_1__ place_t ;
typedef int notify_place_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int,int,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,char*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7 (int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_3 < VAR_2) {
    return 0;
  }
  if (!FUNC_1 (VAR_5, VAR_6, VAR_7)) {
    return -1;
  }
  place_t *VAR_8 = FUNC_4 (VAR_5, VAR_6, VAR_7, -1);
  FUNC_5 (2, "delete_place: V = %p\n", VAR_8);
  if (!VAR_8) {
    return 0;
  }

  FUNC_0 (VAR_0 || VAR_1);
  if (VAR_0) {
    FUNC_2 (VAR_8);
    VAR_8->place = -1;
    FUNC_6 (VAR_8, sizeof (place_t));
  } else {
    FUNC_3 ((notify_place_t *)VAR_8);
    VAR_8->place = -1;
    FUNC_6 (VAR_8, sizeof (notify_place_t));
  }
  VAR_4--;
  return 1;
}
