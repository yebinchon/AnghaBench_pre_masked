
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3 (int VAR_1) {
  if (FUNC_0 ()) {
    return -1;
  }
  int VAR_2 = FUNC_1 ();
  if (VAR_1) {
    if (VAR_2 <= 0 || VAR_2 >= 31) {
      FUNC_2 (VAR_0, "Set can be performed on cat in range 1..30. Cat = %d", VAR_2);
      return -1;
    }
  } else {
    if (VAR_2 < 0 || VAR_2 >= 31) {
      FUNC_2 (VAR_0, "Get can be performed on cat in range 0..30. Cat = %d", VAR_2);
      return -1;
    }
  }
  return VAR_2;
}
