
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_flags {int user_id; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0 (int VAR_4, void *VAR_5) {
  int VAR_6 = 0;

  switch (VAR_4) {
  case 129:
    return !VAR_3++ && !VAR_2;
  case 132:
    return 0;
  case 128:
  case 133:
  case 130:
  case 131:
    return 0;
  case 134:
    return 1;
  default:
    VAR_6 = ((struct lev_set_flags *) VAR_5)->user_id;
  }
  VAR_6 %= VAR_0;
  if (VAR_6 == VAR_1 || VAR_6 == -VAR_1) {
    return 1;
  }
  return 0;
}
