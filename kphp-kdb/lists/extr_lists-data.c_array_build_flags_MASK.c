
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int listree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4 (listree_t *VAR_5, int VAR_6) {
  int VAR_7 = FUNC_1 (VAR_6);
  if ((unsigned)VAR_7 >= 256) {
    VAR_4 |= VAR_0;
  }
  if (FUNC_3 (VAR_6)) {
    VAR_4 |= VAR_3;
  }
  if (FUNC_0 (VAR_6)) {
    VAR_4 |= VAR_1;
  }
  int VAR_8;
  FUNC_2 (VAR_6, &VAR_8);
  if (VAR_8) {
    VAR_4 |= VAR_2;
  }
  return 0;
}
