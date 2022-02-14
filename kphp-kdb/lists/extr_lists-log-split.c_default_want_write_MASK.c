
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_del_list {int* list_id; } ;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1 (int VAR_5, void *VAR_6, int VAR_7) {
  int VAR_8 = 0;
  switch (VAR_5) {
  case 131:
    return !VAR_4++ && !VAR_2;
  case 134:
    return 0;
  case 130:
  case 136:
  case 132:
  case 133:
    return 0;
  case 135:
    return 1;
  default: {
    switch (VAR_3) {
    case 129:
      VAR_8 = ((struct lev_del_list *) VAR_6)->list_id[0];
      break;
    case 128:
      VAR_8 = FUNC_0(((struct lev_del_list *) VAR_6)->list_id[0]) + FUNC_0(((struct lev_del_list *) VAR_6)->list_id[1]);
      break;
    }
  }
  }
  VAR_8 %= VAR_0;
  if (VAR_8 == VAR_1 || VAR_8 == -VAR_1) {
    return 1;
  }
  return 0;
}
