
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;
struct conn_target {int custom_field; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct connection** VAR_1 ;
 struct conn_target** VAR_2 ;
 struct connection* FUNC_1 (struct conn_target*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,int) ;

struct connection *FUNC_3 (struct conn_target *VAR_4) {
  struct connection *VAR_5;
  int VAR_6;
  if (VAR_4->custom_field) {
    VAR_6 = VAR_4->custom_field;
    if (VAR_6 < 0) {
      VAR_6 = -VAR_6;
    }
    VAR_6--;
    FUNC_0 ((unsigned) VAR_6 < (unsigned) VAR_3);
    FUNC_0 (VAR_2[VAR_6] == VAR_4);
    VAR_5 = VAR_1[VAR_6];
    if (VAR_4->custom_field > 0) {
      FUNC_2 (&VAR_5->Out, " ", 1);
    } else {
      FUNC_2 (&VAR_5->Out, "get ", 4);
      VAR_4->custom_field = - VAR_4->custom_field;
    }
  } else {
    VAR_5 = FUNC_1 (VAR_4);
    if (!VAR_5) {
      return 0;
    }
    FUNC_0 (VAR_3 < VAR_0);
    VAR_6 = VAR_3++;
    VAR_4->custom_field = VAR_6+1;
    VAR_2[VAR_6] = VAR_4;
    VAR_1[VAR_6] = VAR_5;
    FUNC_2 (&VAR_5->Out, "get ", 4);
  }
  return VAR_5;
}
