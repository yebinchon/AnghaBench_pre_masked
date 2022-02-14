
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int a; scalar_t__ type; } ;
struct buff_file {int global_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct buff_file*,struct lev_generic*,int) ;

void FUNC_2 (struct buff_file *VAR_3, int VAR_4) {
  int VAR_5 = VAR_2 - VAR_3->global_id - VAR_4;
  FUNC_0 (VAR_5 >= 0);
  static struct lev_generic VAR_6;
  if (VAR_5 > 0 && VAR_5 <= 0xffff) {
    VAR_6.type = VAR_5 + VAR_1;
    FUNC_1 (VAR_3, &VAR_6, 4);
  } else if (VAR_5) {
    VAR_6.type = VAR_0;
    VAR_6.a = VAR_5;
    FUNC_1 (VAR_3, &VAR_6, 8);
  }
  VAR_3->global_id = VAR_2;
}
