
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char,int) ;
 int VAR_3 ;

int FUNC_2 (int VAR_4) {
  switch (VAR_4) {
  case 'F':
    FUNC_0 (!VAR_2);
    VAR_2 = VAR_0;
    break;
  case 'U':
    FUNC_0 (!VAR_2);
    VAR_2 = VAR_1;
    break;
  default:
    FUNC_1 (VAR_3, "Unimplemented option '%c' (%d)\n", (char) VAR_4, VAR_4);
    return -1;
  }
  return 0;
}
