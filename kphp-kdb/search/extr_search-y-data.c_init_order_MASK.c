
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int,char*,int,int) ;

__attribute__((used)) static void FUNC_2 (void) {
  VAR_2 = VAR_1 & 0xff;
  FUNC_1 (3, "Q_order = %d, Q_type = %d\n", VAR_1, VAR_2);
  VAR_3 = ((void*)0);
  if (VAR_2 == VAR_0 + 1) {
    VAR_3 = VAR_6;
  } else if (VAR_2 == VAR_0) {
    VAR_3 = VAR_5;
  } else {
    FUNC_0 (VAR_2 <= 15);
    VAR_3 = VAR_4;
  }
}
