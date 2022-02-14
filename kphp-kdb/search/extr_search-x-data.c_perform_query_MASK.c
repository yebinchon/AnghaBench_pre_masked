
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;

int FUNC_7 (void) {
  FUNC_0 ();

  if (!VAR_1 || FUNC_2 () ) {
    return 0;
  }

  if (VAR_5 >= 3) {
    int VAR_6 = FUNC_6 (VAR_4, 0);
    FUNC_3 ("tree depth = %d\n", VAR_6);
  }

  FUNC_5 ();

  FUNC_1 ();
  FUNC_4 ();
  return VAR_0 ? VAR_3 : VAR_2;
}
