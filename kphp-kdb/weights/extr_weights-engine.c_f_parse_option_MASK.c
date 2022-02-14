
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1 (int VAR_3) {
  switch (VAR_3) {
  case 'U':
    VAR_2++;
    break;
  case 'i':
    VAR_0 = 1;
    break;
  default:
    FUNC_0 (VAR_1, "Unimplemented option '%c' (%d)\n", (char) VAR_3, VAR_3);
    return -1;
  }
  return 0;
}
