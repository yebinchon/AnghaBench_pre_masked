
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_1 () ;
 int VAR_12 ;
 int * VAR_13 ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,int,int,int) ;

__attribute__((used)) static void FUNC_4 (void) {
  VAR_5 = VAR_4 & 0xff;
  VAR_12 = (VAR_4 & VAR_2) ? 2 : 1;
  FUNC_3 (3, "Q_order = %d, Q_type = %d, order = %d\n", VAR_4, VAR_5, VAR_12);
  VAR_6 = ((void*)0);
  if (VAR_5 == VAR_3 + 2) {
    FUNC_2 ();
    FUNC_1 ();
    VAR_6 = VAR_7;
  } else if (VAR_5 == VAR_3 + 1) {
    VAR_6 = VAR_13;
  } else if (VAR_4 & (VAR_0 | VAR_1)) {
    if (VAR_5 == VAR_3) {
      VAR_6 = VAR_10;
    } else {
      FUNC_0 (VAR_5 <= 15);
      VAR_6 = VAR_11;
    }
  } else if (VAR_5 == VAR_3) {
    VAR_6 = VAR_9;
  } else {
    FUNC_0 (VAR_5 <= 15);
    VAR_6 = VAR_8;
  }
}
