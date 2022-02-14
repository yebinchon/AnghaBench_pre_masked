
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fr_tree; } ;
typedef TYPE_1__ user_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3 (int VAR_4, int VAR_5, int VAR_6) {
  user_t *VAR_7 = FUNC_1 (VAR_4);
  if ((!VAR_7 && FUNC_0 (VAR_4) < 0) || VAR_6 < 0 || VAR_6 > 2) {
    return -1;
  }
  VAR_2 = VAR_0;
  if (!VAR_7) {
    return 0;
  }
  VAR_1 = VAR_5;
  VAR_3 = VAR_6;
  FUNC_2 (VAR_7->fr_tree);
  return (VAR_2 - VAR_0) / (VAR_6 + 1);
}
