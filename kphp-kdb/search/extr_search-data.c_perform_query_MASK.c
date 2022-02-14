
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_11 ;
 int FUNC_9 (int,char*,int) ;

int FUNC_10 (void) {
  int VAR_12;
  FUNC_0 ();

  if ((!VAR_5 && !VAR_4) || FUNC_4 () ) {
    return 0;
  }

  if (VAR_11 > 1 && VAR_10 < 0) {
    VAR_10 = FUNC_8 (VAR_8, 0);
    FUNC_2 (VAR_9, "tree depth = %ld\n", VAR_10);
  }

  if (VAR_4) {
    VAR_2 = 0;
    VAR_12 = FUNC_5 ();
    FUNC_3 ();
    return VAR_12;
  }

  FUNC_9 (3, "Q_order = %x\n", VAR_3);
  if (VAR_3 & VAR_0) {
    FUNC_7 ();
  } else {
    FUNC_1 ();
  }

  FUNC_3 ();
  FUNC_6 ();
  return VAR_1 ? VAR_7 : VAR_6;
}
