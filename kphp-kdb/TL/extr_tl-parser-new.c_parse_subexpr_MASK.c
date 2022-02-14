
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_6 ;

struct tree *FUNC_5 (void) {
  FUNC_2 (VAR_6);
  int VAR_7 = 0;
  int VAR_8 = 0;

  while (1) {
    FUNC_3 (VAR_4);
    if (VAR_2) {
      FUNC_4 (VAR_3, VAR_2);
    } else if (!VAR_7) {
      VAR_7 = 1;
      FUNC_3 (VAR_5);
      if (VAR_2) {
        FUNC_4 (VAR_3, VAR_2);
      } else {
        break;
      }
    }
    VAR_8 ++;
    if (!FUNC_1 ('+')) {
      break;
    }
    FUNC_0 ("+");
  }
  if (!VAR_8) {
    VAR_0;
  } else {
    VAR_1;
  }
}
